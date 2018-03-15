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

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleHook.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult
  {
  public:
    DescribeNotebookInstanceLifecycleConfigResult();
    DescribeNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const{ return m_notebookInstanceLifecycleConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const Aws::String& value) { m_notebookInstanceLifecycleConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(Aws::String&& value) { m_notebookInstanceLifecycleConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const char* value) { m_notebookInstanceLifecycleConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const Aws::String& value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(Aws::String&& value) { SetNotebookInstanceLifecycleConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const char* value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}


    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const{ return m_onCreate; }

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline void SetOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onCreate = value; }

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline void SetOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onCreate = std::move(value); }

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnCreate(value); return *this;}

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnCreate(std::move(value)); return *this;}

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnCreate(const NotebookInstanceLifecycleHook& value) { m_onCreate.push_back(value); return *this; }

    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnCreate(NotebookInstanceLifecycleHook&& value) { m_onCreate.push_back(std::move(value)); return *this; }


    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const{ return m_onStart; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline void SetOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onStart = value; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline void SetOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onStart = std::move(value); }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnStart(value); return *this;}

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnStart(std::move(value)); return *this;}

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnStart(const NotebookInstanceLifecycleHook& value) { m_onStart.push_back(value); return *this; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnStart(NotebookInstanceLifecycleHook&& value) { m_onStart.push_back(std::move(value)); return *this; }


    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline DescribeNotebookInstanceLifecycleConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;

    Aws::String m_notebookInstanceLifecycleConfigName;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onCreate;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onStart;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
