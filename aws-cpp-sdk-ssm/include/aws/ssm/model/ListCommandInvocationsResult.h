/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandInvocation.h>

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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListCommandInvocationsResult
  {
  public:
    ListCommandInvocationsResult();
    ListCommandInvocationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCommandInvocationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * (Optional) A list of all invocations.
     */
    inline const Aws::Vector<CommandInvocation>& GetCommandInvocations() const{ return m_commandInvocations; }

    /**
     * (Optional) A list of all invocations.
     */
    inline void SetCommandInvocations(const Aws::Vector<CommandInvocation>& value) { m_commandInvocations = value; }

    /**
     * (Optional) A list of all invocations.
     */
    inline void SetCommandInvocations(Aws::Vector<CommandInvocation>&& value) { m_commandInvocations = value; }

    /**
     * (Optional) A list of all invocations.
     */
    inline ListCommandInvocationsResult& WithCommandInvocations(const Aws::Vector<CommandInvocation>& value) { SetCommandInvocations(value); return *this;}

    /**
     * (Optional) A list of all invocations.
     */
    inline ListCommandInvocationsResult& WithCommandInvocations(Aws::Vector<CommandInvocation>&& value) { SetCommandInvocations(value); return *this;}

    /**
     * (Optional) A list of all invocations.
     */
    inline ListCommandInvocationsResult& AddCommandInvocations(const CommandInvocation& value) { m_commandInvocations.push_back(value); return *this; }

    /**
     * (Optional) A list of all invocations.
     */
    inline ListCommandInvocationsResult& AddCommandInvocations(CommandInvocation&& value) { m_commandInvocations.push_back(value); return *this; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandInvocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandInvocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandInvocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<CommandInvocation> m_commandInvocations;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
