/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeExecutor.h>
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

ActionTypeExecutor::ActionTypeExecutor() : 
    m_configurationHasBeenSet(false),
    m_type(ExecutorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_policyStatementsTemplateHasBeenSet(false),
    m_jobTimeout(0),
    m_jobTimeoutHasBeenSet(false)
{
}

ActionTypeExecutor::ActionTypeExecutor(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_type(ExecutorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_policyStatementsTemplateHasBeenSet(false),
    m_jobTimeout(0),
    m_jobTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypeExecutor& ActionTypeExecutor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ExecutorTypeMapper::GetExecutorTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyStatementsTemplate"))
  {
    m_policyStatementsTemplate = jsonValue.GetString("policyStatementsTemplate");

    m_policyStatementsTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobTimeout"))
  {
    m_jobTimeout = jsonValue.GetInteger("jobTimeout");

    m_jobTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypeExecutor::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ExecutorTypeMapper::GetNameForExecutorType(m_type));
  }

  if(m_policyStatementsTemplateHasBeenSet)
  {
   payload.WithString("policyStatementsTemplate", m_policyStatementsTemplate);

  }

  if(m_jobTimeoutHasBeenSet)
  {
   payload.WithInteger("jobTimeout", m_jobTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
