/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CriteriaForJob.h>
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

CriteriaForJob::CriteriaForJob() : 
    m_simpleCriterionHasBeenSet(false),
    m_tagCriterionHasBeenSet(false)
{
}

CriteriaForJob::CriteriaForJob(JsonView jsonValue) : 
    m_simpleCriterionHasBeenSet(false),
    m_tagCriterionHasBeenSet(false)
{
  *this = jsonValue;
}

CriteriaForJob& CriteriaForJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simpleCriterion"))
  {
    m_simpleCriterion = jsonValue.GetObject("simpleCriterion");

    m_simpleCriterionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagCriterion"))
  {
    m_tagCriterion = jsonValue.GetObject("tagCriterion");

    m_tagCriterionHasBeenSet = true;
  }

  return *this;
}

JsonValue CriteriaForJob::Jsonize() const
{
  JsonValue payload;

  if(m_simpleCriterionHasBeenSet)
  {
   payload.WithObject("simpleCriterion", m_simpleCriterion.Jsonize());

  }

  if(m_tagCriterionHasBeenSet)
  {
   payload.WithObject("tagCriterion", m_tagCriterion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
