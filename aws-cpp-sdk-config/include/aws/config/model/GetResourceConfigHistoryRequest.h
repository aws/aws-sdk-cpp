/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ChronologicalOrder.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>GetResourceConfigHistory</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API GetResourceConfigHistoryRequest : public ConfigServiceRequest
  {
  public:
    GetResourceConfigHistoryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline const Aws::Utils::DateTime& GetLaterTime() const{ return m_laterTime; }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline void SetLaterTime(const Aws::Utils::DateTime& value) { m_laterTimeHasBeenSet = true; m_laterTime = value; }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline void SetLaterTime(Aws::Utils::DateTime&& value) { m_laterTimeHasBeenSet = true; m_laterTime = value; }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline GetResourceConfigHistoryRequest& WithLaterTime(const Aws::Utils::DateTime& value) { SetLaterTime(value); return *this;}

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline GetResourceConfigHistoryRequest& WithLaterTime(Aws::Utils::DateTime&& value) { SetLaterTime(value); return *this;}

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start from when
     * the first configuration item was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetEarlierTime() const{ return m_earlierTime; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start from when
     * the first configuration item was recorded.</p>
     */
    inline void SetEarlierTime(const Aws::Utils::DateTime& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = value; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start from when
     * the first configuration item was recorded.</p>
     */
    inline void SetEarlierTime(Aws::Utils::DateTime&& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = value; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start from when
     * the first configuration item was recorded.</p>
     */
    inline GetResourceConfigHistoryRequest& WithEarlierTime(const Aws::Utils::DateTime& value) { SetEarlierTime(value); return *this;}

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start from when
     * the first configuration item was recorded.</p>
     */
    inline GetResourceConfigHistoryRequest& WithEarlierTime(Aws::Utils::DateTime&& value) { SetEarlierTime(value); return *this;}

    /**
     * <p>The chronological order for configuration items listed. By default the
     * results are listed in reverse chronological order.</p>
     */
    inline const ChronologicalOrder& GetChronologicalOrder() const{ return m_chronologicalOrder; }

    /**
     * <p>The chronological order for configuration items listed. By default the
     * results are listed in reverse chronological order.</p>
     */
    inline void SetChronologicalOrder(const ChronologicalOrder& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = value; }

    /**
     * <p>The chronological order for configuration items listed. By default the
     * results are listed in reverse chronological order.</p>
     */
    inline void SetChronologicalOrder(ChronologicalOrder&& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = value; }

    /**
     * <p>The chronological order for configuration items listed. By default the
     * results are listed in reverse chronological order.</p>
     */
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(const ChronologicalOrder& value) { SetChronologicalOrder(value); return *this;}

    /**
     * <p>The chronological order for configuration items listed. By default the
     * results are listed in reverse chronological order.</p>
     */
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(ChronologicalOrder&& value) { SetChronologicalOrder(value); return *this;}

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline GetResourceConfigHistoryRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Utils::DateTime m_laterTime;
    bool m_laterTimeHasBeenSet;
    Aws::Utils::DateTime m_earlierTime;
    bool m_earlierTimeHasBeenSet;
    ChronologicalOrder m_chronologicalOrder;
    bool m_chronologicalOrderHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
