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
#include <aws/ssm/model/Command.h>

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
  class AWS_SSM_API ListCommandsResult
  {
  public:
    ListCommandsResult();
    ListCommandsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCommandsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline const Aws::Vector<Command>& GetCommands() const{ return m_commands; }

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline void SetCommands(const Aws::Vector<Command>& value) { m_commands = value; }

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline void SetCommands(Aws::Vector<Command>&& value) { m_commands = value; }

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline ListCommandsResult& WithCommands(const Aws::Vector<Command>& value) { SetCommands(value); return *this;}

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline ListCommandsResult& WithCommands(Aws::Vector<Command>&& value) { SetCommands(value); return *this;}

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline ListCommandsResult& AddCommands(const Command& value) { m_commands.push_back(value); return *this; }

    /**
     * (Optional) The list of commands requested by the user.
     */
    inline ListCommandsResult& AddCommands(Command&& value) { m_commands.push_back(value); return *this; }

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
    inline ListCommandsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Command> m_commands;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
