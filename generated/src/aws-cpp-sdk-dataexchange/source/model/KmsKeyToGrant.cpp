﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/KmsKeyToGrant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

KmsKeyToGrant::KmsKeyToGrant() : 
    m_kmsKeyArnHasBeenSet(false)
{
}

KmsKeyToGrant::KmsKeyToGrant(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

KmsKeyToGrant& KmsKeyToGrant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsKeyToGrant::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
