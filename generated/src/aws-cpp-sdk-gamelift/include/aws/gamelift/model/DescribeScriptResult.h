/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeScriptResult
  {
  public:
    AWS_GAMELIFT_API DescribeScriptResult();
    AWS_GAMELIFT_API DescribeScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline const Script& GetScript() const{ return m_script; }

    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline void SetScript(const Script& value) { m_script = value; }

    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline void SetScript(Script&& value) { m_script = std::move(value); }

    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline DescribeScriptResult& WithScript(const Script& value) { SetScript(value); return *this;}

    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline DescribeScriptResult& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}

  private:

    Script m_script;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
