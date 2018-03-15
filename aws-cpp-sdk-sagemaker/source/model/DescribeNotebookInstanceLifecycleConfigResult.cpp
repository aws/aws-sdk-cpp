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

#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotebookInstanceLifecycleConfigResult::DescribeNotebookInstanceLifecycleConfigResult()
{
}

DescribeNotebookInstanceLifecycleConfigResult::DescribeNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNotebookInstanceLifecycleConfigResult& DescribeNotebookInstanceLifecycleConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigArn"))
  {
    m_notebookInstanceLifecycleConfigArn = jsonValue.GetString("NotebookInstanceLifecycleConfigArn");

  }

  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");

  }

  if(jsonValue.ValueExists("OnCreate"))
  {
    Array<JsonValue> onCreateJsonList = jsonValue.GetArray("OnCreate");
    for(unsigned onCreateIndex = 0; onCreateIndex < onCreateJsonList.GetLength(); ++onCreateIndex)
    {
      m_onCreate.push_back(onCreateJsonList[onCreateIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OnStart"))
  {
    Array<JsonValue> onStartJsonList = jsonValue.GetArray("OnStart");
    for(unsigned onStartIndex = 0; onStartIndex < onStartJsonList.GetLength(); ++onStartIndex)
    {
      m_onStart.push_back(onStartJsonList[onStartIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
