/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sesv2/model/KinesisFirehoseDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
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
} // namespace SESV2
} // namespace Aws
