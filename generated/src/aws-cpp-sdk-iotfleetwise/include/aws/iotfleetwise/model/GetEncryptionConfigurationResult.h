/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/EncryptionStatus.h>
#include <aws/iotfleetwise/model/EncryptionType.h>
#include <aws/core/utils/DateTime.h>
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
  class GetEncryptionConfigurationResult
  {
  public:
    AWS_IOTFLEETWISE_API GetEncryptionConfigurationResult();
    AWS_IOTFLEETWISE_API GetEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetEncryptionConfigurationResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetEncryptionConfigurationResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetEncryptionConfigurationResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption status.</p>
     */
    inline const EncryptionStatus& GetEncryptionStatus() const{ return m_encryptionStatus; }
    inline void SetEncryptionStatus(const EncryptionStatus& value) { m_encryptionStatus = value; }
    inline void SetEncryptionStatus(EncryptionStatus&& value) { m_encryptionStatus = std::move(value); }
    inline GetEncryptionConfigurationResult& WithEncryptionStatus(const EncryptionStatus& value) { SetEncryptionStatus(value); return *this;}
    inline GetEncryptionConfigurationResult& WithEncryptionStatus(EncryptionStatus&& value) { SetEncryptionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key that you own and manage. Set to <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to
     * use an Amazon Web Services managed key that is owned by the Amazon Web Services
     * IoT FleetWise service account.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionType = std::move(value); }
    inline GetEncryptionConfigurationResult& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline GetEncryptionConfigurationResult& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that describes why encryption settings couldn't be
     * configured, if applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetEncryptionConfigurationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetEncryptionConfigurationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetEncryptionConfigurationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when encryption was configured in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetEncryptionConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetEncryptionConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when encryption was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline GetEncryptionConfigurationResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline GetEncryptionConfigurationResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEncryptionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEncryptionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEncryptionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;

    EncryptionStatus m_encryptionStatus;

    EncryptionType m_encryptionType;

    Aws::String m_errorMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
