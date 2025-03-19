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
    AWS_APPRUNNER_API VpcIngressConnection() = default;
    AWS_APPRUNNER_API VpcIngressConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcIngressConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const { return m_vpcIngressConnectionArn; }
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }
    template<typename VpcIngressConnectionArnT = Aws::String>
    void SetVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::forward<VpcIngressConnectionArnT>(value); }
    template<typename VpcIngressConnectionArnT = Aws::String>
    VpcIngressConnection& WithVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { SetVpcIngressConnectionArn(std::forward<VpcIngressConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided VPC Ingress Connection name.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionName() const { return m_vpcIngressConnectionName; }
    inline bool VpcIngressConnectionNameHasBeenSet() const { return m_vpcIngressConnectionNameHasBeenSet; }
    template<typename VpcIngressConnectionNameT = Aws::String>
    void SetVpcIngressConnectionName(VpcIngressConnectionNameT&& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = std::forward<VpcIngressConnectionNameT>(value); }
    template<typename VpcIngressConnectionNameT = Aws::String>
    VpcIngressConnection& WithVpcIngressConnectionName(VpcIngressConnectionNameT&& value) { SetVpcIngressConnectionName(std::forward<VpcIngressConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    VpcIngressConnection& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
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
    inline VpcIngressConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VpcIngressConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline VpcIngressConnection& WithStatus(VpcIngressConnectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Account Id you use to create the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    VpcIngressConnection& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name associated with the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    VpcIngressConnection& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the customer’s VPC and related PrivateLink VPC endpoint
     * that are used to associate with the VPC Ingress Connection resource.</p>
     */
    inline const IngressVpcConfiguration& GetIngressVpcConfiguration() const { return m_ingressVpcConfiguration; }
    inline bool IngressVpcConfigurationHasBeenSet() const { return m_ingressVpcConfigurationHasBeenSet; }
    template<typename IngressVpcConfigurationT = IngressVpcConfiguration>
    void SetIngressVpcConfiguration(IngressVpcConfigurationT&& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = std::forward<IngressVpcConfigurationT>(value); }
    template<typename IngressVpcConfigurationT = IngressVpcConfiguration>
    VpcIngressConnection& WithIngressVpcConfiguration(IngressVpcConfigurationT&& value) { SetIngressVpcConfiguration(std::forward<IngressVpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the VPC Ingress Connection was created. It's in the Unix time
     * stamp format.</p> <ul> <li> <p> Type: Timestamp </p> </li> <li> <p> Required:
     * Yes </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    VpcIngressConnection& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was deleted. It's in the Unix time stamp
     * format.</p> <ul> <li> <p> Type: Timestamp </p> </li> <li> <p> Required: No </p>
     * </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    VpcIngressConnection& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    Aws::String m_vpcIngressConnectionName;
    bool m_vpcIngressConnectionNameHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    VpcIngressConnectionStatus m_status{VpcIngressConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    IngressVpcConfiguration m_ingressVpcConfiguration;
    bool m_ingressVpcConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
