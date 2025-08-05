/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ConfigurationDetails.h>
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
namespace IoT
{
namespace Model
{
  class DescribeEncryptionConfigurationResult
  {
  public:
    AWS_IOT_API DescribeEncryptionConfigurationResult() = default;
    AWS_IOT_API DescribeEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeEncryptionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of the Amazon Web Services Key Management Service (KMS) key.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline DescribeEncryptionConfigurationResult& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role assumed by Amazon Web Services
     * IoT Core to call KMS on behalf of the customer.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    DescribeEncryptionConfigurationResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the customer-managed KMS key.</p>
     */
    inline const Aws::String& GetKmsAccessRoleArn() const { return m_kmsAccessRoleArn; }
    template<typename KmsAccessRoleArnT = Aws::String>
    void SetKmsAccessRoleArn(KmsAccessRoleArnT&& value) { m_kmsAccessRoleArnHasBeenSet = true; m_kmsAccessRoleArn = std::forward<KmsAccessRoleArnT>(value); }
    template<typename KmsAccessRoleArnT = Aws::String>
    DescribeEncryptionConfigurationResult& WithKmsAccessRoleArn(KmsAccessRoleArnT&& value) { SetKmsAccessRoleArn(std::forward<KmsAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration details that include the status information of
     * the KMS key and the KMS access role.</p>
     */
    inline const ConfigurationDetails& GetConfigurationDetails() const { return m_configurationDetails; }
    template<typename ConfigurationDetailsT = ConfigurationDetails>
    void SetConfigurationDetails(ConfigurationDetailsT&& value) { m_configurationDetailsHasBeenSet = true; m_configurationDetails = std::forward<ConfigurationDetailsT>(value); }
    template<typename ConfigurationDetailsT = ConfigurationDetails>
    DescribeEncryptionConfigurationResult& WithConfigurationDetails(ConfigurationDetailsT&& value) { SetConfigurationDetails(std::forward<ConfigurationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when encryption configuration is last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeEncryptionConfigurationResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEncryptionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_kmsAccessRoleArn;
    bool m_kmsAccessRoleArnHasBeenSet = false;

    ConfigurationDetails m_configurationDetails;
    bool m_configurationDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
