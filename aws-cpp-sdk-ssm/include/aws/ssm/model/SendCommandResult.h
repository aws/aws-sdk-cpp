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
  class AWS_SSM_API SendCommandResult
  {
  public:
    SendCommandResult();
    SendCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline const Command& GetCommand() const{ return m_command; }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline void SetCommand(const Command& value) { m_command = value; }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline void SetCommand(Command&& value) { m_command = std::move(value); }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline SendCommandResult& WithCommand(const Command& value) { SetCommand(value); return *this;}

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline SendCommandResult& WithCommand(Command&& value) { SetCommand(std::move(value)); return *this;}

  private:

    Command m_command;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
