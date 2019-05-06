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
#include <aws/glue/model/CatalogEntry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Location.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetMappingRequest : public GlueRequest
  {
  public:
    GetMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapping"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the source table.</p>
     */
    inline const CatalogEntry& GetSource() const{ return m_source; }

    /**
     * <p>Specifies the source table.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Specifies the source table.</p>
     */
    inline void SetSource(const CatalogEntry& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Specifies the source table.</p>
     */
    inline void SetSource(CatalogEntry&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Specifies the source table.</p>
     */
    inline GetMappingRequest& WithSource(const CatalogEntry& value) { SetSource(value); return *this;}

    /**
     * <p>Specifies the source table.</p>
     */
    inline GetMappingRequest& WithSource(CatalogEntry&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>A list of target tables.</p>
     */
    inline const Aws::Vector<CatalogEntry>& GetSinks() const{ return m_sinks; }

    /**
     * <p>A list of target tables.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>A list of target tables.</p>
     */
    inline void SetSinks(const Aws::Vector<CatalogEntry>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>A list of target tables.</p>
     */
    inline void SetSinks(Aws::Vector<CatalogEntry>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>A list of target tables.</p>
     */
    inline GetMappingRequest& WithSinks(const Aws::Vector<CatalogEntry>& value) { SetSinks(value); return *this;}

    /**
     * <p>A list of target tables.</p>
     */
    inline GetMappingRequest& WithSinks(Aws::Vector<CatalogEntry>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>A list of target tables.</p>
     */
    inline GetMappingRequest& AddSinks(const CatalogEntry& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>A list of target tables.</p>
     */
    inline GetMappingRequest& AddSinks(CatalogEntry&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>Parameters for the mapping.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>Parameters for the mapping.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Parameters for the mapping.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Parameters for the mapping.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Parameters for the mapping.</p>
     */
    inline GetMappingRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>Parameters for the mapping.</p>
     */
    inline GetMappingRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}

  private:

    CatalogEntry m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<CatalogEntry> m_sinks;
    bool m_sinksHasBeenSet;

    Location m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
