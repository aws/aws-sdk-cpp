/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/InstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

InstanceDetails::InstanceDetails() : 
    m_eC2InstanceDetailsHasBeenSet(false),
    m_rDSInstanceDetailsHasBeenSet(false),
    m_redshiftInstanceDetailsHasBeenSet(false),
    m_elastiCacheInstanceDetailsHasBeenSet(false),
    m_eSInstanceDetailsHasBeenSet(false)
{
}

InstanceDetails::InstanceDetails(JsonView jsonValue) : 
    m_eC2InstanceDetailsHasBeenSet(false),
    m_rDSInstanceDetailsHasBeenSet(false),
    m_redshiftInstanceDetailsHasBeenSet(false),
    m_elastiCacheInstanceDetailsHasBeenSet(false),
    m_eSInstanceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceDetails& InstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2InstanceDetails"))
  {
    m_eC2InstanceDetails = jsonValue.GetObject("EC2InstanceDetails");

    m_eC2InstanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RDSInstanceDetails"))
  {
    m_rDSInstanceDetails = jsonValue.GetObject("RDSInstanceDetails");

    m_rDSInstanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftInstanceDetails"))
  {
    m_redshiftInstanceDetails = jsonValue.GetObject("RedshiftInstanceDetails");

    m_redshiftInstanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElastiCacheInstanceDetails"))
  {
    m_elastiCacheInstanceDetails = jsonValue.GetObject("ElastiCacheInstanceDetails");

    m_elastiCacheInstanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ESInstanceDetails"))
  {
    m_eSInstanceDetails = jsonValue.GetObject("ESInstanceDetails");

    m_eSInstanceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eC2InstanceDetailsHasBeenSet)
  {
   payload.WithObject("EC2InstanceDetails", m_eC2InstanceDetails.Jsonize());

  }

  if(m_rDSInstanceDetailsHasBeenSet)
  {
   payload.WithObject("RDSInstanceDetails", m_rDSInstanceDetails.Jsonize());

  }

  if(m_redshiftInstanceDetailsHasBeenSet)
  {
   payload.WithObject("RedshiftInstanceDetails", m_redshiftInstanceDetails.Jsonize());

  }

  if(m_elastiCacheInstanceDetailsHasBeenSet)
  {
   payload.WithObject("ElastiCacheInstanceDetails", m_elastiCacheInstanceDetails.Jsonize());

  }

  if(m_eSInstanceDetailsHasBeenSet)
  {
   payload.WithObject("ESInstanceDetails", m_eSInstanceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
