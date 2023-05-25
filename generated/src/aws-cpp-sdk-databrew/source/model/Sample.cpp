/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Sample.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Sample::Sample() : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_type(SampleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Sample::Sample(JsonView jsonValue) : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_type(SampleType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Sample& Sample::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SampleTypeMapper::GetSampleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Sample::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SampleTypeMapper::GetNameForSampleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
