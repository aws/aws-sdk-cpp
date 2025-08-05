/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FailedAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

FailedAssociationResult::FailedAssociationResult(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedAssociationResult& FailedAssociationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanConfigurationArn"))
  {
    m_scanConfigurationArn = jsonValue.GetString("scanConfigurationArn");
    m_scanConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = AssociationResultStatusCodeMapper::GetAssociationResultStatusCodeForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedAssociationResult::Jsonize() const
{
  JsonValue payload;

  if(m_scanConfigurationArnHasBeenSet)
  {
   payload.WithString("scanConfigurationArn", m_scanConfigurationArn);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", AssociationResultStatusCodeMapper::GetNameForAssociationResultStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
