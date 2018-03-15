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

NotebookInstanceLifecycleConfigSummary::NotebookInstanceLifecycleConfigSummary(const JsonValue& jsonValue) : 
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_notebookInstanceLifecycleConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookInstanceLifecycleConfigSummary& NotebookInstanceLifecycleConfigSummary::operator =(const JsonValue& jsonValue)
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
