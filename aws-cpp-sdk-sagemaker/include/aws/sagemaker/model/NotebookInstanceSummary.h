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
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
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

  /**
   * <p>Provides summary information for an Amazon SageMaker notebook
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API NotebookInstanceSummary
  {
  public:
    NotebookInstanceSummary();
    NotebookInstanceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    NotebookInstanceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}


    /**
     * <p>The status of the notebook instance.</p>
     */
    inline const NotebookInstanceStatus& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline void SetNotebookInstanceStatus(const NotebookInstanceStatus& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus&& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = std::move(value); }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceStatus(const NotebookInstanceStatus& value) { SetNotebookInstanceStatus(value); return *this;}

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceStatus(NotebookInstanceStatus&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}


    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline NotebookInstanceSummary& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline NotebookInstanceSummary& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that you use to connect to the Jupyter instance running in your
     * notebook instance. </p>
     */
    inline NotebookInstanceSummary& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline NotebookInstanceSummary& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline NotebookInstanceSummary& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline NotebookInstanceSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline NotebookInstanceSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline NotebookInstanceSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline NotebookInstanceSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a>notebook-lifecycle-config</a>.</p>
     */
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet;

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet;

    NotebookInstanceStatus m_notebookInstanceStatus;
    bool m_notebookInstanceStatusHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
