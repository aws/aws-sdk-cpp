/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Statement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Statement::Statement() : 
    m_id(0),
    m_idHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_state(StatementState::NOT_SET),
    m_stateHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_startedOn(0),
    m_startedOnHasBeenSet(false),
    m_completedOn(0),
    m_completedOnHasBeenSet(false)
{
}

Statement::Statement(JsonView jsonValue) : 
    m_id(0),
    m_idHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_state(StatementState::NOT_SET),
    m_stateHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_startedOn(0),
    m_startedOnHasBeenSet(false),
    m_completedOn(0),
    m_completedOnHasBeenSet(false)
{
  *this = jsonValue;
}

Statement& Statement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StatementStateMapper::GetStatementStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Progress"))
  {
    m_progress = jsonValue.GetDouble("Progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetInt64("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetInt64("CompletedOn");

    m_completedOnHasBeenSet = true;
  }

  return *this;
}

JsonValue Statement::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StatementStateMapper::GetNameForStatementState(m_state));
  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("Output", m_output.Jsonize());

  }

  if(m_progressHasBeenSet)
  {
   payload.WithDouble("Progress", m_progress);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithInt64("StartedOn", m_startedOn);

  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithInt64("CompletedOn", m_completedOn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
