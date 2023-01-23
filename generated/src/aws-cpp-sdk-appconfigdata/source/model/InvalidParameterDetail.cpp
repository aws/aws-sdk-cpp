/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/InvalidParameterDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfigData
{
namespace Model
{

InvalidParameterDetail::InvalidParameterDetail() : 
    m_problem(InvalidParameterProblem::NOT_SET),
    m_problemHasBeenSet(false)
{
}

InvalidParameterDetail::InvalidParameterDetail(JsonView jsonValue) : 
    m_problem(InvalidParameterProblem::NOT_SET),
    m_problemHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidParameterDetail& InvalidParameterDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Problem"))
  {
    m_problem = InvalidParameterProblemMapper::GetInvalidParameterProblemForName(jsonValue.GetString("Problem"));

    m_problemHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidParameterDetail::Jsonize() const
{
  JsonValue payload;

  if(m_problemHasBeenSet)
  {
   payload.WithString("Problem", InvalidParameterProblemMapper::GetNameForInvalidParameterProblem(m_problem));
  }

  return payload;
}

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
