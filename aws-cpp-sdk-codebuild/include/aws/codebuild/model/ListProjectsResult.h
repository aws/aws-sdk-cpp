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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API ListProjectsResult
  {
  public:
    ListProjectsResult();
    ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjects() const{ return m_projects; }

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline void SetProjects(const Aws::Vector<Aws::String>& value) { m_projects = value; }

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline void SetProjects(Aws::Vector<Aws::String>&& value) { m_projects = std::move(value); }

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline ListProjectsResult& WithProjects(const Aws::Vector<Aws::String>& value) { SetProjects(value); return *this;}

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline ListProjectsResult& WithProjects(Aws::Vector<Aws::String>&& value) { SetProjects(std::move(value)); return *this;}

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline ListProjectsResult& AddProjects(const Aws::String& value) { m_projects.push_back(value); return *this; }

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline ListProjectsResult& AddProjects(Aws::String&& value) { m_projects.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of build project names, with each build project name representing a
     * single build project.</p>
     */
    inline ListProjectsResult& AddProjects(const char* value) { m_projects.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_projects;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
