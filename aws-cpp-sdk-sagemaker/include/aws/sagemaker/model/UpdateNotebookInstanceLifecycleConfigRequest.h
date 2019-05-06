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
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleHook.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateNotebookInstanceLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    UpdateNotebookInstanceLifecycleConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebookInstanceLifecycleConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const{ return m_onCreate; }

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline bool OnCreateHasBeenSet() const { return m_onCreateHasBeenSet; }

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline void SetOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onCreateHasBeenSet = true; m_onCreate = value; }

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline void SetOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onCreateHasBeenSet = true; m_onCreate = std::move(value); }

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnCreate(value); return *this;}

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnCreate(std::move(value)); return *this;}

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnCreate(const NotebookInstanceLifecycleHook& value) { m_onCreateHasBeenSet = true; m_onCreate.push_back(value); return *this; }

    /**
     * <p>The shell script that runs only once, when you create a notebook instance</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnCreate(NotebookInstanceLifecycleHook&& value) { m_onCreateHasBeenSet = true; m_onCreate.push_back(std::move(value)); return *this; }


    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const{ return m_onStart; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline bool OnStartHasBeenSet() const { return m_onStartHasBeenSet; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline void SetOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onStartHasBeenSet = true; m_onStart = value; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline void SetOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onStartHasBeenSet = true; m_onStart = std::move(value); }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnStart(value); return *this;}

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnStart(std::move(value)); return *this;}

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnStart(const NotebookInstanceLifecycleHook& value) { m_onStartHasBeenSet = true; m_onStart.push_back(value); return *this; }

    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnStart(NotebookInstanceLifecycleHook&& value) { m_onStartHasBeenSet = true; m_onStart.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onCreate;
    bool m_onCreateHasBeenSet;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onStart;
    bool m_onStartHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
