/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
