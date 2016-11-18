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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API PutScalingPolicyResult
  {
  public:
    PutScalingPolicyResult();
    PutScalingPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutScalingPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline PutScalingPolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline PutScalingPolicyResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a scaling policy. Policy names do not need
     * to be unique.</p>
     */
    inline PutScalingPolicyResult& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
