/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

BatchGetCollaborationAnalysisTemplateError::BatchGetCollaborationAnalysisTemplateError() : 
    m_arnHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BatchGetCollaborationAnalysisTemplateError::BatchGetCollaborationAnalysisTemplateError(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetCollaborationAnalysisTemplateError& BatchGetCollaborationAnalysisTemplateError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetCollaborationAnalysisTemplateError::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
