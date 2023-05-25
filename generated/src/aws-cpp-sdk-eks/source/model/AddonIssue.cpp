/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonIssue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AddonIssue::AddonIssue() : 
    m_code(AddonIssueCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

AddonIssue::AddonIssue(JsonView jsonValue) : 
    m_code(AddonIssueCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

AddonIssue& AddonIssue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = AddonIssueCodeMapper::GetAddonIssueCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsString());
    }
    m_resourceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue AddonIssue::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", AddonIssueCodeMapper::GetNameForAddonIssueCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("resourceIds", std::move(resourceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
