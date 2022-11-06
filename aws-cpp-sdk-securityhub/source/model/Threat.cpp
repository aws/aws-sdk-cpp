/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Threat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Threat::Threat() : 
    m_nameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
}

Threat::Threat(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
  *this = jsonValue;
}

Threat& Threat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetString("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilePaths"))
  {
    Aws::Utils::Array<JsonView> filePathsJsonList = jsonValue.GetArray("FilePaths");
    for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
    {
      m_filePaths.push_back(filePathsJsonList[filePathsIndex].AsObject());
    }
    m_filePathsHasBeenSet = true;
  }

  return *this;
}

JsonValue Threat::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("ItemCount", m_itemCount);

  }

  if(m_filePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filePathsJsonList(m_filePaths.size());
   for(unsigned filePathsIndex = 0; filePathsIndex < filePathsJsonList.GetLength(); ++filePathsIndex)
   {
     filePathsJsonList[filePathsIndex].AsObject(m_filePaths[filePathsIndex].Jsonize());
   }
   payload.WithArray("FilePaths", std::move(filePathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
