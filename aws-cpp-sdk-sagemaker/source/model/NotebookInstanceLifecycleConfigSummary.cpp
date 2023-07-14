/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceLifecycleConfigSummary.h>
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

NotebookInstanceLifecycleConfigSummary::NotebookInstanceLifecycleConfigSummary() : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_notebookInstanceLifecycleConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

NotebookInstanceLifecycleConfigSummary::NotebookInstanceLifecycleConfigSummary(JsonView jsonValue) : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_notebookInstanceLifecycleConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookInstanceLifecycleConfigSummary& NotebookInstanceLifecycleConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");

    m_notebookInstanceLifecycleConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigArn"))
  {
    m_notebookInstanceLifecycleConfigArn = jsonValue.GetString("NotebookInstanceLifecycleConfigArn");

    m_notebookInstanceLifecycleConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotebookInstanceLifecycleConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  if(m_notebookInstanceLifecycleConfigArnHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigArn", m_notebookInstanceLifecycleConfigArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
