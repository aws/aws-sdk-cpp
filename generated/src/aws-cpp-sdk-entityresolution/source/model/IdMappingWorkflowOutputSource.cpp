/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingWorkflowOutputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdMappingWorkflowOutputSource::IdMappingWorkflowOutputSource() : 
    m_kMSArnHasBeenSet(false),
    m_outputS3PathHasBeenSet(false)
{
}

IdMappingWorkflowOutputSource::IdMappingWorkflowOutputSource(JsonView jsonValue) : 
    m_kMSArnHasBeenSet(false),
    m_outputS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

IdMappingWorkflowOutputSource& IdMappingWorkflowOutputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KMSArn"))
  {
    m_kMSArn = jsonValue.GetString("KMSArn");

    m_kMSArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3Path"))
  {
    m_outputS3Path = jsonValue.GetString("outputS3Path");

    m_outputS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue IdMappingWorkflowOutputSource::Jsonize() const
{
  JsonValue payload;

  if(m_kMSArnHasBeenSet)
  {
   payload.WithString("KMSArn", m_kMSArn);

  }

  if(m_outputS3PathHasBeenSet)
  {
   payload.WithString("outputS3Path", m_outputS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
