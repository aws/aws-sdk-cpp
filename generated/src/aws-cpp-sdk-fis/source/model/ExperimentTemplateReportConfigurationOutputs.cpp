/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateReportConfigurationOutputs.h>
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

ExperimentTemplateReportConfigurationOutputs::ExperimentTemplateReportConfigurationOutputs(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentTemplateReportConfigurationOutputs& ExperimentTemplateReportConfigurationOutputs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentTemplateReportConfigurationOutputs::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
