﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a put approval result action.</p>
   */
  class AWS_CODEPIPELINE_API PutApprovalResultResult
  {
  public:
    PutApprovalResultResult();
    PutApprovalResultResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutApprovalResultResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedAt() const{ return m_approvedAt; }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline void SetApprovedAt(const Aws::Utils::DateTime& value) { m_approvedAt = value; }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline void SetApprovedAt(Aws::Utils::DateTime&& value) { m_approvedAt = value; }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline PutApprovalResultResult& WithApprovedAt(const Aws::Utils::DateTime& value) { SetApprovedAt(value); return *this;}

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline PutApprovalResultResult& WithApprovedAt(Aws::Utils::DateTime&& value) { SetApprovedAt(value); return *this;}

  private:
    Aws::Utils::DateTime m_approvedAt;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
