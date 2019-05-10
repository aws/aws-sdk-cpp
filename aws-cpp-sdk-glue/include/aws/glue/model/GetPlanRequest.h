/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CatalogEntry.h>
#include <aws/glue/model/Location.h>
#include <aws/glue/model/Language.h>
#include <aws/glue/model/MappingEntry.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetPlanRequest : public GlueRequest
  {
  public:
    GetPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPlan"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline const Aws::Vector<MappingEntry>& GetMapping() const{ return m_mapping; }

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline void SetMapping(const Aws::Vector<MappingEntry>& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline void SetMapping(Aws::Vector<MappingEntry>&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline GetPlanRequest& WithMapping(const Aws::Vector<MappingEntry>& value) { SetMapping(value); return *this;}

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline GetPlanRequest& WithMapping(Aws::Vector<MappingEntry>&& value) { SetMapping(std::move(value)); return *this;}

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline GetPlanRequest& AddMapping(const MappingEntry& value) { m_mappingHasBeenSet = true; m_mapping.push_back(value); return *this; }

    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline GetPlanRequest& AddMapping(MappingEntry&& value) { m_mappingHasBeenSet = true; m_mapping.push_back(std::move(value)); return *this; }


    /**
     * <p>The source table.</p>
     */
    inline const CatalogEntry& GetSource() const{ return m_source; }

    /**
     * <p>The source table.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source table.</p>
     */
    inline void SetSource(const CatalogEntry& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source table.</p>
     */
    inline void SetSource(CatalogEntry&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source table.</p>
     */
    inline GetPlanRequest& WithSource(const CatalogEntry& value) { SetSource(value); return *this;}

    /**
     * <p>The source table.</p>
     */
    inline GetPlanRequest& WithSource(CatalogEntry&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The target tables.</p>
     */
    inline const Aws::Vector<CatalogEntry>& GetSinks() const{ return m_sinks; }

    /**
     * <p>The target tables.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>The target tables.</p>
     */
    inline void SetSinks(const Aws::Vector<CatalogEntry>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>The target tables.</p>
     */
    inline void SetSinks(Aws::Vector<CatalogEntry>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>The target tables.</p>
     */
    inline GetPlanRequest& WithSinks(const Aws::Vector<CatalogEntry>& value) { SetSinks(value); return *this;}

    /**
     * <p>The target tables.</p>
     */
    inline GetPlanRequest& WithSinks(Aws::Vector<CatalogEntry>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>The target tables.</p>
     */
    inline GetPlanRequest& AddSinks(const CatalogEntry& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>The target tables.</p>
     */
    inline GetPlanRequest& AddSinks(CatalogEntry&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameters for the mapping.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The parameters for the mapping.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The parameters for the mapping.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The parameters for the mapping.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The parameters for the mapping.</p>
     */
    inline GetPlanRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The parameters for the mapping.</p>
     */
    inline GetPlanRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline const Language& GetLanguage() const{ return m_language; }

    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline void SetLanguage(const Language& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline void SetLanguage(Language&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline GetPlanRequest& WithLanguage(const Language& value) { SetLanguage(value); return *this;}

    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline GetPlanRequest& WithLanguage(Language&& value) { SetLanguage(std::move(value)); return *this;}

  private:

    Aws::Vector<MappingEntry> m_mapping;
    bool m_mappingHasBeenSet;

    CatalogEntry m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<CatalogEntry> m_sinks;
    bool m_sinksHasBeenSet;

    Location m_location;
    bool m_locationHasBeenSet;

    Language m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
