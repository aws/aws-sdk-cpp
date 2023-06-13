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
    AWS_DRS_API DescribeSourceNetworksRequestFilters();
    AWS_DRS_API DescribeSourceNetworksRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeSourceNetworksRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline const Aws::String& GetOriginAccountID() const{ return m_originAccountID; }

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline void SetOriginAccountID(const Aws::String& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = value; }

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline void SetOriginAccountID(Aws::String&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::move(value); }

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline void SetOriginAccountID(const char* value) { m_originAccountIDHasBeenSet = true; m_originAccountID.assign(value); }

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginAccountID(const Aws::String& value) { SetOriginAccountID(value); return *this;}

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginAccountID(Aws::String&& value) { SetOriginAccountID(std::move(value)); return *this;}

    /**
     * <p>Filter Source Networks by account ID containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginAccountID(const char* value) { SetOriginAccountID(value); return *this;}


    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline const Aws::String& GetOriginRegion() const{ return m_originRegion; }

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline void SetOriginRegion(const Aws::String& value) { m_originRegionHasBeenSet = true; m_originRegion = value; }

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline void SetOriginRegion(Aws::String&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::move(value); }

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline void SetOriginRegion(const char* value) { m_originRegionHasBeenSet = true; m_originRegion.assign(value); }

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginRegion(const Aws::String& value) { SetOriginRegion(value); return *this;}

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginRegion(Aws::String&& value) { SetOriginRegion(std::move(value)); return *this;}

    /**
     * <p>Filter Source Networks by the region containing the protected VPCs.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithOriginRegion(const char* value) { SetOriginRegion(value); return *this;}


    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNetworkIDs() const{ return m_sourceNetworkIDs; }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline bool SourceNetworkIDsHasBeenSet() const { return m_sourceNetworkIDsHasBeenSet; }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline void SetSourceNetworkIDs(const Aws::Vector<Aws::String>& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs = value; }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline void SetSourceNetworkIDs(Aws::Vector<Aws::String>&& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs = std::move(value); }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithSourceNetworkIDs(const Aws::Vector<Aws::String>& value) { SetSourceNetworkIDs(value); return *this;}

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline DescribeSourceNetworksRequestFilters& WithSourceNetworkIDs(Aws::Vector<Aws::String>&& value) { SetSourceNetworkIDs(std::move(value)); return *this;}

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline DescribeSourceNetworksRequestFilters& AddSourceNetworkIDs(const Aws::String& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs.push_back(value); return *this; }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline DescribeSourceNetworksRequestFilters& AddSourceNetworkIDs(Aws::String&& value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Source Network IDs that should be returned. An empty array means
     * all Source Networks.</p>
     */
    inline DescribeSourceNetworksRequestFilters& AddSourceNetworkIDs(const char* value) { m_sourceNetworkIDsHasBeenSet = true; m_sourceNetworkIDs.push_back(value); return *this; }

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
