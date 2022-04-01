/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SharingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SharingSettings::SharingSettings() : 
    m_notebookOutputOption(NotebookOutputOption::NOT_SET),
    m_notebookOutputOptionHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_s3KmsKeyIdHasBeenSet(false)
{
}

SharingSettings::SharingSettings(JsonView jsonValue) : 
    m_notebookOutputOption(NotebookOutputOption::NOT_SET),
    m_notebookOutputOptionHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_s3KmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

SharingSettings& SharingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotebookOutputOption"))
  {
    m_notebookOutputOption = NotebookOutputOptionMapper::GetNotebookOutputOptionForName(jsonValue.GetString("NotebookOutputOption"));

    m_notebookOutputOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KmsKeyId"))
  {
    m_s3KmsKeyId = jsonValue.GetString("S3KmsKeyId");

    m_s3KmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SharingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_notebookOutputOptionHasBeenSet)
  {
   payload.WithString("NotebookOutputOption", NotebookOutputOptionMapper::GetNameForNotebookOutputOption(m_notebookOutputOption));
  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_s3KmsKeyIdHasBeenSet)
  {
   payload.WithString("S3KmsKeyId", m_s3KmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
