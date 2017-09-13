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
  class AWS_GLACIER_API GetVaultAccessPolicyResult
  {
  public:
    GetVaultAccessPolicyResult();
    GetVaultAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVaultAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
