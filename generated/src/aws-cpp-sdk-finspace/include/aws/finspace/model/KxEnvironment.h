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
    AWS_FINSPACE_API KxEnvironment();
    AWS_FINSPACE_API KxEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the kdb environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline KxEnvironment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline KxEnvironment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline KxEnvironment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline KxEnvironment& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline KxEnvironment& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the AWS account in which you create the kdb
     * environment.</p>
     */
    inline KxEnvironment& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


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
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline KxEnvironment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

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
    inline KxEnvironment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the network configuration.</p>
     */
    inline const TgwStatus& GetTgwStatus() const{ return m_tgwStatus; }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline bool TgwStatusHasBeenSet() const { return m_tgwStatusHasBeenSet; }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline void SetTgwStatus(const TgwStatus& value) { m_tgwStatusHasBeenSet = true; m_tgwStatus = value; }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline void SetTgwStatus(TgwStatus&& value) { m_tgwStatusHasBeenSet = true; m_tgwStatus = std::move(value); }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline KxEnvironment& WithTgwStatus(const TgwStatus& value) { SetTgwStatus(value); return *this;}

    /**
     * <p>The status of the network configuration.</p>
     */
    inline KxEnvironment& WithTgwStatus(TgwStatus&& value) { SetTgwStatus(std::move(value)); return *this;}


    /**
     * <p>The status of DNS configuration.</p>
     */
    inline const DnsStatus& GetDnsStatus() const{ return m_dnsStatus; }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline bool DnsStatusHasBeenSet() const { return m_dnsStatusHasBeenSet; }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline void SetDnsStatus(const DnsStatus& value) { m_dnsStatusHasBeenSet = true; m_dnsStatus = value; }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline void SetDnsStatus(DnsStatus&& value) { m_dnsStatusHasBeenSet = true; m_dnsStatus = std::move(value); }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline KxEnvironment& WithDnsStatus(const DnsStatus& value) { SetDnsStatus(value); return *this;}

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline KxEnvironment& WithDnsStatus(DnsStatus&& value) { SetDnsStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline KxEnvironment& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline KxEnvironment& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails. </p>
     */
    inline KxEnvironment& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A description of the kdb environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline KxEnvironment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline KxEnvironment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the kdb environment.</p>
     */
    inline KxEnvironment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your kdb environment.</p>
     */
    inline KxEnvironment& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline KxEnvironment& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline KxEnvironment& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the KMS key.</p>
     */
    inline KxEnvironment& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const{ return m_dedicatedServiceAccountId; }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline bool DedicatedServiceAccountIdHasBeenSet() const { return m_dedicatedServiceAccountIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(const Aws::String& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = value; }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(Aws::String&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::move(value); }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(const char* value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId.assign(value); }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline KxEnvironment& WithDedicatedServiceAccountId(const Aws::String& value) { SetDedicatedServiceAccountId(value); return *this;}

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline KxEnvironment& WithDedicatedServiceAccountId(Aws::String&& value) { SetDedicatedServiceAccountId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline KxEnvironment& WithDedicatedServiceAccountId(const char* value) { SetDedicatedServiceAccountId(value); return *this;}


    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const{ return m_transitGatewayConfiguration; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline bool TransitGatewayConfigurationHasBeenSet() const { return m_transitGatewayConfigurationHasBeenSet; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline void SetTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = value; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline void SetTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = std::move(value); }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline KxEnvironment& WithTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { SetTransitGatewayConfiguration(value); return *this;}

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline KxEnvironment& WithTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { SetTransitGatewayConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const{ return m_customDNSConfiguration; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline bool CustomDNSConfigurationHasBeenSet() const { return m_customDNSConfigurationHasBeenSet; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = value; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = std::move(value); }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline KxEnvironment& WithCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { SetCustomDNSConfiguration(value); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline KxEnvironment& WithCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { SetCustomDNSConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline KxEnvironment& AddCustomDNSConfiguration(const CustomDNSServer& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline KxEnvironment& AddCustomDNSConfiguration(CustomDNSServer&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxEnvironment& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxEnvironment& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTimestamp() const{ return m_updateTimestamp; }

    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool UpdateTimestampHasBeenSet() const { return m_updateTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetUpdateTimestamp(const Aws::Utils::DateTime& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = value; }

    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetUpdateTimestamp(Aws::Utils::DateTime&& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxEnvironment& WithUpdateTimestamp(const Aws::Utils::DateTime& value) { SetUpdateTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the kdb environment was modified in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxEnvironment& WithUpdateTimestamp(Aws::Utils::DateTime&& value) { SetUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = value; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::move(value); }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline KxEnvironment& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline KxEnvironment& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline KxEnvironment& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline KxEnvironment& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline KxEnvironment& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline KxEnvironment& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline KxEnvironment& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority:</p>
     */
    inline KxEnvironment& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    TgwStatus m_tgwStatus;
    bool m_tgwStatusHasBeenSet = false;

    DnsStatus m_dnsStatus;
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

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updateTimestamp;
    bool m_updateTimestampHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
