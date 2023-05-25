/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedWorkflow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{
  class DescribeWorkflowResult
  {
  public:
    AWS_TRANSFER_API DescribeWorkflowResult();
    AWS_TRANSFER_API DescribeWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure that contains the details of the workflow.</p>
     */
    inline const DescribedWorkflow& GetWorkflow() const{ return m_workflow; }

    /**
     * <p>The structure that contains the details of the workflow.</p>
     */
    inline void SetWorkflow(const DescribedWorkflow& value) { m_workflow = value; }

    /**
     * <p>The structure that contains the details of the workflow.</p>
     */
    inline void SetWorkflow(DescribedWorkflow&& value) { m_workflow = std::move(value); }

    /**
     * <p>The structure that contains the details of the workflow.</p>
     */
    inline DescribeWorkflowResult& WithWorkflow(const DescribedWorkflow& value) { SetWorkflow(value); return *this;}

    /**
     * <p>The structure that contains the details of the workflow.</p>
     */
    inline DescribeWorkflowResult& WithWorkflow(DescribedWorkflow&& value) { SetWorkflow(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescribedWorkflow m_workflow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
