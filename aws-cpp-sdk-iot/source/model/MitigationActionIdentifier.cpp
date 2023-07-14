/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MitigationActionIdentifier.h>
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

MitigationActionIdentifier::MitigationActionIdentifier() : 
    m_actionNameHasBeenSet(false),
    m_actionArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

MitigationActionIdentifier::MitigationActionIdentifier(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_actionArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

MitigationActionIdentifier& MitigationActionIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionArn"))
  {
    m_actionArn = jsonValue.GetString("actionArn");

    m_actionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue MitigationActionIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_actionArnHasBeenSet)
  {
   payload.WithString("actionArn", m_actionArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
