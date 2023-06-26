/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/RevealConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

RevealConfiguration::RevealConfiguration() : 
    m_kmsKeyIdHasBeenSet(false),
    m_status(RevealStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RevealConfiguration::RevealConfiguration(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_status(RevealStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RevealConfiguration& RevealConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RevealStatusMapper::GetRevealStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RevealConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RevealStatusMapper::GetNameForRevealStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
