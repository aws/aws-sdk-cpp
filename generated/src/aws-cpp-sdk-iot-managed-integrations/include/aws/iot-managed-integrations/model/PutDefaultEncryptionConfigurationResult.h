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
  class PutDefaultEncryptionConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PutDefaultEncryptionConfigurationResult();
    AWS_IOTMANAGEDINTEGRATIONS_API PutDefaultEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API PutDefaultEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides the status of the default encryption configuration for an Amazon Web
     * Services account.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }
    inline PutDefaultEncryptionConfigurationResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionType = std::move(value); }
    inline PutDefaultEncryptionConfigurationResult& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Amazon Resource Name (ARN) of the AWS KMS key used for KMS encryption
     * if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline PutDefaultEncryptionConfigurationResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutDefaultEncryptionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConfigurationStatus m_configurationStatus;

    EncryptionType m_encryptionType;

    Aws::String m_kmsKeyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
