/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{

  /**
   * <p>A set of filters by which to return Source Networks.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceNetworksRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeSourceNetworksRequestFilters
  {
  public:
    AWS_DRS_API DescribeSourceNetworksRequestFilters() = default;
    AWS_DRS_API DescribeSourceNetworksRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeSourceNetworksRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline const Aws::String& GetOriginAccountID() const { return m_originAccountID; }
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }
    template<typename OriginAccountIDT = Aws::String>
    void SetOriginAccountID(OriginAccountIDT&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::forward<OriginAccountIDT>(value); }
    template<typename OriginAccountIDT = Aws::String>
    DescribeSourceNetworksRequestFilters& WithOriginAccountID(OriginAccountIDT&& value) { SetOriginAccountID(std::forward<OriginAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline const Aws::String& GetOriginRegion() const { return m_originRegion; }
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }
    template<typename OriginRegionT = Aws::String>
    void SetOriginRegion(OriginRegionT&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::forward<OriginRegionT>(value); }
    template<typename OriginRegionT = Aws::String>
    DescribeSourceNetworksRequestFilters& WithOriginRegion(OriginRegionT&& value) { SetOriginRegion(std::forward<OriginRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNetworkIDs() const { return m_sourceNetworkIDs; }
    inline bool SourceNetworkIDsHasBeenSet() const { return m_sourceNetworkIDsHasBeenSet; }
    template<typename SourceNetworkIDsT = Aws::Vector<Aws::String>>
    void SetSourceNetworkIDs(SourceNetworkIDsT&& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs = std::forward<SourceNetworkIDsT>(value); }
    template<typename SourceNetworkIDsT = Aws::Vector<Aws::String>>
    DescribeSourceNetworksRequestFilters& WithSourceNetworkIDs(SourceNetworkIDsT&& value) { SetSourceNetworkIDs(std::forward<SourceNetworkIDsT>(value)); return *this;}
    template<typename SourceNetworkIDsT = Aws::String>
    DescribeSourceNetworksRequestFilters& AddSourceNetworkIDs(SourceNetworkIDsT&& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs.emplace_back(std::forward<SourceNetworkIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_originAccountID;
    bool m_originAccountIDHasBeenSet = false;

    Aws::String m_originRegion;
    bool m_originRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceNetworkIDs;
    bool m_sourceNetworkIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
