/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingSourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

FindingSourceDetail::FindingSourceDetail() : 
    m_accessPointArnHasBeenSet(false),
    m_accessPointAccountHasBeenSet(false)
{
}

FindingSourceDetail::FindingSourceDetail(JsonView jsonValue) : 
    m_accessPointArnHasBeenSet(false),
    m_accessPointAccountHasBeenSet(false)
{
  *this = jsonValue;
}

FindingSourceDetail& FindingSourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("accessPointArn");

    m_accessPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessPointAccount"))
  {
    m_accessPointAccount = jsonValue.GetString("accessPointAccount");

    m_accessPointAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingSourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("accessPointArn", m_accessPointArn);

  }

  if(m_accessPointAccountHasBeenSet)
  {
   payload.WithString("accessPointAccount", m_accessPointAccount);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
