/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SqsAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SqsAction::SqsAction(JsonView jsonValue)
{
  *this = jsonValue;
}

SqsAction& SqsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueUrl"))
  {
    m_queueUrl = jsonValue.GetString("queueUrl");
    m_queueUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("useBase64"))
  {
    m_useBase64 = jsonValue.GetBool("useBase64");
    m_useBase64HasBeenSet = true;
  }
  return *this;
}

JsonValue SqsAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("queueUrl", m_queueUrl);

  }

  if(m_useBase64HasBeenSet)
  {
   payload.WithBool("useBase64", m_useBase64);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
