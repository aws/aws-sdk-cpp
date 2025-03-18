/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/SourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

SourceDetail::SourceDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceDetail& SourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kendra"))
  {
    m_kendra = jsonValue.GetObject("kendra");
    m_kendraHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_kendraHasBeenSet)
  {
   payload.WithObject("kendra", m_kendra.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
