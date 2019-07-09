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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>Response indicating whether the rule set is valid.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>Response indicating whether the rule set is valid.</p>
     */
    inline void SetValid(bool value) { m_valid = value; }

    /**
     * <p>Response indicating whether the rule set is valid.</p>
     */
    inline ValidateMatchmakingRuleSetResult& WithValid(bool value) { SetValid(value); return *this;}

  private:

    bool m_valid;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
