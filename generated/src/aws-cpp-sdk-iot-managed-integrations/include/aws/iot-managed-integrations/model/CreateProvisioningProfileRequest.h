/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/ProvisioningType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class CreateProvisioningProfileRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateProvisioningProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisioningProfile"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of provisioning workflow the device uses for onboarding to IoT
     * managed integrations.</p>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }
    inline bool ProvisioningTypeHasBeenSet() const { return m_provisioningTypeHasBeenSet; }
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = std::move(value); }
    inline CreateProvisioningProfileRequest& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}
    inline CreateProvisioningProfileRequest& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the certificate authority (CA) certificate.</p>
     */
    inline const Aws::String& GetCaCertificate() const{ return m_caCertificate; }
    inline bool CaCertificateHasBeenSet() const { return m_caCertificateHasBeenSet; }
    inline void SetCaCertificate(const Aws::String& value) { m_caCertificateHasBeenSet = true; m_caCertificate = value; }
    inline void SetCaCertificate(Aws::String&& value) { m_caCertificateHasBeenSet = true; m_caCertificate = std::move(value); }
    inline void SetCaCertificate(const char* value) { m_caCertificateHasBeenSet = true; m_caCertificate.assign(value); }
    inline CreateProvisioningProfileRequest& WithCaCertificate(const Aws::String& value) { SetCaCertificate(value); return *this;}
    inline CreateProvisioningProfileRequest& WithCaCertificate(Aws::String&& value) { SetCaCertificate(std::move(value)); return *this;}
    inline CreateProvisioningProfileRequest& WithCaCertificate(const char* value) { SetCaCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateProvisioningProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProvisioningProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProvisioningProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateProvisioningProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateProvisioningProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateProvisioningProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the provisioning
     * profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProvisioningProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateProvisioningProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProvisioningProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProvisioningProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    ProvisioningType m_provisioningType;
    bool m_provisioningTypeHasBeenSet = false;

    Aws::String m_caCertificate;
    bool m_caCertificateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
