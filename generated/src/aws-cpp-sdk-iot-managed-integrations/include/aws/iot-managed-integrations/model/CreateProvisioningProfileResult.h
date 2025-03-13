/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ProvisioningType.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class CreateProvisioningProfileResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provisioning template used in the
     * provisioning profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateProvisioningProfileResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProvisioningProfileResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioning workflow the device uses for onboarding to IoT
     * managed integrations.</p>
     */
    inline ProvisioningType GetProvisioningType() const { return m_provisioningType; }
    inline void SetProvisioningType(ProvisioningType value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }
    inline CreateProvisioningProfileResult& WithProvisioningType(ProvisioningType value) { SetProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning profile.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateProvisioningProfileResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the claim certificate.</p>
     */
    inline const Aws::String& GetClaimCertificate() const { return m_claimCertificate; }
    template<typename ClaimCertificateT = Aws::String>
    void SetClaimCertificate(ClaimCertificateT&& value) { m_claimCertificateHasBeenSet = true; m_claimCertificate = std::forward<ClaimCertificateT>(value); }
    template<typename ClaimCertificateT = Aws::String>
    CreateProvisioningProfileResult& WithClaimCertificate(ClaimCertificateT&& value) { SetClaimCertificate(std::forward<ClaimCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key of the claim certificate. This is stored securely on the
     * device for validating the connection endpoint with IoT managed integrations
     * using the public key.</p>
     */
    inline const Aws::String& GetClaimCertificatePrivateKey() const { return m_claimCertificatePrivateKey; }
    template<typename ClaimCertificatePrivateKeyT = Aws::String>
    void SetClaimCertificatePrivateKey(ClaimCertificatePrivateKeyT&& value) { m_claimCertificatePrivateKeyHasBeenSet = true; m_claimCertificatePrivateKey = std::forward<ClaimCertificatePrivateKeyT>(value); }
    template<typename ClaimCertificatePrivateKeyT = Aws::String>
    CreateProvisioningProfileResult& WithClaimCertificatePrivateKey(ClaimCertificatePrivateKeyT&& value) { SetClaimCertificatePrivateKey(std::forward<ClaimCertificatePrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProvisioningProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProvisioningType m_provisioningType{ProvisioningType::NOT_SET};
    bool m_provisioningTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_claimCertificate;
    bool m_claimCertificateHasBeenSet = false;

    Aws::String m_claimCertificatePrivateKey;
    bool m_claimCertificatePrivateKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
