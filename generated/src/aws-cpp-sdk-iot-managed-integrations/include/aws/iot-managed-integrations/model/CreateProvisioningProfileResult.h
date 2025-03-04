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
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult();
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provisioning template used in the
     * provisioning profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateProvisioningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateProvisioningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateProvisioningProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProvisioningProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioning workflow the device uses for onboarding to IoT
     * managed integrations.</p>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningType = value; }
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningType = std::move(value); }
    inline CreateProvisioningProfileResult& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}
    inline CreateProvisioningProfileResult& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateProvisioningProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateProvisioningProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the claim certificate.</p>
     */
    inline const Aws::String& GetClaimCertificate() const{ return m_claimCertificate; }
    inline void SetClaimCertificate(const Aws::String& value) { m_claimCertificate = value; }
    inline void SetClaimCertificate(Aws::String&& value) { m_claimCertificate = std::move(value); }
    inline void SetClaimCertificate(const char* value) { m_claimCertificate.assign(value); }
    inline CreateProvisioningProfileResult& WithClaimCertificate(const Aws::String& value) { SetClaimCertificate(value); return *this;}
    inline CreateProvisioningProfileResult& WithClaimCertificate(Aws::String&& value) { SetClaimCertificate(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithClaimCertificate(const char* value) { SetClaimCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key of the claim certificate. This is stored securely on the
     * device for validating the connection endpoint with IoT managed integrations
     * using the public key.</p>
     */
    inline const Aws::String& GetClaimCertificatePrivateKey() const{ return m_claimCertificatePrivateKey; }
    inline void SetClaimCertificatePrivateKey(const Aws::String& value) { m_claimCertificatePrivateKey = value; }
    inline void SetClaimCertificatePrivateKey(Aws::String&& value) { m_claimCertificatePrivateKey = std::move(value); }
    inline void SetClaimCertificatePrivateKey(const char* value) { m_claimCertificatePrivateKey.assign(value); }
    inline CreateProvisioningProfileResult& WithClaimCertificatePrivateKey(const Aws::String& value) { SetClaimCertificatePrivateKey(value); return *this;}
    inline CreateProvisioningProfileResult& WithClaimCertificatePrivateKey(Aws::String&& value) { SetClaimCertificatePrivateKey(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithClaimCertificatePrivateKey(const char* value) { SetClaimCertificatePrivateKey(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProvisioningProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProvisioningProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProvisioningProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    ProvisioningType m_provisioningType;

    Aws::String m_id;

    Aws::String m_claimCertificate;

    Aws::String m_claimCertificatePrivateKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
