/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ValidationExceptionField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

ValidationExceptionField::ValidationExceptionField() : 
    m_nameHasBeenSet(false),
    m_validationIssueHasBeenSet(false)
{
}

ValidationExceptionField::ValidationExceptionField(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_validationIssueHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationExceptionField& ValidationExceptionField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationIssue"))
  {
    m_validationIssue = jsonValue.GetString("ValidationIssue");

    m_validationIssueHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationExceptionField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_validationIssueHasBeenSet)
  {
   payload.WithString("ValidationIssue", m_validationIssue);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
