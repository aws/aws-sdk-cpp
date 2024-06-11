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


    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline GetResourceConfigHistoryRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource (for example., <code>sg-xxxxxx</code>).</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline GetResourceConfigHistoryRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetResourceConfigHistoryRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chronologically latest time in the time range for which the history
     * requested. If not specified, current time is taken.</p>
     */
    inline const Aws::Utils::DateTime& GetLaterTime() const{ return m_laterTime; }
    inline bool LaterTimeHasBeenSet() const { return m_laterTimeHasBeenSet; }
    inline void SetLaterTime(const Aws::Utils::DateTime& value) { m_laterTimeHasBeenSet = true; m_laterTime = value; }
    inline void SetLaterTime(Aws::Utils::DateTime&& value) { m_laterTimeHasBeenSet = true; m_laterTime = std::move(value); }
    inline GetResourceConfigHistoryRequest& WithLaterTime(const Aws::Utils::DateTime& value) { SetLaterTime(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithLaterTime(Aws::Utils::DateTime&& value) { SetLaterTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chronologically earliest time in the time range for which the history
     * requested. If not specified, the action returns paginated results that contain
     * configuration items that start when the first configuration item was
     * recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetEarlierTime() const{ return m_earlierTime; }
    inline bool EarlierTimeHasBeenSet() const { return m_earlierTimeHasBeenSet; }
    inline void SetEarlierTime(const Aws::Utils::DateTime& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = value; }
    inline void SetEarlierTime(Aws::Utils::DateTime&& value) { m_earlierTimeHasBeenSet = true; m_earlierTime = std::move(value); }
    inline GetResourceConfigHistoryRequest& WithEarlierTime(const Aws::Utils::DateTime& value) { SetEarlierTime(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithEarlierTime(Aws::Utils::DateTime&& value) { SetEarlierTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chronological order for configuration items listed. By default, the
     * results are listed in reverse chronological order.</p>
     */
    inline const ChronologicalOrder& GetChronologicalOrder() const{ return m_chronologicalOrder; }
    inline bool ChronologicalOrderHasBeenSet() const { return m_chronologicalOrderHasBeenSet; }
    inline void SetChronologicalOrder(const ChronologicalOrder& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = value; }
    inline void SetChronologicalOrder(ChronologicalOrder&& value) { m_chronologicalOrderHasBeenSet = true; m_chronologicalOrder = std::move(value); }
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(const ChronologicalOrder& value) { SetChronologicalOrder(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithChronologicalOrder(ChronologicalOrder&& value) { SetChronologicalOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of configuration items returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetResourceConfigHistoryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetResourceConfigHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetResourceConfigHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetResourceConfigHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
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
