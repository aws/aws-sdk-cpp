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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API ListDashboardsRequest : public CloudWatchRequest
  {
  public:
    ListDashboardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDashboards"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline const Aws::String& GetDashboardNamePrefix() const{ return m_dashboardNamePrefix; }

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline bool DashboardNamePrefixHasBeenSet() const { return m_dashboardNamePrefixHasBeenSet; }

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline void SetDashboardNamePrefix(const Aws::String& value) { m_dashboardNamePrefixHasBeenSet = true; m_dashboardNamePrefix = value; }

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline void SetDashboardNamePrefix(Aws::String&& value) { m_dashboardNamePrefixHasBeenSet = true; m_dashboardNamePrefix = std::move(value); }

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline void SetDashboardNamePrefix(const char* value) { m_dashboardNamePrefixHasBeenSet = true; m_dashboardNamePrefix.assign(value); }

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline ListDashboardsRequest& WithDashboardNamePrefix(const Aws::String& value) { SetDashboardNamePrefix(value); return *this;}

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline ListDashboardsRequest& WithDashboardNamePrefix(Aws::String&& value) { SetDashboardNamePrefix(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline ListDashboardsRequest& WithDashboardNamePrefix(const char* value) { SetDashboardNamePrefix(value); return *this;}


    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListDashboardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListDashboardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListDashboardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_dashboardNamePrefix;
    bool m_dashboardNamePrefixHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
