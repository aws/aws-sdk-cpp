/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnectivitySasl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

VpcConnectivitySasl::VpcConnectivitySasl() : 
    m_scramHasBeenSet(false),
    m_iamHasBeenSet(false)
{
}

VpcConnectivitySasl::VpcConnectivitySasl(JsonView jsonValue) : 
    m_scramHasBeenSet(false),
    m_iamHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnectivitySasl& VpcConnectivitySasl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scram"))
  {
    m_scram = jsonValue.GetObject("scram");

    m_scramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iam"))
  {
    m_iam = jsonValue.GetObject("iam");

    m_iamHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnectivitySasl::Jsonize() const
{
  JsonValue payload;

  if(m_scramHasBeenSet)
  {
   payload.WithObject("scram", m_scram.Jsonize());

  }

  if(m_iamHasBeenSet)
  {
   payload.WithObject("iam", m_iam.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
