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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API PutResourcePolicyResult
  {
  public:
    PutResourcePolicyResult();
    PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}

  private:

    Aws::String m_policyHash;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
