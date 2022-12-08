/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedWorkflow.h>
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

  private:

    DescribedWorkflow m_workflow;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
