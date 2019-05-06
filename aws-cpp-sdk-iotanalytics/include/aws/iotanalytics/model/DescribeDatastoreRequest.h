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
  class AWS_IOTANALYTICS_API DescribeDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    DescribeDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDatastore"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <p>If true, additional statistical information about the datastore is included
     * in the response.</p>
     */
    inline bool GetIncludeStatistics() const{ return m_includeStatistics; }

    /**
     * <p>If true, additional statistical information about the datastore is included
     * in the response.</p>
     */
    inline bool IncludeStatisticsHasBeenSet() const { return m_includeStatisticsHasBeenSet; }

    /**
     * <p>If true, additional statistical information about the datastore is included
     * in the response.</p>
     */
    inline void SetIncludeStatistics(bool value) { m_includeStatisticsHasBeenSet = true; m_includeStatistics = value; }

    /**
     * <p>If true, additional statistical information about the datastore is included
     * in the response.</p>
     */
    inline DescribeDatastoreRequest& WithIncludeStatistics(bool value) { SetIncludeStatistics(value); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet;

    bool m_includeStatistics;
    bool m_includeStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
