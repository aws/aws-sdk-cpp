/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/EdiConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

EdiConfiguration::EdiConfiguration() : 
    m_typeHasBeenSet(false),
    m_inputLocationHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_transformerIdHasBeenSet(false)
{
}

EdiConfiguration::EdiConfiguration(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_inputLocationHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_transformerIdHasBeenSet(false)
{
  *this = jsonValue;
}

EdiConfiguration& EdiConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLocation"))
  {
    m_inputLocation = jsonValue.GetObject("inputLocation");

    m_inputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transformerId"))
  {
    m_transformerId = jsonValue.GetString("transformerId");

    m_transformerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EdiConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  if(m_inputLocationHasBeenSet)
  {
   payload.WithObject("inputLocation", m_inputLocation.Jsonize());

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_transformerIdHasBeenSet)
  {
   payload.WithString("transformerId", m_transformerId);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
