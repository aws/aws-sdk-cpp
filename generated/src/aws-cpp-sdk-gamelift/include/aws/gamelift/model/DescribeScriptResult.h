/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Script.h>
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


    ///@{
    /**
     * <p>A set of properties describing the requested script.</p>
     */
    inline const Script& GetScript() const{ return m_script; }
    inline void SetScript(const Script& value) { m_script = value; }
    inline void SetScript(Script&& value) { m_script = std::move(value); }
    inline DescribeScriptResult& WithScript(const Script& value) { SetScript(value); return *this;}
    inline DescribeScriptResult& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeScriptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeScriptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeScriptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Script m_script;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
