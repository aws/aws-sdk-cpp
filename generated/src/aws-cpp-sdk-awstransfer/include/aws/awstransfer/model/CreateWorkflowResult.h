﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
  class CreateWorkflowResult
  {
  public:
    AWS_TRANSFER_API CreateWorkflowResult();
    AWS_TRANSFER_API CreateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline CreateWorkflowResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline CreateWorkflowResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline CreateWorkflowResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
