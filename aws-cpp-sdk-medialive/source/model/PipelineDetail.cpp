/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_activeMotionGraphicsActionNameHasBeenSet(false),
    m_activeMotionGraphicsUriHasBeenSet(false),
    m_pipelineIdHasBeenSet(false)
{
}

PipelineDetail::PipelineDetail(JsonView jsonValue) : 
    m_activeInputAttachmentNameHasBeenSet(false),
    m_activeInputSwitchActionNameHasBeenSet(false),
    m_activeMotionGraphicsActionNameHasBeenSet(false),
    m_activeMotionGraphicsUriHasBeenSet(false),
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

  if(jsonValue.ValueExists("activeMotionGraphicsActionName"))
  {
    m_activeMotionGraphicsActionName = jsonValue.GetString("activeMotionGraphicsActionName");

    m_activeMotionGraphicsActionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeMotionGraphicsUri"))
  {
    m_activeMotionGraphicsUri = jsonValue.GetString("activeMotionGraphicsUri");

    m_activeMotionGraphicsUriHasBeenSet = true;
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

  if(m_activeMotionGraphicsActionNameHasBeenSet)
  {
   payload.WithString("activeMotionGraphicsActionName", m_activeMotionGraphicsActionName);

  }

  if(m_activeMotionGraphicsUriHasBeenSet)
  {
   payload.WithString("activeMotionGraphicsUri", m_activeMotionGraphicsUri);

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
