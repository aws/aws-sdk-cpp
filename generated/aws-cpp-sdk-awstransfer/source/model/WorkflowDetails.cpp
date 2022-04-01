/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WorkflowDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

WorkflowDetails::WorkflowDetails() : 
    m_onUploadHasBeenSet(false)
{
}

WorkflowDetails::WorkflowDetails(JsonView jsonValue) : 
    m_onUploadHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowDetails& WorkflowDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnUpload"))
  {
    Array<JsonView> onUploadJsonList = jsonValue.GetArray("OnUpload");
    for(unsigned onUploadIndex = 0; onUploadIndex < onUploadJsonList.GetLength(); ++onUploadIndex)
    {
      m_onUpload.push_back(onUploadJsonList[onUploadIndex].AsObject());
    }
    m_onUploadHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowDetails::Jsonize() const
{
  JsonValue payload;

  if(m_onUploadHasBeenSet)
  {
   Array<JsonValue> onUploadJsonList(m_onUpload.size());
   for(unsigned onUploadIndex = 0; onUploadIndex < onUploadJsonList.GetLength(); ++onUploadIndex)
   {
     onUploadJsonList[onUploadIndex].AsObject(m_onUpload[onUploadIndex].Jsonize());
   }
   payload.WithArray("OnUpload", std::move(onUploadJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
