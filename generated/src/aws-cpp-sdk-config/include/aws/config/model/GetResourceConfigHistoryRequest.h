/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ChronologicalOrder.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>GetResourceConfigHistory</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistoryRequest">AWS
   * API Reference</a></p>
   */
  class GetResourceConfigHistoryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceConfigHistory"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline GetResourceConfigHistoryRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

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
    inline GetResourceConfigHistoryRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

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
    inline bool LaterTimeHasBeenSet() const { return m_laterTimeHasBeenSet; }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline void SetLaterTime(const Aws::Utils::DateTime& value) { m_laterTimeHasBeenSet = true; m_laterTime = value; }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline void SetLaterTime(Aws::Utils::DateTime&& value) { m_laterTimeHasBeenSet = true; m_laterTime = std::move(value); }

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline GetResourceConfigHistoryRequest& WithLaterTime(const Aws::Utils::DateTime& value) { SetLaterTime(value); return *this;}

    /**
     * <p>The time stamp that indicates a later time. If not specified, current time is
     * taken.</p>
     */
    inline GetResourceConfigHistoryRequest& WithLaterTime(Aws::Utils::DateTime&& value) { SetLaterTime(std::move(value)); return *this;}


    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetEarlierTime() const{ return m_earlierTime; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline bool EarlierTimeHasBeenSet() const { return m_earlierTimeHasBeenSet; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline void SetEarlierTime(const Aws::Utils::DateTime& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = value; }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline void SetEarlierTime(Aws::Utils::DateTime&& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = std::move(value); }

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline GetResourceConfigHistoryRequest& WithEarlierTime(const Aws::Utils::DateTime& value) { SetEarlierTime(value); return *this;}

    /**
     * <p>The time stamp that indicates an earlier time. If not specified, the action
     * returns paginated results that contain configuration items that start when the
     * first configuration item was recorded.</p>
     */
    inline GetResourceConfigHistoryRequest& WithEarlierTime(Aws::Utils::DateTime&& value) { SetEarlierTime(std::move(value)); return *this;}


    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline const ChronologicalOrder& GetChronologicalOrder() const{ return m_chronologicalOrder; }

    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline bool ChronologicalOrderHasBeenSet() const { return m_chronologicalOrderHasBeenSet; }

    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline void SetChronologicalOrder(const ChronologicalOrder& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = value; }

    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline void SetChronologicalOrder(ChronologicalOrder&& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = std::move(value); }

    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(const ChronologicalOrder& value) { SetChronologicalOrder(value); return *this;}

    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(ChronologicalOrder&& value) { SetChronologicalOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline GetResourceConfigHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_laterTime;
    bool m_laterTimeHasBeenSet = false;

    Aws::Utils::DateTime m_earlierTime;
    bool m_earlierTimeHasBeenSet = false;

    ChronologicalOrder m_chronologicalOrder;
    bool m_chronologicalOrderHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
