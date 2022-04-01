/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressionListDestination.h>
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

SuppressionListDestination::SuppressionListDestination() : 
    m_suppressionListImportAction(SuppressionListImportAction::NOT_SET),
    m_suppressionListImportActionHasBeenSet(false)
{
}

SuppressionListDestination::SuppressionListDestination(JsonView jsonValue) : 
    m_suppressionListImportAction(SuppressionListImportAction::NOT_SET),
    m_suppressionListImportActionHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressionListDestination& SuppressionListDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuppressionListImportAction"))
  {
    m_suppressionListImportAction = SuppressionListImportActionMapper::GetSuppressionListImportActionForName(jsonValue.GetString("SuppressionListImportAction"));

    m_suppressionListImportActionHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressionListDestination::Jsonize() const
{
  JsonValue payload;

  if(m_suppressionListImportActionHasBeenSet)
  {
   payload.WithString("SuppressionListImportAction", SuppressionListImportActionMapper::GetNameForSuppressionListImportAction(m_suppressionListImportAction));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
