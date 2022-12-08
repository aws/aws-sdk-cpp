/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutResourcePolicyResult
  {
  public:
    AWS_GLUE_API PutResourcePolicyResult();
    AWS_GLUE_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
