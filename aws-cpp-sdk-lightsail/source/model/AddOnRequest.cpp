/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AddOnRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AddOnRequest::AddOnRequest() : 
    m_addOnType(AddOnType::NOT_SET),
    m_addOnTypeHasBeenSet(false),
    m_autoSnapshotAddOnRequestHasBeenSet(false)
{
}

AddOnRequest::AddOnRequest(JsonView jsonValue) : 
    m_addOnType(AddOnType::NOT_SET),
    m_addOnTypeHasBeenSet(false),
    m_autoSnapshotAddOnRequestHasBeenSet(false)
{
  *this = jsonValue;
}

AddOnRequest& AddOnRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addOnType"))
  {
    m_addOnType = AddOnTypeMapper::GetAddOnTypeForName(jsonValue.GetString("addOnType"));

    m_addOnTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoSnapshotAddOnRequest"))
  {
    m_autoSnapshotAddOnRequest = jsonValue.GetObject("autoSnapshotAddOnRequest");

    m_autoSnapshotAddOnRequestHasBeenSet = true;
  }

  return *this;
}

JsonValue AddOnRequest::Jsonize() const
{
  JsonValue payload;

  if(m_addOnTypeHasBeenSet)
  {
   payload.WithString("addOnType", AddOnTypeMapper::GetNameForAddOnType(m_addOnType));
  }

  if(m_autoSnapshotAddOnRequestHasBeenSet)
  {
   payload.WithObject("autoSnapshotAddOnRequest", m_autoSnapshotAddOnRequest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
