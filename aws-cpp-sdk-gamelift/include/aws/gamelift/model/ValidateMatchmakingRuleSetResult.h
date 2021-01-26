/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ValidateMatchmakingRuleSetOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ValidateMatchmakingRuleSetResult
  {
  public:
    ValidateMatchmakingRuleSetResult();
    ValidateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ValidateMatchmakingRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    bool m_valid;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
