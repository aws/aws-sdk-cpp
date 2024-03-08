/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FlowAssociationSummary.h>
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
  class BatchGetFlowAssociationResult
  {
  public:
    AWS_CONNECT_API BatchGetFlowAssociationResult();
    AWS_CONNECT_API BatchGetFlowAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchGetFlowAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about flow associations.</p>
     */
    inline const Aws::Vector<FlowAssociationSummary>& GetFlowAssociationSummaryList() const{ return m_flowAssociationSummaryList; }

    /**
     * <p>Information about flow associations.</p>
     */
    inline void SetFlowAssociationSummaryList(const Aws::Vector<FlowAssociationSummary>& value) { m_flowAssociationSummaryList = value; }

    /**
     * <p>Information about flow associations.</p>
     */
    inline void SetFlowAssociationSummaryList(Aws::Vector<FlowAssociationSummary>&& value) { m_flowAssociationSummaryList = std::move(value); }

    /**
     * <p>Information about flow associations.</p>
     */
    inline BatchGetFlowAssociationResult& WithFlowAssociationSummaryList(const Aws::Vector<FlowAssociationSummary>& value) { SetFlowAssociationSummaryList(value); return *this;}

    /**
     * <p>Information about flow associations.</p>
     */
    inline BatchGetFlowAssociationResult& WithFlowAssociationSummaryList(Aws::Vector<FlowAssociationSummary>&& value) { SetFlowAssociationSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about flow associations.</p>
     */
    inline BatchGetFlowAssociationResult& AddFlowAssociationSummaryList(const FlowAssociationSummary& value) { m_flowAssociationSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about flow associations.</p>
     */
    inline BatchGetFlowAssociationResult& AddFlowAssociationSummaryList(FlowAssociationSummary&& value) { m_flowAssociationSummaryList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetFlowAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetFlowAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetFlowAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FlowAssociationSummary> m_flowAssociationSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
