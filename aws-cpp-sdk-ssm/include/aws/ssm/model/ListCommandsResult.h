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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Command.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListCommandsResult
  {
  public:
    ListCommandsResult();
    ListCommandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCommandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline const Aws::Vector<Command>& GetCommands() const{ return m_commands; }

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline void SetCommands(const Aws::Vector<Command>& value) { m_commands = value; }

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline void SetCommands(Aws::Vector<Command>&& value) { m_commands = std::move(value); }

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline ListCommandsResult& WithCommands(const Aws::Vector<Command>& value) { SetCommands(value); return *this;}

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline ListCommandsResult& WithCommands(Aws::Vector<Command>&& value) { SetCommands(std::move(value)); return *this;}

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline ListCommandsResult& AddCommands(const Command& value) { m_commands.push_back(value); return *this; }

    /**
     * <p>(Optional) The list of commands requested by the user. </p>
     */
    inline ListCommandsResult& AddCommands(Command&& value) { m_commands.push_back(std::move(value)); return *this; }


    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListCommandsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListCommandsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListCommandsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Command> m_commands;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
