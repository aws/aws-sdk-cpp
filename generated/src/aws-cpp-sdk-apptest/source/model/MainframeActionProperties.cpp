/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/MainframeActionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

MainframeActionProperties::MainframeActionProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

MainframeActionProperties& MainframeActionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dmsTaskArn"))
  {
    m_dmsTaskArn = jsonValue.GetString("dmsTaskArn");
    m_dmsTaskArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MainframeActionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dmsTaskArnHasBeenSet)
  {
   payload.WithString("dmsTaskArn", m_dmsTaskArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
