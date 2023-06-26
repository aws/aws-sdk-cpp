/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcIngressConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

VpcIngressConnection::VpcIngressConnection() : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_vpcIngressConnectionNameHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_status(VpcIngressConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_ingressVpcConfigurationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
}

VpcIngressConnection::VpcIngressConnection(JsonView jsonValue) : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_vpcIngressConnectionNameHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_status(VpcIngressConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_ingressVpcConfigurationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
  *this = jsonValue;
}

VpcIngressConnection& VpcIngressConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcIngressConnectionArn"))
  {
    m_vpcIngressConnectionArn = jsonValue.GetString("VpcIngressConnectionArn");

    m_vpcIngressConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcIngressConnectionName"))
  {
    m_vpcIngressConnectionName = jsonValue.GetString("VpcIngressConnectionName");

    m_vpcIngressConnectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VpcIngressConnectionStatusMapper::GetVpcIngressConnectionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngressVpcConfiguration"))
  {
    m_ingressVpcConfiguration = jsonValue.GetObject("IngressVpcConfiguration");

    m_ingressVpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("DeletedAt");

    m_deletedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcIngressConnection::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  if(m_vpcIngressConnectionNameHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionName", m_vpcIngressConnectionName);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", VpcIngressConnectionStatusMapper::GetNameForVpcIngressConnectionStatus(m_status));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_ingressVpcConfigurationHasBeenSet)
  {
   payload.WithObject("IngressVpcConfiguration", m_ingressVpcConfiguration.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("DeletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
