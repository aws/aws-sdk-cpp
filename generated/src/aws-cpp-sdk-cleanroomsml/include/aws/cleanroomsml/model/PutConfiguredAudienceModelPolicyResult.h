/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class PutConfiguredAudienceModelPolicyResult
  {
  public:
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult() = default;
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IAM resource policy.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelPolicy() const { return m_configuredAudienceModelPolicy; }
    template<typename ConfiguredAudienceModelPolicyT = Aws::String>
    void SetConfiguredAudienceModelPolicy(ConfiguredAudienceModelPolicyT&& value) { m_configuredAudienceModelPolicyHasBeenSet = true; m_configuredAudienceModelPolicy = std::forward<ConfiguredAudienceModelPolicyT>(value); }
    template<typename ConfiguredAudienceModelPolicyT = Aws::String>
    PutConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(ConfiguredAudienceModelPolicyT&& value) { SetConfiguredAudienceModelPolicy(std::forward<ConfiguredAudienceModelPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const { return m_policyHash; }
    template<typename PolicyHashT = Aws::String>
    void SetPolicyHash(PolicyHashT&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::forward<PolicyHashT>(value); }
    template<typename PolicyHashT = Aws::String>
    PutConfiguredAudienceModelPolicyResult& WithPolicyHash(PolicyHashT&& value) { SetPolicyHash(std::forward<PolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutConfiguredAudienceModelPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelPolicy;
    bool m_configuredAudienceModelPolicyHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
