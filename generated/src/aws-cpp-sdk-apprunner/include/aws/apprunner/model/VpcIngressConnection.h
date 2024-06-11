/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/VpcIngressConnectionStatus.h>
#include <aws/apprunner/model/IngressVpcConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>The App Runner resource that specifies an App Runner endpoint for incoming
   * traffic. It establishes a connection between a VPC interface endpoint and a App
   * Runner service, to make your App Runner service accessible from only within an
   * Amazon VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/VpcIngressConnection">AWS
   * API Reference</a></p>
   */
  class VpcIngressConnection
  {
  public:
    AWS_APPRUNNER_API VpcIngressConnection();
    AWS_APPRUNNER_API VpcIngressConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcIngressConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const{ return m_vpcIngressConnectionArn; }
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }
    inline void SetVpcIngressConnectionArn(const Aws::String& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = value; }
    inline void SetVpcIngressConnectionArn(Aws::String&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::move(value); }
    inline void SetVpcIngressConnectionArn(const char* value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn.assign(value); }
    inline VpcIngressConnection& WithVpcIngressConnectionArn(const Aws::String& value) { SetVpcIngressConnectionArn(value); return *this;}
    inline VpcIngressConnection& WithVpcIngressConnectionArn(Aws::String&& value) { SetVpcIngressConnectionArn(std::move(value)); return *this;}
    inline VpcIngressConnection& WithVpcIngressConnectionArn(const char* value) { SetVpcIngressConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided VPC Ingress Connection name.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionName() const{ return m_vpcIngressConnectionName; }
    inline bool VpcIngressConnectionNameHasBeenSet() const { return m_vpcIngressConnectionNameHasBeenSet; }
    inline void SetVpcIngressConnectionName(const Aws::String& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = value; }
    inline void SetVpcIngressConnectionName(Aws::String&& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = std::move(value); }
    inline void SetVpcIngressConnectionName(const char* value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName.assign(value); }
    inline VpcIngressConnection& WithVpcIngressConnectionName(const Aws::String& value) { SetVpcIngressConnectionName(value); return *this;}
    inline VpcIngressConnection& WithVpcIngressConnectionName(Aws::String&& value) { SetVpcIngressConnectionName(std::move(value)); return *this;}
    inline VpcIngressConnection& WithVpcIngressConnectionName(const char* value) { SetVpcIngressConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline VpcIngressConnection& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline VpcIngressConnection& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline VpcIngressConnection& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the VPC Ingress Connection. The VPC Ingress Connection
     * displays one of the following statuses: <code>AVAILABLE</code>,
     * <code>PENDING_CREATION</code>, <code>PENDING_UPDATE</code>,
     * <code>PENDING_DELETION</code>,<code>FAILED_CREATION</code>,
     * <code>FAILED_UPDATE</code>, <code>FAILED_DELETION</code>, and
     * <code>DELETED</code>.. </p>
     */
    inline const VpcIngressConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VpcIngressConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VpcIngressConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VpcIngressConnection& WithStatus(const VpcIngressConnectionStatus& value) { SetStatus(value); return *this;}
    inline VpcIngressConnection& WithStatus(VpcIngressConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Account Id you use to create the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline VpcIngressConnection& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline VpcIngressConnection& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline VpcIngressConnection& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name associated with the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline VpcIngressConnection& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline VpcIngressConnection& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline VpcIngressConnection& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the customer’s VPC and related PrivateLink VPC endpoint
     * that are used to associate with the VPC Ingress Connection resource.</p>
     */
    inline const IngressVpcConfiguration& GetIngressVpcConfiguration() const{ return m_ingressVpcConfiguration; }
    inline bool IngressVpcConfigurationHasBeenSet() const { return m_ingressVpcConfigurationHasBeenSet; }
    inline void SetIngressVpcConfiguration(const IngressVpcConfiguration& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = value; }
    inline void SetIngressVpcConfiguration(IngressVpcConfiguration&& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = std::move(value); }
    inline VpcIngressConnection& WithIngressVpcConfiguration(const IngressVpcConfiguration& value) { SetIngressVpcConfiguration(value); return *this;}
    inline VpcIngressConnection& WithIngressVpcConfiguration(IngressVpcConfiguration&& value) { SetIngressVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the VPC Ingress Connection was created. It's in the Unix time
     * stamp format.</p> <ul> <li> <p> Type: Timestamp </p> </li> <li> <p> Required:
     * Yes </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline VpcIngressConnection& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline VpcIngressConnection& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was deleted. It's in the Unix time stamp
     * format.</p> <ul> <li> <p> Type: Timestamp </p> </li> <li> <p> Required: No </p>
     * </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }
    inline VpcIngressConnection& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}
    inline VpcIngressConnection& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    Aws::String m_vpcIngressConnectionName;
    bool m_vpcIngressConnectionNameHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    VpcIngressConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    IngressVpcConfiguration m_ingressVpcConfiguration;
    bool m_ingressVpcConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
