/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentReportS3Report.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentReportS3Report::ExperimentReportS3Report(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentReportS3Report& ExperimentReportS3Report::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reportType"))
  {
    m_reportType = jsonValue.GetString("reportType");
    m_reportTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentReportS3Report::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_reportTypeHasBeenSet)
  {
   payload.WithString("reportType", m_reportType);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
