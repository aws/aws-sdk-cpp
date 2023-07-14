/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsScte35Esam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

M2tsScte35Esam::M2tsScte35Esam() : 
    m_scte35EsamPid(0),
    m_scte35EsamPidHasBeenSet(false)
{
}

M2tsScte35Esam::M2tsScte35Esam(JsonView jsonValue) : 
    m_scte35EsamPid(0),
    m_scte35EsamPidHasBeenSet(false)
{
  *this = jsonValue;
}

M2tsScte35Esam& M2tsScte35Esam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scte35EsamPid"))
  {
    m_scte35EsamPid = jsonValue.GetInteger("scte35EsamPid");

    m_scte35EsamPidHasBeenSet = true;
  }

  return *this;
}

JsonValue M2tsScte35Esam::Jsonize() const
{
  JsonValue payload;

  if(m_scte35EsamPidHasBeenSet)
  {
   payload.WithInteger("scte35EsamPid", m_scte35EsamPid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
