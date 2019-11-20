/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/quicksight/model/DashboardPublishOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DashboardPublishOptions::DashboardPublishOptions() : 
    m_adHocFilteringOptionHasBeenSet(false),
    m_exportToCSVOptionHasBeenSet(false),
    m_sheetControlsOptionHasBeenSet(false)
{
}

DashboardPublishOptions::DashboardPublishOptions(JsonView jsonValue) : 
    m_adHocFilteringOptionHasBeenSet(false),
    m_exportToCSVOptionHasBeenSet(false),
    m_sheetControlsOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardPublishOptions& DashboardPublishOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdHocFilteringOption"))
  {
    m_adHocFilteringOption = jsonValue.GetObject("AdHocFilteringOption");

    m_adHocFilteringOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportToCSVOption"))
  {
    m_exportToCSVOption = jsonValue.GetObject("ExportToCSVOption");

    m_exportToCSVOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetControlsOption"))
  {
    m_sheetControlsOption = jsonValue.GetObject("SheetControlsOption");

    m_sheetControlsOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardPublishOptions::Jsonize() const
{
  JsonValue payload;

  if(m_adHocFilteringOptionHasBeenSet)
  {
   payload.WithObject("AdHocFilteringOption", m_adHocFilteringOption.Jsonize());

  }

  if(m_exportToCSVOptionHasBeenSet)
  {
   payload.WithObject("ExportToCSVOption", m_exportToCSVOption.Jsonize());

  }

  if(m_sheetControlsOptionHasBeenSet)
  {
   payload.WithObject("SheetControlsOption", m_sheetControlsOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
