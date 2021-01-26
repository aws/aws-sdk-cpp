/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Sample.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Sample::Sample() : 
    m_arnHasBeenSet(false),
    m_type(SampleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

Sample::Sample(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_type(SampleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

Sample& Sample::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = SampleTypeMapper::GetSampleTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue Sample::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SampleTypeMapper::GetNameForSampleType(m_type));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
