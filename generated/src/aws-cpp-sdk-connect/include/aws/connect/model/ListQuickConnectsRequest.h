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
    AWS_CONNECT_API ListQuickConnectsRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListQuickConnectsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQuickConnectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page. The default MaxResult size
     * is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::Vector<QuickConnectType>& GetQuickConnectTypes() const { return m_quickConnectTypes; }
    inline bool QuickConnectTypesHasBeenSet() const { return m_quickConnectTypesHasBeenSet; }
    template<typename QuickConnectTypesT = Aws::Vector<QuickConnectType>>
    void SetQuickConnectTypes(QuickConnectTypesT&& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes = std::forward<QuickConnectTypesT>(value); }
    template<typename QuickConnectTypesT = Aws::Vector<QuickConnectType>>
    ListQuickConnectsRequest& WithQuickConnectTypes(QuickConnectTypesT&& value) { SetQuickConnectTypes(std::forward<QuickConnectTypesT>(value)); return *this;}
    inline ListQuickConnectsRequest& AddQuickConnectTypes(QuickConnectType value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<QuickConnectType> m_quickConnectTypes;
    bool m_quickConnectTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
