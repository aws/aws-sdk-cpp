/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/LFTagError.h>
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

LFTagError::LFTagError() : 
    m_lFTagHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

LFTagError::LFTagError(JsonView jsonValue) : 
    m_lFTagHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

LFTagError& LFTagError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LFTag"))
  {
    m_lFTag = jsonValue.GetObject("LFTag");

    m_lFTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue LFTagError::Jsonize() const
{
  JsonValue payload;

  if(m_lFTagHasBeenSet)
  {
   payload.WithObject("LFTag", m_lFTag.Jsonize());

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
