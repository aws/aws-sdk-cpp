/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ProvisioningType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetProvisioningProfileResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetProvisioningProfileResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetProvisioningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetProvisioningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provisioning template used in the
     * provisioning profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetProvisioningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetProvisioningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetProvisioningProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetProvisioningProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioning workflow the device uses for onboarding to IoT
     * managed integrations.</p>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningType = value; }
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningType = std::move(value); }
    inline GetProvisioningProfileResult& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}
    inline GetProvisioningProfileResult& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning profile id..</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetProvisioningProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetProvisioningProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the claim certificate.</p>
     */
    inline const Aws::String& GetClaimCertificate() const{ return m_claimCertificate; }
    inline void SetClaimCertificate(const Aws::String& value) { m_claimCertificate = value; }
    inline void SetClaimCertificate(Aws::String&& value) { m_claimCertificate = std::move(value); }
    inline void SetClaimCertificate(const char* value) { m_claimCertificate.assign(value); }
    inline GetProvisioningProfileResult& WithClaimCertificate(const Aws::String& value) { SetClaimCertificate(value); return *this;}
    inline GetProvisioningProfileResult& WithClaimCertificate(Aws::String&& value) { SetClaimCertificate(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& WithClaimCertificate(const char* value) { SetClaimCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the provisioning
     * profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetProvisioningProfileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetProvisioningProfileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetProvisioningProfileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetProvisioningProfileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetProvisioningProfileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProvisioningProfileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetProvisioningProfileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetProvisioningProfileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProvisioningProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProvisioningProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProvisioningProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    ProvisioningType m_provisioningType;

    Aws::String m_id;

    Aws::String m_claimCertificate;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
