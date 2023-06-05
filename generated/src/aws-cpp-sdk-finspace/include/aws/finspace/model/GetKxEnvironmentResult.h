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
  class GetKxEnvironmentResult
  {
  public:
    AWS_FINSPACE_API GetKxEnvironmentResult();
    AWS_FINSPACE_API GetKxEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the kdb environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the AWS account that is used to create the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The status of the kdb environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the network configuration.</p>
     */
    inline const TgwStatus& GetTgwStatus() const{ return m_tgwStatus; }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline void SetTgwStatus(const TgwStatus& value) { m_tgwStatus = value; }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline void SetTgwStatus(TgwStatus&& value) { m_tgwStatus = std::move(value); }

    /**
     * <p>The status of the network configuration.</p>
     */
    inline GetKxEnvironmentResult& WithTgwStatus(const TgwStatus& value) { SetTgwStatus(value); return *this;}

    /**
     * <p>The status of the network configuration.</p>
     */
    inline GetKxEnvironmentResult& WithTgwStatus(TgwStatus&& value) { SetTgwStatus(std::move(value)); return *this;}


    /**
     * <p>The status of DNS configuration.</p>
     */
    inline const DnsStatus& GetDnsStatus() const{ return m_dnsStatus; }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline void SetDnsStatus(const DnsStatus& value) { m_dnsStatus = value; }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline void SetDnsStatus(DnsStatus&& value) { m_dnsStatus = std::move(value); }

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline GetKxEnvironmentResult& WithDnsStatus(const DnsStatus& value) { SetDnsStatus(value); return *this;}

    /**
     * <p>The status of DNS configuration.</p>
     */
    inline GetKxEnvironmentResult& WithDnsStatus(DnsStatus&& value) { SetDnsStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline GetKxEnvironmentResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline GetKxEnvironmentResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the error message that appears if a flow fails.</p>
     */
    inline GetKxEnvironmentResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A description for the kdb environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the kdb environment.</p>
     */
    inline GetKxEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArn = value; }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArn = std::move(value); }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArn.assign(value); }

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the environment.</p>
     */
    inline GetKxEnvironmentResult& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline GetKxEnvironmentResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline GetKxEnvironmentResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key ID to encrypt your data in the FinSpace environment.</p>
     */
    inline GetKxEnvironmentResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const{ return m_dedicatedServiceAccountId; }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(const Aws::String& value) { m_dedicatedServiceAccountId = value; }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(Aws::String&& value) { m_dedicatedServiceAccountId = std::move(value); }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline void SetDedicatedServiceAccountId(const char* value) { m_dedicatedServiceAccountId.assign(value); }

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline GetKxEnvironmentResult& WithDedicatedServiceAccountId(const Aws::String& value) { SetDedicatedServiceAccountId(value); return *this;}

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline GetKxEnvironmentResult& WithDedicatedServiceAccountId(Aws::String&& value) { SetDedicatedServiceAccountId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AWS environment infrastructure account.</p>
     */
    inline GetKxEnvironmentResult& WithDedicatedServiceAccountId(const char* value) { SetDedicatedServiceAccountId(value); return *this;}


    
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const{ return m_transitGatewayConfiguration; }

    
    inline void SetTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { m_transitGatewayConfiguration = value; }

    
    inline void SetTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { m_transitGatewayConfiguration = std::move(value); }

    
    inline GetKxEnvironmentResult& WithTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { SetTransitGatewayConfiguration(value); return *this;}

    
    inline GetKxEnvironmentResult& WithTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { SetTransitGatewayConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const{ return m_customDNSConfiguration; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { m_customDNSConfiguration = value; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { m_customDNSConfiguration = std::move(value); }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline GetKxEnvironmentResult& WithCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { SetCustomDNSConfiguration(value); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline GetKxEnvironmentResult& WithCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { SetCustomDNSConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline GetKxEnvironmentResult& AddCustomDNSConfiguration(const CustomDNSServer& value) { m_customDNSConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline GetKxEnvironmentResult& AddCustomDNSConfiguration(CustomDNSServer&& value) { m_customDNSConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline GetKxEnvironmentResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the kdb environment was created in FinSpace. </p>
     */
    inline GetKxEnvironmentResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTimestamp() const{ return m_updateTimestamp; }

    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline void SetUpdateTimestamp(const Aws::Utils::DateTime& value) { m_updateTimestamp = value; }

    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline void SetUpdateTimestamp(Aws::Utils::DateTime&& value) { m_updateTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline GetKxEnvironmentResult& WithUpdateTimestamp(const Aws::Utils::DateTime& value) { SetUpdateTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the kdb environment was updated. </p>
     */
    inline GetKxEnvironmentResult& WithUpdateTimestamp(Aws::Utils::DateTime&& value) { SetUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIds = value; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIds = std::move(value); }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline GetKxEnvironmentResult& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline GetKxEnvironmentResult& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline GetKxEnvironmentResult& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline GetKxEnvironmentResult& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline GetKxEnvironmentResult& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate authority of the kdb
     * environment.</p>
     */
    inline GetKxEnvironmentResult& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_environmentId;

    Aws::String m_awsAccountId;

    EnvironmentStatus m_status;

    TgwStatus m_tgwStatus;

    DnsStatus m_dnsStatus;

    Aws::String m_errorMessage;

    Aws::String m_description;

    Aws::String m_environmentArn;

    Aws::String m_kmsKeyId;

    Aws::String m_dedicatedServiceAccountId;

    TransitGatewayConfiguration m_transitGatewayConfiguration;

    Aws::Vector<CustomDNSServer> m_customDNSConfiguration;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::Utils::DateTime m_updateTimestamp;

    Aws::Vector<Aws::String> m_availabilityZoneIds;

    Aws::String m_certificateAuthorityArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
