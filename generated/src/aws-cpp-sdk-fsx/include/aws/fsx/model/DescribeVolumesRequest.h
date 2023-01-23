/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeFilter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeVolumesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeVolumesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumes"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline DescribeVolumesRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline DescribeVolumesRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the volumes whose descriptions you want to retrieve.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }


    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline const Aws::Vector<VolumeFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline void SetFilters(const Aws::Vector<VolumeFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline void SetFilters(Aws::Vector<VolumeFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline DescribeVolumesRequest& WithFilters(const Aws::Vector<VolumeFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline DescribeVolumesRequest& WithFilters(Aws::Vector<VolumeFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline DescribeVolumesRequest& AddFilters(const VolumeFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Enter a filter <code>Name</code> and <code>Values</code> pair to view a
     * select set of volumes.</p>
     */
    inline DescribeVolumesRequest& AddFilters(VolumeFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeVolumesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeVolumesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeVolumesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeVolumesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    Aws::Vector<VolumeFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
