/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceSummary.h>
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

NotebookInstanceSummary::NotebookInstanceSummary() : 
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceArnHasBeenSet(false),
    m_notebookInstanceStatus(NotebookInstanceStatus::NOT_SET),
    m_notebookInstanceStatusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false)
{
}

NotebookInstanceSummary::NotebookInstanceSummary(JsonView jsonValue) : 
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceArnHasBeenSet(false),
    m_notebookInstanceStatus(NotebookInstanceStatus::NOT_SET),
    m_notebookInstanceStatusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookInstanceSummary& NotebookInstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotebookInstanceName"))
  {
    m_notebookInstanceName = jsonValue.GetString("NotebookInstanceName");

    m_notebookInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceArn"))
  {
    m_notebookInstanceArn = jsonValue.GetString("NotebookInstanceArn");

    m_notebookInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceStatus"))
  {
    m_notebookInstanceStatus = NotebookInstanceStatusMapper::GetNotebookInstanceStatusForName(jsonValue.GetString("NotebookInstanceStatus"));

    m_notebookInstanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");

    m_notebookInstanceLifecycleConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultCodeRepository"))
  {
    m_defaultCodeRepository = jsonValue.GetString("DefaultCodeRepository");

    m_defaultCodeRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalCodeRepositories"))
  {
    Aws::Utils::Array<JsonView> additionalCodeRepositoriesJsonList = jsonValue.GetArray("AdditionalCodeRepositories");
    for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
    {
      m_additionalCodeRepositories.push_back(additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString());
    }
    m_additionalCodeRepositoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue NotebookInstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_notebookInstanceNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceName", m_notebookInstanceName);

  }

  if(m_notebookInstanceArnHasBeenSet)
  {
   payload.WithString("NotebookInstanceArn", m_notebookInstanceArn);

  }

  if(m_notebookInstanceStatusHasBeenSet)
  {
   payload.WithString("NotebookInstanceStatus", NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(m_notebookInstanceStatus));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  if(m_defaultCodeRepositoryHasBeenSet)
  {
   payload.WithString("DefaultCodeRepository", m_defaultCodeRepository);

  }

  if(m_additionalCodeRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalCodeRepositoriesJsonList(m_additionalCodeRepositories.size());
   for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
   {
     additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString(m_additionalCodeRepositories[additionalCodeRepositoriesIndex]);
   }
   payload.WithArray("AdditionalCodeRepositories", std::move(additionalCodeRepositoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
