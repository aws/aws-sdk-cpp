/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/PutMetadataFlagBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

PutMetadataFlagBody::PutMetadataFlagBody() : 
    m_newValueHasBeenSet(false)
{
}

PutMetadataFlagBody::PutMetadataFlagBody(JsonView jsonValue) : 
    m_newValueHasBeenSet(false)
{
  *this = jsonValue;
}

PutMetadataFlagBody& PutMetadataFlagBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("newValue"))
  {
    m_newValue = jsonValue.GetString("newValue");

    m_newValueHasBeenSet = true;
  }

  return *this;
}

JsonValue PutMetadataFlagBody::Jsonize() const
{
  JsonValue payload;

  if(m_newValueHasBeenSet)
  {
   payload.WithString("newValue", m_newValue);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
