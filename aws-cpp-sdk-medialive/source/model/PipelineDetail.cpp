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

#include <aws/medialive/model/PipelineDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

PipelineDetail::PipelineDetail() : 
    m_activeInputAttachmentNameHasBeenSet(false),
    m_activeInputSwitchActionNameHasBeenSet(false),
    m_pipelineIdHasBeenSet(false)
{
}

PipelineDetail::PipelineDetail(JsonView jsonValue) : 
    m_activeInputAttachmentNameHasBeenSet(false),
    m_activeInputSwitchActionNameHasBeenSet(false),
    m_pipelineIdHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineDetail& PipelineDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeInputAttachmentName"))
  {
    m_activeInputAttachmentName = jsonValue.GetString("activeInputAttachmentName");

    m_activeInputAttachmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeInputSwitchActionName"))
  {
    m_activeInputSwitchActionName = jsonValue.GetString("activeInputSwitchActionName");

    m_activeInputSwitchActionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineId"))
  {
    m_pipelineId = jsonValue.GetString("pipelineId");

    m_pipelineIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineDetail::Jsonize() const
{
  JsonValue payload;

  if(m_activeInputAttachmentNameHasBeenSet)
  {
   payload.WithString("activeInputAttachmentName", m_activeInputAttachmentName);

  }

  if(m_activeInputSwitchActionNameHasBeenSet)
  {
   payload.WithString("activeInputSwitchActionName", m_activeInputSwitchActionName);

  }

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
