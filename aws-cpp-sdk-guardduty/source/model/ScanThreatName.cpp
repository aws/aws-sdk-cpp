/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanThreatName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ScanThreatName::ScanThreatName() : 
    m_nameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
}

ScanThreatName::ScanThreatName(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
  *this = jsonValue;
}

ScanThreatName& ScanThreatName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("itemCount"))
  {
    m_itemCount = jsonValue.GetInteger("itemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filePaths"))
  {
    Aws::Utils::Array<JsonView> filePathsJsonList = jsonValue.GetArray("filePaths");
    for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
    {
      m_filePaths.push_back(filePathsJsonList[filePathsIndex].AsObject());
    }
    m_filePathsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanThreatName::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("itemCount", m_itemCount);

  }

  if(m_filePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filePathsJsonList(m_filePaths.size());
   for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
   {
     filePathsJsonList[filePathsIndex].AsObject(m_filePaths[filePathsIndex].Jsonize());
   }
   payload.WithArray("filePaths", std::move(filePathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
