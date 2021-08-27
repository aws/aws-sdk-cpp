/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/KinesisFirehoseDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

KinesisFirehoseDestination::KinesisFirehoseDestination() : 
    m_iamRoleArnHasBeenSet(false),
    m_deliveryStreamArnHasBeenSet(false)
{
}

KinesisFirehoseDestination::KinesisFirehoseDestination(JsonView jsonValue) : 
    m_iamRoleArnHasBeenSet(false),
    m_deliveryStreamArnHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisFirehoseDestination& KinesisFirehoseDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryStreamArn"))
  {
    m_deliveryStreamArn = jsonValue.GetString("DeliveryStreamArn");

    m_deliveryStreamArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisFirehoseDestination::Jsonize() const
{
  JsonValue payload;

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_deliveryStreamArnHasBeenSet)
  {
   payload.WithString("DeliveryStreamArn", m_deliveryStreamArn);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
