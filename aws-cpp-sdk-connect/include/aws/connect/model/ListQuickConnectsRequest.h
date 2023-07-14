﻿/**
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
  class AWS_CONNECT_API ListQuickConnectsRequest : public ConnectRequest
  {
  public:
    ListQuickConnectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQuickConnects"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListQuickConnectsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListQuickConnectsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline ListQuickConnectsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListQuickConnectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListQuickConnectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListQuickConnectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListQuickConnectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline const Aws::Vector<QuickConnectType>& GetQuickConnectTypes() const{ return m_quickConnectTypes; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline bool QuickConnectTypesHasBeenSet() const { return m_quickConnectTypesHasBeenSet; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline void SetQuickConnectTypes(const Aws::Vector<QuickConnectType>& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes = value; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline void SetQuickConnectTypes(Aws::Vector<QuickConnectType>&& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes = std::move(value); }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline ListQuickConnectsRequest& WithQuickConnectTypes(const Aws::Vector<QuickConnectType>& value) { SetQuickConnectTypes(value); return *this;}

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline ListQuickConnectsRequest& WithQuickConnectTypes(Aws::Vector<QuickConnectType>&& value) { SetQuickConnectTypes(std::move(value)); return *this;}

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline ListQuickConnectsRequest& AddQuickConnectTypes(const QuickConnectType& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes.push_back(value); return *this; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline ListQuickConnectsRequest& AddQuickConnectTypes(QuickConnectType&& value) { m_quickConnectTypesHasBeenSet = true; m_quickConnectTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<QuickConnectType> m_quickConnectTypes;
    bool m_quickConnectTypesHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
