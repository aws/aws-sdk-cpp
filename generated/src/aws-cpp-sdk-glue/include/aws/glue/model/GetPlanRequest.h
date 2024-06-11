﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CatalogEntry.h>
#include <aws/glue/model/Location.h>
#include <aws/glue/model/Language.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/MappingEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetPlanRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPlan"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of mappings from a source table to target tables.</p>
     */
    inline const Aws::Vector<MappingEntry>& GetMapping() const{ return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    inline void SetMapping(const Aws::Vector<MappingEntry>& value) { m_mappingHasBeenSet = true; m_mapping = value; }
    inline void SetMapping(Aws::Vector<MappingEntry>&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }
    inline GetPlanRequest& WithMapping(const Aws::Vector<MappingEntry>& value) { SetMapping(value); return *this;}
    inline GetPlanRequest& WithMapping(Aws::Vector<MappingEntry>&& value) { SetMapping(std::move(value)); return *this;}
    inline GetPlanRequest& AddMapping(const MappingEntry& value) { m_mappingHasBeenSet = true; m_mapping.push_back(value); return *this; }
    inline GetPlanRequest& AddMapping(MappingEntry&& value) { m_mappingHasBeenSet = true; m_mapping.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source table.</p>
     */
    inline const CatalogEntry& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const CatalogEntry& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(CatalogEntry&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline GetPlanRequest& WithSource(const CatalogEntry& value) { SetSource(value); return *this;}
    inline GetPlanRequest& WithSource(CatalogEntry&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target tables.</p>
     */
    inline const Aws::Vector<CatalogEntry>& GetSinks() const{ return m_sinks; }
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
    inline void SetSinks(const Aws::Vector<CatalogEntry>& value) { m_sinksHasBeenSet = true; m_sinks = value; }
    inline void SetSinks(Aws::Vector<CatalogEntry>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }
    inline GetPlanRequest& WithSinks(const Aws::Vector<CatalogEntry>& value) { SetSinks(value); return *this;}
    inline GetPlanRequest& WithSinks(Aws::Vector<CatalogEntry>&& value) { SetSinks(std::move(value)); return *this;}
    inline GetPlanRequest& AddSinks(const CatalogEntry& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }
    inline GetPlanRequest& AddSinks(CatalogEntry&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters for the mapping.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline GetPlanRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline GetPlanRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The programming language of the code to perform the mapping.</p>
     */
    inline const Language& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Language& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Language&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline GetPlanRequest& WithLanguage(const Language& value) { SetLanguage(value); return *this;}
    inline GetPlanRequest& WithLanguage(Language&& value) { SetLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map to hold additional optional key-value parameters.</p> <p>Currently,
     * these key-value pairs are supported:</p> <ul> <li> <p> <code>inferSchema</code> 
     * —  Specifies whether to set <code>inferSchema</code> to true or false for the
     * default script generated by an Glue job. For example, to set
     * <code>inferSchema</code> to true, pass the following key value pair:</p> <p>
     * <code>--additional-plan-options-map '{"inferSchema":"true"}'</code> </p> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalPlanOptionsMap() const{ return m_additionalPlanOptionsMap; }
    inline bool AdditionalPlanOptionsMapHasBeenSet() const { return m_additionalPlanOptionsMapHasBeenSet; }
    inline void SetAdditionalPlanOptionsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap = value; }
    inline void SetAdditionalPlanOptionsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap = std::move(value); }
    inline GetPlanRequest& WithAdditionalPlanOptionsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalPlanOptionsMap(value); return *this;}
    inline GetPlanRequest& WithAdditionalPlanOptionsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalPlanOptionsMap(std::move(value)); return *this;}
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(const Aws::String& key, const Aws::String& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(key, value); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(Aws::String&& key, const Aws::String& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(std::move(key), value); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(const Aws::String& key, Aws::String&& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(key, std::move(value)); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(Aws::String&& key, Aws::String&& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(std::move(key), std::move(value)); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(const char* key, Aws::String&& value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(key, std::move(value)); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(Aws::String&& key, const char* value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(std::move(key), value); return *this; }
    inline GetPlanRequest& AddAdditionalPlanOptionsMap(const char* key, const char* value) { m_additionalPlanOptionsMapHasBeenSet = true; m_additionalPlanOptionsMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<MappingEntry> m_mapping;
    bool m_mappingHasBeenSet = false;

    CatalogEntry m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<CatalogEntry> m_sinks;
    bool m_sinksHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Language m_language;
    bool m_languageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalPlanOptionsMap;
    bool m_additionalPlanOptionsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
