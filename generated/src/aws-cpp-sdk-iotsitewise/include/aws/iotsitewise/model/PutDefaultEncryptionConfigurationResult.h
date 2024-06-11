﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ConfigurationStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class PutDefaultEncryptionConfigurationResult
  {
  public:
    AWS_IOTSITEWISE_API PutDefaultEncryptionConfigurationResult();
    AWS_IOTSITEWISE_API PutDefaultEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API PutDefaultEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The Key ARN of the KMS key used for KMS encryption if you use
     * <code>KMS_BASED_ENCRYPTION</code>.</p>
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
    /**
     * <p>The status of the account configuration. This contains the
     * <code>ConfigurationState</code>. If there is an error, it also contains the
     * <code>ErrorDetails</code>.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }
    inline PutDefaultEncryptionConfigurationResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}
    inline PutDefaultEncryptionConfigurationResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}
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

    EncryptionType m_encryptionType;

    Aws::String m_kmsKeyArn;

    ConfigurationStatus m_configurationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
