/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ErrorReportLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ErrorReportLocation::ErrorReportLocation() : 
    m_s3ReportLocationHasBeenSet(false)
{
}

ErrorReportLocation::ErrorReportLocation(JsonView jsonValue) : 
    m_s3ReportLocationHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorReportLocation& ErrorReportLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ReportLocation"))
  {
    m_s3ReportLocation = jsonValue.GetObject("S3ReportLocation");

    m_s3ReportLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorReportLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3ReportLocationHasBeenSet)
  {
   payload.WithObject("S3ReportLocation", m_s3ReportLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
