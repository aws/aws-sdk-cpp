/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ServerlessSasl.h>
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

ServerlessSasl::ServerlessSasl() : 
    m_iamHasBeenSet(false)
{
}

ServerlessSasl::ServerlessSasl(JsonView jsonValue) : 
    m_iamHasBeenSet(false)
{
  *this = jsonValue;
}

ServerlessSasl& ServerlessSasl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iam"))
  {
    m_iam = jsonValue.GetObject("iam");

    m_iamHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerlessSasl::Jsonize() const
{
  JsonValue payload;

  if(m_iamHasBeenSet)
  {
   payload.WithObject("iam", m_iam.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
