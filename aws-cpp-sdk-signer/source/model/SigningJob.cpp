/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/signer/model/SigningJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningJob::SigningJob() : 
    m_jobIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_signedObjectHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SigningStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SigningJob::SigningJob(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_signedObjectHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SigningStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SigningJob& SigningJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signedObject"))
  {
    m_signedObject = jsonValue.GetObject("signedObject");

    m_signedObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

    m_signingMaterialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningStatusMapper::GetSigningStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_signedObjectHasBeenSet)
  {
   payload.WithObject("signedObject", m_signedObject.Jsonize());

  }

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SigningStatusMapper::GetNameForSigningStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
