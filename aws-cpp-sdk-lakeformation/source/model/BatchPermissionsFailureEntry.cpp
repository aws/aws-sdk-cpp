/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/BatchPermissionsFailureEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

BatchPermissionsFailureEntry::BatchPermissionsFailureEntry() : 
    m_requestEntryHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

BatchPermissionsFailureEntry::BatchPermissionsFailureEntry(JsonView jsonValue) : 
    m_requestEntryHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPermissionsFailureEntry& BatchPermissionsFailureEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestEntry"))
  {
    m_requestEntry = jsonValue.GetObject("RequestEntry");

    m_requestEntryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPermissionsFailureEntry::Jsonize() const
{
  JsonValue payload;

  if(m_requestEntryHasBeenSet)
  {
   payload.WithObject("RequestEntry", m_requestEntry.Jsonize());

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
