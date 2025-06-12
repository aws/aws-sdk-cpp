/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/CommonControlMappingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

CommonControlMappingDetails::CommonControlMappingDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CommonControlMappingDetails& CommonControlMappingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommonControlArn"))
  {
    m_commonControlArn = jsonValue.GetString("CommonControlArn");
    m_commonControlArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CommonControlMappingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commonControlArnHasBeenSet)
  {
   payload.WithString("CommonControlArn", m_commonControlArn);

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
