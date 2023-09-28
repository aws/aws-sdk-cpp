/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/EncryptionStatus.h>
#include <aws/iotfleetwise/model/EncryptionType.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class PutEncryptionConfigurationResult
  {
  public:
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult();
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The encryption status.</p>
     */
    inline const EncryptionStatus& GetEncryptionStatus() const{ return m_encryptionStatus; }

    /**
     * <p>The encryption status.</p>
     */
    inline void SetEncryptionStatus(const EncryptionStatus& value) { m_encryptionStatus = value; }

    /**
     * <p>The encryption status.</p>
     */
    inline void SetEncryptionStatus(EncryptionStatus&& value) { m_encryptionStatus = std::move(value); }

    /**
     * <p>The encryption status.</p>
     */
    inline PutEncryptionConfigurationResult& WithEncryptionStatus(const EncryptionStatus& value) { SetEncryptionStatus(value); return *this;}

    /**
     * <p>The encryption status.</p>
     */
    inline PutEncryptionConfigurationResult& WithEncryptionStatus(EncryptionStatus&& value) { SetEncryptionStatus(std::move(value)); return *this;}


    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionType = value; }

    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionType = std::move(value); }

    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline PutEncryptionConfigurationResult& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline PutEncryptionConfigurationResult& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutEncryptionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutEncryptionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutEncryptionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;

    EncryptionStatus m_encryptionStatus;

    EncryptionType m_encryptionType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
