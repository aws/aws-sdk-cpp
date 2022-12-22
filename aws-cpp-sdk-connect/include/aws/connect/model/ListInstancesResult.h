/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_CONNECT_API ListInstancesResult();
    AWS_CONNECT_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the instances.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaryList() const{ return m_instanceSummaryList; }

    /**
     * <p>Information about the instances.</p>
     */
    inline void SetInstanceSummaryList(const Aws::Vector<InstanceSummary>& value) { m_instanceSummaryList = value; }

    /**
     * <p>Information about the instances.</p>
     */
    inline void SetInstanceSummaryList(Aws::Vector<InstanceSummary>&& value) { m_instanceSummaryList = std::move(value); }

    /**
     * <p>Information about the instances.</p>
     */
    inline ListInstancesResult& WithInstanceSummaryList(const Aws::Vector<InstanceSummary>& value) { SetInstanceSummaryList(value); return *this;}

    /**
     * <p>Information about the instances.</p>
     */
    inline ListInstancesResult& WithInstanceSummaryList(Aws::Vector<InstanceSummary>&& value) { SetInstanceSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the instances.</p>
     */
    inline ListInstancesResult& AddInstanceSummaryList(const InstanceSummary& value) { m_instanceSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the instances.</p>
     */
    inline ListInstancesResult& AddInstanceSummaryList(InstanceSummary&& value) { m_instanceSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceSummary> m_instanceSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
