/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/QuickConnectType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class ListQuickConnectsRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListQuickConnectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQuickConnects"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ListQuickConnectsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ListQuickConnectsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ListQuickConnectsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListQuickConnectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQuickConnectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQuickConnectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page. The default MaxResult size
     * is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListQuickConnectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of quick connect. In the Amazon Connect admin website, when you
     * create a quick connect, you are prompted to assign one of the following types:
     * Agent (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline const Aws::Vector<QuickConnectType>& GetQuickConnectTypes() const{ return m_quickConnectTypes; }
    inline bool QuickConnectTypesHasBeenSet() const { return m_quickConnectTypesHasBeenSet; }
    inline void SetQuickConnectTypes(const Aws::Vector<QuickConnectType>& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes = value; }
    inline void SetQuickConnectTypes(Aws::Vector<QuickConnectType>&& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes = std::move(value); }
    inline ListQuickConnectsRequest& WithQuickConnectTypes(const Aws::Vector<QuickConnectType>& value) { SetQuickConnectTypes(value); return *this;}
    inline ListQuickConnectsRequest& WithQuickConnectTypes(Aws::Vector<QuickConnectType>&& value) { SetQuickConnectTypes(std::move(value)); return *this;}
    inline ListQuickConnectsRequest& AddQuickConnectTypes(const QuickConnectType& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes.push_back(value); return *this; }
    inline ListQuickConnectsRequest& AddQuickConnectTypes(QuickConnectType&& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<QuickConnectType> m_quickConnectTypes;
    bool m_quickConnectTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
