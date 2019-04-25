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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Script.h>
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
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API DescribeScriptResult
  {
  public:
    DescribeScriptResult();
    DescribeScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline const Script& GetScript() const{ return m_script; }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline void SetScript(const Script& value) { m_script = value; }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline void SetScript(Script&& value) { m_script = std::move(value); }

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline DescribeScriptResult& WithScript(const Script& value) { SetScript(value); return *this;}

    /**
     * <p>Set of properties describing the requested script.</p>
     */
    inline DescribeScriptResult& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}

  private:

    Script m_script;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
