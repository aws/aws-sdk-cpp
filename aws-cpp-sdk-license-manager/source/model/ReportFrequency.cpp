/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReportFrequency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ReportFrequency::ReportFrequency() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_period(ReportFrequencyType::NOT_SET),
    m_periodHasBeenSet(false)
{
}

ReportFrequency::ReportFrequency(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_period(ReportFrequencyType::NOT_SET),
    m_periodHasBeenSet(false)
{
  *this = jsonValue;
}

ReportFrequency& ReportFrequency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = ReportFrequencyTypeMapper::GetReportFrequencyTypeForName(jsonValue.GetString("period"));

    m_periodHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportFrequency::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithString("period", ReportFrequencyTypeMapper::GetNameForReportFrequencyType(m_period));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
