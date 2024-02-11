/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class DescribeStorageSystemResourceMetricsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResourceMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageSystemResourceMetrics"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}


    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline const DiscoveryResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline void SetResourceType(const DiscoveryResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline void SetResourceType(DiscoveryResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithResourceType(const DiscoveryResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the kind of storage system resource that you want information
     * about.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithResourceType(DiscoveryResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the universally unique identifier (UUID) of the storage system
     * resource that you want information about.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>EndTime</code>.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Specifies a time within the total duration that the discovery job ran. To see
     * information gathered during a certain time frame, use this parameter with
     * <code>StartTime</code>.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Specifies how many results that you want in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies how many results that you want in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies how many results that you want in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies how many results that you want in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    DiscoveryResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
