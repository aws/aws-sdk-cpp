/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WorkflowStep.h>
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

WorkflowStep::WorkflowStep() : 
    m_type(WorkflowStepType::NOT_SET),
    m_typeHasBeenSet(false),
    m_copyStepDetailsHasBeenSet(false),
    m_customStepDetailsHasBeenSet(false),
    m_deleteStepDetailsHasBeenSet(false),
    m_tagStepDetailsHasBeenSet(false),
    m_decryptStepDetailsHasBeenSet(false)
{
}

WorkflowStep::WorkflowStep(JsonView jsonValue) : 
    m_type(WorkflowStepType::NOT_SET),
    m_typeHasBeenSet(false),
    m_copyStepDetailsHasBeenSet(false),
    m_customStepDetailsHasBeenSet(false),
    m_deleteStepDetailsHasBeenSet(false),
    m_tagStepDetailsHasBeenSet(false),
    m_decryptStepDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowStep& WorkflowStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = WorkflowStepTypeMapper::GetWorkflowStepTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyStepDetails"))
  {
    m_copyStepDetails = jsonValue.GetObject("CopyStepDetails");

    m_copyStepDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomStepDetails"))
  {
    m_customStepDetails = jsonValue.GetObject("CustomStepDetails");

    m_customStepDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteStepDetails"))
  {
    m_deleteStepDetails = jsonValue.GetObject("DeleteStepDetails");

    m_deleteStepDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagStepDetails"))
  {
    m_tagStepDetails = jsonValue.GetObject("TagStepDetails");

    m_tagStepDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecryptStepDetails"))
  {
    m_decryptStepDetails = jsonValue.GetObject("DecryptStepDetails");

    m_decryptStepDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowStep::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WorkflowStepTypeMapper::GetNameForWorkflowStepType(m_type));
  }

  if(m_copyStepDetailsHasBeenSet)
  {
   payload.WithObject("CopyStepDetails", m_copyStepDetails.Jsonize());

  }

  if(m_customStepDetailsHasBeenSet)
  {
   payload.WithObject("CustomStepDetails", m_customStepDetails.Jsonize());

  }

  if(m_deleteStepDetailsHasBeenSet)
  {
   payload.WithObject("DeleteStepDetails", m_deleteStepDetails.Jsonize());

  }

  if(m_tagStepDetailsHasBeenSet)
  {
   payload.WithObject("TagStepDetails", m_tagStepDetails.Jsonize());

  }

  if(m_decryptStepDetailsHasBeenSet)
  {
   payload.WithObject("DecryptStepDetails", m_decryptStepDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
