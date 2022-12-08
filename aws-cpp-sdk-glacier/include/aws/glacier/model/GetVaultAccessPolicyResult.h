/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/VaultAccessPolicy.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Output for GetVaultAccessPolicy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultAccessPolicyOutput">AWS
   * API Reference</a></p>
   */
  class GetVaultAccessPolicyResult
  {
  public:
    AWS_GLACIER_API GetVaultAccessPolicyResult();
    AWS_GLACIER_API GetVaultAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetVaultAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the returned vault access policy as a JSON string.</p>
     */
    inline const VaultAccessPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Contains the returned vault access policy as a JSON string.</p>
     */
    inline void SetPolicy(const VaultAccessPolicy& value) { m_policy = value; }

    /**
     * <p>Contains the returned vault access policy as a JSON string.</p>
     */
    inline void SetPolicy(VaultAccessPolicy&& value) { m_policy = std::move(value); }

    /**
     * <p>Contains the returned vault access policy as a JSON string.</p>
     */
    inline GetVaultAccessPolicyResult& WithPolicy(const VaultAccessPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Contains the returned vault access policy as a JSON string.</p>
     */
    inline GetVaultAccessPolicyResult& WithPolicy(VaultAccessPolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    VaultAccessPolicy m_policy;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
