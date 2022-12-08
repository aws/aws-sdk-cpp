/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/FlowDefinition.h>
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
namespace Appflow
{
namespace Model
{
  class ListFlowsResult
  {
  public:
    AWS_APPFLOW_API ListFlowsResult();
    AWS_APPFLOW_API ListFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API ListFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline const Aws::Vector<FlowDefinition>& GetFlows() const{ return m_flows; }

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline void SetFlows(const Aws::Vector<FlowDefinition>& value) { m_flows = value; }

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline void SetFlows(Aws::Vector<FlowDefinition>&& value) { m_flows = std::move(value); }

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline ListFlowsResult& WithFlows(const Aws::Vector<FlowDefinition>& value) { SetFlows(value); return *this;}

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline ListFlowsResult& WithFlows(Aws::Vector<FlowDefinition>&& value) { SetFlows(std::move(value)); return *this;}

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline ListFlowsResult& AddFlows(const FlowDefinition& value) { m_flows.push_back(value); return *this; }

    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline ListFlowsResult& AddFlows(FlowDefinition&& value) { m_flows.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline ListFlowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline ListFlowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline ListFlowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FlowDefinition> m_flows;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
