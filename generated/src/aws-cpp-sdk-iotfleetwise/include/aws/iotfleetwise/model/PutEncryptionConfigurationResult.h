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
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult() = default;
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    PutEncryptionConfigurationResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption status.</p>
     */
    inline EncryptionStatus GetEncryptionStatus() const { return m_encryptionStatus; }
    inline void SetEncryptionStatus(EncryptionStatus value) { m_encryptionStatusHasBeenSet = true; m_encryptionStatus = value; }
    inline PutEncryptionConfigurationResult& WithEncryptionStatus(EncryptionStatus value) { SetEncryptionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption. Set to <code>KMS_BASED_ENCRYPTION</code> to use an
     * KMS key that you own and manage. Set to
     * <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services managed
     * key that is owned by the Amazon Web Services IoT FleetWise service account.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline PutEncryptionConfigurationResult& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutEncryptionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    EncryptionStatus m_encryptionStatus{EncryptionStatus::NOT_SET};
    bool m_encryptionStatusHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
