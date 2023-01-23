/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/VpcEndpointSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

VpcEndpointSummary::VpcEndpointSummary() : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointOwnerHasBeenSet(false),
    m_domainArnHasBeenSet(false),
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VpcEndpointSummary::VpcEndpointSummary(JsonView jsonValue) : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointOwnerHasBeenSet(false),
    m_domainArnHasBeenSet(false),
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VpcEndpointSummary& VpcEndpointSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointOwner"))
  {
    m_vpcEndpointOwner = jsonValue.GetString("VpcEndpointOwner");

    m_vpcEndpointOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainArn"))
  {
    m_domainArn = jsonValue.GetString("DomainArn");

    m_domainArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VpcEndpointStatusMapper::GetVpcEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcEndpointSummary::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcEndpointOwnerHasBeenSet)
  {
   payload.WithString("VpcEndpointOwner", m_vpcEndpointOwner);

  }

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("DomainArn", m_domainArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", VpcEndpointStatusMapper::GetNameForVpcEndpointStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
