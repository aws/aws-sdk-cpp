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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{

  /**
   * <p>The details of a kdb environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxEnvironment">AWS
   * API Reference</a></p>
   */
  class KxEnvironment
  {
  public:
    AWS_FINSPACE_API KxEnvironment() = default;
    AWS_FINSPACE_API KxEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the kdb environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KxEnvironment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    KxEnvironment& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    KxEnvironment& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the environment creation. </p> <ul> <li> <p>CREATE_REQUESTED –
     * Environment creation has been requested.</p> </li> <li> <p>CREATING –
     * Environment is in the process of being created.</p> </li> <li>
     * <p>FAILED_CREATION – Environment creation has failed.</p> </li> <li> <p>CREATED
     * – Environment is successfully created and is currently active.</p> </li> <li>
     * <p>DELETE REQUESTED – Environment deletion has been requested.</p> </li> <li>
     * <p>DELETING – Environment is in the process of being deleted.</p> </li> <li>
     * <p>RETRY_DELETION – Initial environment deletion failed, system is reattempting
     * delete.</p> </li> <li> <p>DELETED – Environment has been deleted.</p> </li> <li>
     * <p>FAILED_DELETION – Environment deletion has failed.</p> </li> </ul>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KxEnvironment& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network configuration.</p>
     */
    inline TgwStatus GetTgwStatus() const { return m_tgwStatus; }
    inline bool TgwStatusHasBeenSet() const { return m_tgwStatusHasBeenSet; }
    inline void SetTgwStatus(TgwStatus value) { m_tgwStatusHasBeenSet = true; m_tgwStatus = value; }
    inline KxEnvironment& WithTgwStatus(TgwStatus value) { SetTgwStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of DNS configuration.</p>
     */
    inline DnsStatus GetDnsStatus() const { return m_dnsStatus; }
    inline bool DnsStatusHasBeenSet() const { return m_dnsStatusHasBeenSet; }
    inline void SetDnsStatus(DnsStatus value) { m_dnsStatusHasBeenSet = true; m_dnsStatus = value; }
    inline KxEnvironment& WithDnsStatus(DnsStatus value) { SetDnsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    KxEnvironment& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the kdb environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    KxEnvironment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    KxEnvironment& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    KxEnvironment& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const { return m_dedicatedServiceAccountId; }
    inline bool DedicatedServiceAccountIdHasBeenSet() const { return m_dedicatedServiceAccountIdHasBeenSet; }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    void SetDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::forward<DedicatedServiceAccountIdT>(value); }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    KxEnvironment& WithDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { SetDedicatedServiceAccountId(std::forward<DedicatedServiceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const { return m_transitGatewayConfiguration; }
    inline bool TransitGatewayConfigurationHasBeenSet() const { return m_transitGatewayConfigurationHasBeenSet; }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    void SetTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = std::forward<TransitGatewayConfigurationT>(value); }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    KxEnvironment& WithTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { SetTransitGatewayConfiguration(std::forward<TransitGatewayConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const { return m_customDNSConfiguration; }
    inline bool CustomDNSConfigurationHasBeenSet() const { return m_customDNSConfigurationHasBeenSet; }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    void SetCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = std::forward<CustomDNSConfigurationT>(value); }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    KxEnvironment& WithCustomDNSConfiguration(CustomDNSConfigurationT&& value) { SetCustomDNSConfiguration(std::forward<CustomDNSConfigurationT>(value)); return *this;}
    template<typename CustomDNSConfigurationT = CustomDNSServer>
    KxEnvironment& AddCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.emplace_back(std::forward<CustomDNSConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    KxEnvironment& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTimestamp() const { return m_updateTimestamp; }
    inline bool UpdateTimestampHasBeenSet() const { return m_updateTimestampHasBeenSet; }
    template<typename UpdateTimestampT = Aws::Utils::DateTime>
    void SetUpdateTimestamp(UpdateTimestampT&& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = std::forward<UpdateTimestampT>(value); }
    template<typename UpdateTimestampT = Aws::Utils::DateTime>
    KxEnvironment& WithUpdateTimestamp(UpdateTimestampT&& value) { SetUpdateTimestamp(std::forward<UpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value); }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    KxEnvironment& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    KxEnvironment& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    KxEnvironment& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
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

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
