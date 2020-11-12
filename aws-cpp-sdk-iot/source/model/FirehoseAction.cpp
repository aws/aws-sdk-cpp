/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/FirehoseAction.h>
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

FirehoseAction::FirehoseAction() : 
    m_roleArnHasBeenSet(false),
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_batchMode(false),
    m_batchModeHasBeenSet(false)
{
}

FirehoseAction::FirehoseAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_batchMode(false),
    m_batchModeHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseAction& FirehoseAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deliveryStreamName"))
  {
    m_deliveryStreamName = jsonValue.GetString("deliveryStreamName");

    m_deliveryStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("separator"))
  {
    m_separator = jsonValue.GetString("separator");

    m_separatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("batchMode"))
  {
    m_batchMode = jsonValue.GetBool("batchMode");

    m_batchModeHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("deliveryStreamName", m_deliveryStreamName);

  }

  if(m_separatorHasBeenSet)
  {
   payload.WithString("separator", m_separator);

  }

  if(m_batchModeHasBeenSet)
  {
   payload.WithBool("batchMode", m_batchMode);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
