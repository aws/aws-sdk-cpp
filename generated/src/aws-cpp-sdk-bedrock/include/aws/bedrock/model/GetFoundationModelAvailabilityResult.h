/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AgreementAvailability.h>
#include <aws/bedrock/model/AuthorizationStatus.h>
#include <aws/bedrock/model/EntitlementAvailability.h>
#include <aws/bedrock/model/RegionAvailability.h>
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
namespace Bedrock
{
namespace Model
{
  class GetFoundationModelAvailabilityResult
  {
  public:
    AWS_BEDROCK_API GetFoundationModelAvailabilityResult() = default;
    AWS_BEDROCK_API GetFoundationModelAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetFoundationModelAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    GetFoundationModelAvailabilityResult& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Agreement availability. </p>
     */
    inline const AgreementAvailability& GetAgreementAvailability() const { return m_agreementAvailability; }
    template<typename AgreementAvailabilityT = AgreementAvailability>
    void SetAgreementAvailability(AgreementAvailabilityT&& value) { m_agreementAvailabilityHasBeenSet = true; m_agreementAvailability = std::forward<AgreementAvailabilityT>(value); }
    template<typename AgreementAvailabilityT = AgreementAvailability>
    GetFoundationModelAvailabilityResult& WithAgreementAvailability(AgreementAvailabilityT&& value) { SetAgreementAvailability(std::forward<AgreementAvailabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Authorization status.</p>
     */
    inline AuthorizationStatus GetAuthorizationStatus() const { return m_authorizationStatus; }
    inline void SetAuthorizationStatus(AuthorizationStatus value) { m_authorizationStatusHasBeenSet = true; m_authorizationStatus = value; }
    inline GetFoundationModelAvailabilityResult& WithAuthorizationStatus(AuthorizationStatus value) { SetAuthorizationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlement availability. </p>
     */
    inline EntitlementAvailability GetEntitlementAvailability() const { return m_entitlementAvailability; }
    inline void SetEntitlementAvailability(EntitlementAvailability value) { m_entitlementAvailabilityHasBeenSet = true; m_entitlementAvailability = value; }
    inline GetFoundationModelAvailabilityResult& WithEntitlementAvailability(EntitlementAvailability value) { SetEntitlementAvailability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region availability. </p>
     */
    inline RegionAvailability GetRegionAvailability() const { return m_regionAvailability; }
    inline void SetRegionAvailability(RegionAvailability value) { m_regionAvailabilityHasBeenSet = true; m_regionAvailability = value; }
    inline GetFoundationModelAvailabilityResult& WithRegionAvailability(RegionAvailability value) { SetRegionAvailability(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFoundationModelAvailabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    AgreementAvailability m_agreementAvailability;
    bool m_agreementAvailabilityHasBeenSet = false;

    AuthorizationStatus m_authorizationStatus{AuthorizationStatus::NOT_SET};
    bool m_authorizationStatusHasBeenSet = false;

    EntitlementAvailability m_entitlementAvailability{EntitlementAvailability::NOT_SET};
    bool m_entitlementAvailabilityHasBeenSet = false;

    RegionAvailability m_regionAvailability{RegionAvailability::NOT_SET};
    bool m_regionAvailabilityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
