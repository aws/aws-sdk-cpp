/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DeletionWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

DeletionWarning::DeletionWarning() : 
    m_configurationIdHasBeenSet(false),
    m_warningCode(0),
    m_warningCodeHasBeenSet(false),
    m_warningTextHasBeenSet(false)
{
}

DeletionWarning::DeletionWarning(JsonView jsonValue) : 
    m_configurationIdHasBeenSet(false),
    m_warningCode(0),
    m_warningCodeHasBeenSet(false),
    m_warningTextHasBeenSet(false)
{
  *this = jsonValue;
}

DeletionWarning& DeletionWarning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationId"))
  {
    m_configurationId = jsonValue.GetString("configurationId");

    m_configurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warningCode"))
  {
    m_warningCode = jsonValue.GetInteger("warningCode");

    m_warningCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warningText"))
  {
    m_warningText = jsonValue.GetString("warningText");

    m_warningTextHasBeenSet = true;
  }

  return *this;
}

JsonValue DeletionWarning::Jsonize() const
{
  JsonValue payload;

  if(m_configurationIdHasBeenSet)
  {
   payload.WithString("configurationId", m_configurationId);

  }

  if(m_warningCodeHasBeenSet)
  {
   payload.WithInteger("warningCode", m_warningCode);

  }

  if(m_warningTextHasBeenSet)
  {
   payload.WithString("warningText", m_warningText);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
