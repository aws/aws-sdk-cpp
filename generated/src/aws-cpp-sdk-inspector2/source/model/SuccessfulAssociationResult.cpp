/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SuccessfulAssociationResult.h>
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

SuccessfulAssociationResult::SuccessfulAssociationResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SuccessfulAssociationResult& SuccessfulAssociationResult::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue SuccessfulAssociationResult::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
