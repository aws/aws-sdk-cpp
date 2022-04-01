/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DescribeRecoverySnapshotsRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

DescribeRecoverySnapshotsRequestFilters::DescribeRecoverySnapshotsRequestFilters() : 
    m_fromDateTimeHasBeenSet(false),
    m_toDateTimeHasBeenSet(false)
{
}

DescribeRecoverySnapshotsRequestFilters::DescribeRecoverySnapshotsRequestFilters(JsonView jsonValue) : 
    m_fromDateTimeHasBeenSet(false),
    m_toDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeRecoverySnapshotsRequestFilters& DescribeRecoverySnapshotsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromDateTime"))
  {
    m_fromDateTime = jsonValue.GetString("fromDateTime");

    m_fromDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toDateTime"))
  {
    m_toDateTime = jsonValue.GetString("toDateTime");

    m_toDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeRecoverySnapshotsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_fromDateTimeHasBeenSet)
  {
   payload.WithString("fromDateTime", m_fromDateTime);

  }

  if(m_toDateTimeHasBeenSet)
  {
   payload.WithString("toDateTime", m_toDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
