/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Route53ResourceRecordSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Route53ResourceRecordSet::Route53ResourceRecordSet(JsonView jsonValue)
{
  *this = jsonValue;
}

Route53ResourceRecordSet& Route53ResourceRecordSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordSetIdentifier"))
  {
    m_recordSetIdentifier = jsonValue.GetString("recordSetIdentifier");
    m_recordSetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue Route53ResourceRecordSet::Jsonize() const
{
  JsonValue payload;

  if(m_recordSetIdentifierHasBeenSet)
  {
   payload.WithString("recordSetIdentifier", m_recordSetIdentifier);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
