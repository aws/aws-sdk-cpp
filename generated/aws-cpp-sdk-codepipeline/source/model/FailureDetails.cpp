/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/FailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

FailureDetails::FailureDetails() : 
    m_type(FailureType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false)
{
}

FailureDetails::FailureDetails(JsonView jsonValue) : 
    m_type(FailureType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false)
{
  *this = jsonValue;
}

FailureDetails& FailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FailureTypeMapper::GetFailureTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionId"))
  {
    m_externalExecutionId = jsonValue.GetString("externalExecutionId");

    m_externalExecutionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FailureTypeMapper::GetNameForFailureType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_externalExecutionIdHasBeenSet)
  {
   payload.WithString("externalExecutionId", m_externalExecutionId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
