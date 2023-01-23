/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/JobDetails.h>
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

JobDetails::JobDetails() : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

JobDetails::JobDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetails& JobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
