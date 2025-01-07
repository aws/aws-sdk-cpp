﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SupplementalDataStorageLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

SupplementalDataStorageLocation::SupplementalDataStorageLocation() : 
    m_s3LocationHasBeenSet(false),
    m_type(SupplementalDataStorageLocationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SupplementalDataStorageLocation::SupplementalDataStorageLocation(JsonView jsonValue)
  : SupplementalDataStorageLocation()
{
  *this = jsonValue;
}

SupplementalDataStorageLocation& SupplementalDataStorageLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = SupplementalDataStorageLocationTypeMapper::GetSupplementalDataStorageLocationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SupplementalDataStorageLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SupplementalDataStorageLocationTypeMapper::GetNameForSupplementalDataStorageLocationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
