/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class DescribeDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API DescribeDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDatastore"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

    AWS_IOTANALYTICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the data store</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The name of the data store</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The name of the data store</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store</p>
     */
    inline DescribeDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store</p>
     */
    inline DescribeDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store</p>
     */
    inline DescribeDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>If true, additional statistical information about the data store is included
     * in the response. This feature can't be used with a data store whose S3 storage
     * is customer-managed.</p>
     */
    inline bool GetIncludeStatistics() const{ return m_includeStatistics; }

    /**
     * <p>If true, additional statistical information about the data store is included
     * in the response. This feature can't be used with a data store whose S3 storage
     * is customer-managed.</p>
     */
    inline bool IncludeStatisticsHasBeenSet() const { return m_includeStatisticsHasBeenSet; }

    /**
     * <p>If true, additional statistical information about the data store is included
     * in the response. This feature can't be used with a data store whose S3 storage
     * is customer-managed.</p>
     */
    inline void SetIncludeStatistics(bool value) { m_includeStatisticsHasBeenSet = true; m_includeStatistics = value; }

    /**
     * <p>If true, additional statistical information about the data store is included
     * in the response. This feature can't be used with a data store whose S3 storage
     * is customer-managed.</p>
     */
    inline DescribeDatastoreRequest& WithIncludeStatistics(bool value) { SetIncludeStatistics(value); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    bool m_includeStatistics;
    bool m_includeStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
