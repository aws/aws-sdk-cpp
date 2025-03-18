/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ConfigurationStatus.h>
#include <aws/iot-managed-integrations/model/EncryptionType.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetDefaultEncryptionConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetDefaultEncryptionConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetDefaultEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetDefaultEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides the status of the default encryption configuration for an Amazon Web
     * Services account.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const { return m_configurationStatus; }
    template<typename ConfigurationStatusT = ConfigurationStatus>
    void SetConfigurationStatus(ConfigurationStatusT&& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = std::forward<ConfigurationStatusT>(value); }
    template<typename ConfigurationStatusT = ConfigurationStatus>
    GetDefaultEncryptionConfigurationResult& WithConfigurationStatus(ConfigurationStatusT&& value) { SetConfigurationStatus(std::forward<ConfigurationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline GetDefaultEncryptionConfigurationResult& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Amazon Resource Name (ARN) of the AWS KMS key used for KMS encryption
     * if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetDefaultEncryptionConfigurationResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDefaultEncryptionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfigurationStatus m_configurationStatus;
    bool m_configurationStatusHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
