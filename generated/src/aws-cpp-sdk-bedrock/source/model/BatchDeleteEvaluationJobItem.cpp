/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/BatchDeleteEvaluationJobItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

BatchDeleteEvaluationJobItem::BatchDeleteEvaluationJobItem(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchDeleteEvaluationJobItem& BatchDeleteEvaluationJobItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobIdentifier"))
  {
    m_jobIdentifier = jsonValue.GetString("jobIdentifier");
    m_jobIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = EvaluationJobStatusMapper::GetEvaluationJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteEvaluationJobItem::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdentifierHasBeenSet)
  {
   payload.WithString("jobIdentifier", m_jobIdentifier);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("jobStatus", EvaluationJobStatusMapper::GetNameForEvaluationJobStatus(m_jobStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
