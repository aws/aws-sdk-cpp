/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StopCisMessageProgress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

StopCisMessageProgress::StopCisMessageProgress() : 
    m_errorChecks(0),
    m_errorChecksHasBeenSet(false),
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_informationalChecks(0),
    m_informationalChecksHasBeenSet(false),
    m_notApplicableChecks(0),
    m_notApplicableChecksHasBeenSet(false),
    m_notEvaluatedChecks(0),
    m_notEvaluatedChecksHasBeenSet(false),
    m_successfulChecks(0),
    m_successfulChecksHasBeenSet(false),
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false),
    m_unknownChecks(0),
    m_unknownChecksHasBeenSet(false)
{
}

StopCisMessageProgress::StopCisMessageProgress(JsonView jsonValue) : 
    m_errorChecks(0),
    m_errorChecksHasBeenSet(false),
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_informationalChecks(0),
    m_informationalChecksHasBeenSet(false),
    m_notApplicableChecks(0),
    m_notApplicableChecksHasBeenSet(false),
    m_notEvaluatedChecks(0),
    m_notEvaluatedChecksHasBeenSet(false),
    m_successfulChecks(0),
    m_successfulChecksHasBeenSet(false),
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false),
    m_unknownChecks(0),
    m_unknownChecksHasBeenSet(false)
{
  *this = jsonValue;
}

StopCisMessageProgress& StopCisMessageProgress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorChecks"))
  {
    m_errorChecks = jsonValue.GetInteger("errorChecks");

    m_errorChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedChecks"))
  {
    m_failedChecks = jsonValue.GetInteger("failedChecks");

    m_failedChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("informationalChecks"))
  {
    m_informationalChecks = jsonValue.GetInteger("informationalChecks");

    m_informationalChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notApplicableChecks"))
  {
    m_notApplicableChecks = jsonValue.GetInteger("notApplicableChecks");

    m_notApplicableChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notEvaluatedChecks"))
  {
    m_notEvaluatedChecks = jsonValue.GetInteger("notEvaluatedChecks");

    m_notEvaluatedChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successfulChecks"))
  {
    m_successfulChecks = jsonValue.GetInteger("successfulChecks");

    m_successfulChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalChecks"))
  {
    m_totalChecks = jsonValue.GetInteger("totalChecks");

    m_totalChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownChecks"))
  {
    m_unknownChecks = jsonValue.GetInteger("unknownChecks");

    m_unknownChecksHasBeenSet = true;
  }

  return *this;
}

JsonValue StopCisMessageProgress::Jsonize() const
{
  JsonValue payload;

  if(m_errorChecksHasBeenSet)
  {
   payload.WithInteger("errorChecks", m_errorChecks);

  }

  if(m_failedChecksHasBeenSet)
  {
   payload.WithInteger("failedChecks", m_failedChecks);

  }

  if(m_informationalChecksHasBeenSet)
  {
   payload.WithInteger("informationalChecks", m_informationalChecks);

  }

  if(m_notApplicableChecksHasBeenSet)
  {
   payload.WithInteger("notApplicableChecks", m_notApplicableChecks);

  }

  if(m_notEvaluatedChecksHasBeenSet)
  {
   payload.WithInteger("notEvaluatedChecks", m_notEvaluatedChecks);

  }

  if(m_successfulChecksHasBeenSet)
  {
   payload.WithInteger("successfulChecks", m_successfulChecks);

  }

  if(m_totalChecksHasBeenSet)
  {
   payload.WithInteger("totalChecks", m_totalChecks);

  }

  if(m_unknownChecksHasBeenSet)
  {
   payload.WithInteger("unknownChecks", m_unknownChecks);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
