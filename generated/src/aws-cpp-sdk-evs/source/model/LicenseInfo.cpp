/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/LicenseInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

LicenseInfo::LicenseInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

LicenseInfo& LicenseInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("solutionKey"))
  {
    m_solutionKey = jsonValue.GetString("solutionKey");
    m_solutionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vsanKey"))
  {
    m_vsanKey = jsonValue.GetString("vsanKey");
    m_vsanKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseInfo::Jsonize() const
{
  JsonValue payload;

  if(m_solutionKeyHasBeenSet)
  {
   payload.WithString("solutionKey", m_solutionKey);

  }

  if(m_vsanKeyHasBeenSet)
  {
   payload.WithString("vsanKey", m_vsanKey);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
