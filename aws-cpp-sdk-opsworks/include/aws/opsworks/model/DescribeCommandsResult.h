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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Command.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeCommands</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommandsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeCommandsResult
  {
  public:
    DescribeCommandsResult();
    DescribeCommandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCommandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline const Aws::Vector<Command>& GetCommands() const{ return m_commands; }

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline void SetCommands(const Aws::Vector<Command>& value) { m_commands = value; }

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline void SetCommands(Aws::Vector<Command>&& value) { m_commands = std::move(value); }

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline DescribeCommandsResult& WithCommands(const Aws::Vector<Command>& value) { SetCommands(value); return *this;}

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline DescribeCommandsResult& WithCommands(Aws::Vector<Command>&& value) { SetCommands(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline DescribeCommandsResult& AddCommands(const Command& value) { m_commands.push_back(value); return *this; }

    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline DescribeCommandsResult& AddCommands(Command&& value) { m_commands.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Command> m_commands;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
