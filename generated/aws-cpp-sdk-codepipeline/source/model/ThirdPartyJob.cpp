/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ThirdPartyJob.h>
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

ThirdPartyJob::ThirdPartyJob() : 
    m_clientIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

ThirdPartyJob::ThirdPartyJob(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
  *this = jsonValue;
}

ThirdPartyJob& ThirdPartyJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ThirdPartyJob::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
