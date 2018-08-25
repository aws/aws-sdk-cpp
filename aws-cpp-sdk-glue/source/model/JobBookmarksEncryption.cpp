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

#include <aws/glue/model/JobBookmarksEncryption.h>
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

JobBookmarksEncryption::JobBookmarksEncryption() : 
    m_jobBookmarksEncryptionMode(JobBookmarksEncryptionMode::NOT_SET),
    m_jobBookmarksEncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

JobBookmarksEncryption::JobBookmarksEncryption(JsonView jsonValue) : 
    m_jobBookmarksEncryptionMode(JobBookmarksEncryptionMode::NOT_SET),
    m_jobBookmarksEncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

JobBookmarksEncryption& JobBookmarksEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobBookmarksEncryptionMode"))
  {
    m_jobBookmarksEncryptionMode = JobBookmarksEncryptionModeMapper::GetJobBookmarksEncryptionModeForName(jsonValue.GetString("JobBookmarksEncryptionMode"));

    m_jobBookmarksEncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue JobBookmarksEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_jobBookmarksEncryptionModeHasBeenSet)
  {
   payload.WithString("JobBookmarksEncryptionMode", JobBookmarksEncryptionModeMapper::GetNameForJobBookmarksEncryptionMode(m_jobBookmarksEncryptionMode));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
