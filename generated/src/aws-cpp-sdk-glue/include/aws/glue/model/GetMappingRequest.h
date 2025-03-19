/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetMappingRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapping"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the source table.</p>
     */
    inline const CatalogEntry& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = CatalogEntry>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = CatalogEntry>
    GetMappingRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of target tables.</p>
     */
    inline const Aws::Vector<CatalogEntry>& GetSinks() const { return m_sinks; }
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
    template<typename SinksT = Aws::Vector<CatalogEntry>>
    void SetSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks = std::forward<SinksT>(value); }
    template<typename SinksT = Aws::Vector<CatalogEntry>>
    GetMappingRequest& WithSinks(SinksT&& value) { SetSinks(std::forward<SinksT>(value)); return *this;}
    template<typename SinksT = CatalogEntry>
    GetMappingRequest& AddSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks.emplace_back(std::forward<SinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parameters for the mapping.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    GetMappingRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    CatalogEntry m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<CatalogEntry> m_sinks;
    bool m_sinksHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
