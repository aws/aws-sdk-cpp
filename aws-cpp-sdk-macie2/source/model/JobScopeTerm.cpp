/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobScopeTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

JobScopeTerm::JobScopeTerm() : 
    m_simpleScopeTermHasBeenSet(false),
    m_tagScopeTermHasBeenSet(false)
{
}

JobScopeTerm::JobScopeTerm(JsonView jsonValue) : 
    m_simpleScopeTermHasBeenSet(false),
    m_tagScopeTermHasBeenSet(false)
{
  *this = jsonValue;
}

JobScopeTerm& JobScopeTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simpleScopeTerm"))
  {
    m_simpleScopeTerm = jsonValue.GetObject("simpleScopeTerm");

    m_simpleScopeTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagScopeTerm"))
  {
    m_tagScopeTerm = jsonValue.GetObject("tagScopeTerm");

    m_tagScopeTermHasBeenSet = true;
  }

  return *this;
}

JsonValue JobScopeTerm::Jsonize() const
{
  JsonValue payload;

  if(m_simpleScopeTermHasBeenSet)
  {
   payload.WithObject("simpleScopeTerm", m_simpleScopeTerm.Jsonize());

  }

  if(m_tagScopeTermHasBeenSet)
  {
   payload.WithObject("tagScopeTerm", m_tagScopeTerm.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
