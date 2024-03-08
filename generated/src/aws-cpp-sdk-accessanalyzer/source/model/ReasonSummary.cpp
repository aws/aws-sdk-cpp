/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ReasonSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

ReasonSummary::ReasonSummary() : 
    m_descriptionHasBeenSet(false),
    m_statementIndex(0),
    m_statementIndexHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

ReasonSummary::ReasonSummary(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_statementIndex(0),
    m_statementIndexHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
  *this = jsonValue;
}

ReasonSummary& ReasonSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statementIndex"))
  {
    m_statementIndex = jsonValue.GetInteger("statementIndex");

    m_statementIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statementId"))
  {
    m_statementId = jsonValue.GetString("statementId");

    m_statementIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ReasonSummary::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statementIndexHasBeenSet)
  {
   payload.WithInteger("statementIndex", m_statementIndex);

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("statementId", m_statementId);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
