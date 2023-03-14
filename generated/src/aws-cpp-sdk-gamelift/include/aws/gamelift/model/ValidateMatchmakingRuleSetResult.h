/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class ValidateMatchmakingRuleSetResult
  {
  public:
    AWS_GAMELIFT_API ValidateMatchmakingRuleSetResult();
    AWS_GAMELIFT_API ValidateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ValidateMatchmakingRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A response indicating whether the rule set is valid.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>A response indicating whether the rule set is valid.</p>
     */
    inline void SetValid(bool value) { m_valid = value; }

    /**
     * <p>A response indicating whether the rule set is valid.</p>
     */
    inline ValidateMatchmakingRuleSetResult& WithValid(bool value) { SetValid(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ValidateMatchmakingRuleSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ValidateMatchmakingRuleSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ValidateMatchmakingRuleSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_valid;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
