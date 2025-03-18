/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/EnvironmentStatus.h>
#include <aws/finspace/model/TgwStatus.h>
#include <aws/finspace/model/DnsStatus.h>
#include <aws/finspace/model/TransitGatewayConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/CustomDNSServer.h>
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
namespace finspace
{
namespace Model
{
  class UpdateKxEnvironmentResult
  {
  public:
    AWS_FINSPACE_API UpdateKxEnvironmentResult() = default;
    AWS_FINSPACE_API UpdateKxEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API UpdateKxEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the kdb environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateKxEnvironmentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateKxEnvironmentResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateKxEnvironmentResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the kdb environment.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateKxEnvironmentResult& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network configuration.</p>
     */
    inline TgwStatus GetTgwStatus() const { return m_tgwStatus; }
    inline void SetTgwStatus(TgwStatus value) { m_tgwStatusHasBeenSet = true; m_tgwStatus = value; }
    inline UpdateKxEnvironmentResult& WithTgwStatus(TgwStatus value) { SetTgwStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of DNS configuration.</p>
     */
    inline DnsStatus GetDnsStatus() const { return m_dnsStatus; }
    inline void SetDnsStatus(DnsStatus value) { m_dnsStatusHasBeenSet = true; m_dnsStatus = value; }
    inline UpdateKxEnvironmentResult& WithDnsStatus(DnsStatus value) { SetDnsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UpdateKxEnvironmentResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateKxEnvironmentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    UpdateKxEnvironmentResult& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateKxEnvironmentResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const { return m_dedicatedServiceAccountId; }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    void SetDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::forward<DedicatedServiceAccountIdT>(value); }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    UpdateKxEnvironmentResult& WithDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { SetDedicatedServiceAccountId(std::forward<DedicatedServiceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const { return m_transitGatewayConfiguration; }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    void SetTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = std::forward<TransitGatewayConfigurationT>(value); }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    UpdateKxEnvironmentResult& WithTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { SetTransitGatewayConfiguration(std::forward<TransitGatewayConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const { return m_customDNSConfiguration; }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    void SetCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = std::forward<CustomDNSConfigurationT>(value); }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    UpdateKxEnvironmentResult& WithCustomDNSConfiguration(CustomDNSConfigurationT&& value) { SetCustomDNSConfiguration(std::forward<CustomDNSConfigurationT>(value)); return *this;}
    template<typename CustomDNSConfigurationT = CustomDNSServer>
    UpdateKxEnvironmentResult& AddCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.emplace_back(std::forward<CustomDNSConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    UpdateKxEnvironmentResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTimestamp() const { return m_updateTimestamp; }
    template<typename UpdateTimestampT = Aws::Utils::DateTime>
    void SetUpdateTimestamp(UpdateTimestampT&& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = std::forward<UpdateTimestampT>(value); }
    template<typename UpdateTimestampT = Aws::Utils::DateTime>
    UpdateKxEnvironmentResult& WithUpdateTimestamp(UpdateTimestampT&& value) { SetUpdateTimestamp(std::forward<UpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value); }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    UpdateKxEnvironmentResult& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    UpdateKxEnvironmentResult& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateKxEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TgwStatus m_tgwStatus{TgwStatus::NOT_SET};
    bool m_tgwStatusHasBeenSet = false;

    DnsStatus m_dnsStatus{DnsStatus::NOT_SET};
    bool m_dnsStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dedicatedServiceAccountId;
    bool m_dedicatedServiceAccountIdHasBeenSet = false;

    TransitGatewayConfiguration m_transitGatewayConfiguration;
    bool m_transitGatewayConfigurationHasBeenSet = false;

    Aws::Vector<CustomDNSServer> m_customDNSConfiguration;
    bool m_customDNSConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updateTimestamp{};
    bool m_updateTimestampHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
