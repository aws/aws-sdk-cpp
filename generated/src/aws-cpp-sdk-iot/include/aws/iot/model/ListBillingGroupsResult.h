﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/GroupNameAndArn.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class ListBillingGroupsResult
  {
  public:
    AWS_IOT_API ListBillingGroupsResult();
    AWS_IOT_API ListBillingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListBillingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of billing groups.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetBillingGroups() const{ return m_billingGroups; }
    inline void SetBillingGroups(const Aws::Vector<GroupNameAndArn>& value) { m_billingGroups = value; }
    inline void SetBillingGroups(Aws::Vector<GroupNameAndArn>&& value) { m_billingGroups = std::move(value); }
    inline ListBillingGroupsResult& WithBillingGroups(const Aws::Vector<GroupNameAndArn>& value) { SetBillingGroups(value); return *this;}
    inline ListBillingGroupsResult& WithBillingGroups(Aws::Vector<GroupNameAndArn>&& value) { SetBillingGroups(std::move(value)); return *this;}
    inline ListBillingGroupsResult& AddBillingGroups(const GroupNameAndArn& value) { m_billingGroups.push_back(value); return *this; }
    inline ListBillingGroupsResult& AddBillingGroups(GroupNameAndArn&& value) { m_billingGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBillingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBillingGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBillingGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBillingGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupNameAndArn> m_billingGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
