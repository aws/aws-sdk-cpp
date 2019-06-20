/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API ListWorkflowsResult
  {
  public:
    ListWorkflowsResult();
    ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkflows() const{ return m_workflows; }

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline void SetWorkflows(const Aws::Vector<Aws::String>& value) { m_workflows = value; }

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline void SetWorkflows(Aws::Vector<Aws::String>&& value) { m_workflows = std::move(value); }

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline ListWorkflowsResult& WithWorkflows(const Aws::Vector<Aws::String>& value) { SetWorkflows(value); return *this;}

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline ListWorkflowsResult& WithWorkflows(Aws::Vector<Aws::String>&& value) { SetWorkflows(std::move(value)); return *this;}

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline ListWorkflowsResult& AddWorkflows(const Aws::String& value) { m_workflows.push_back(value); return *this; }

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline ListWorkflowsResult& AddWorkflows(Aws::String&& value) { m_workflows.push_back(std::move(value)); return *this; }

    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline ListWorkflowsResult& AddWorkflows(const char* value) { m_workflows.push_back(value); return *this; }


    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_workflows;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
