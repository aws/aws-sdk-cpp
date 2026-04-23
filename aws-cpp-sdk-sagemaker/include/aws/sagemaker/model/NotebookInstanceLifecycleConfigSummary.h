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
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides a summary of a notebook instance lifecycle
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceLifecycleConfigSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSummary
  {
  public:
    NotebookInstanceLifecycleConfigSummary();
    NotebookInstanceLifecycleConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    NotebookInstanceLifecycleConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const{ return m_notebookInstanceLifecycleConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline bool NotebookInstanceLifecycleConfigArnHasBeenSet() const { return m_notebookInstanceLifecycleConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const Aws::String& value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(Aws::String&& value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const char* value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigArn(const Aws::String& value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigArn(Aws::String&& value) { SetNotebookInstanceLifecycleConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigArn(const char* value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}


    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline NotebookInstanceLifecycleConfigSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet;

    Aws::String m_notebookInstanceLifecycleConfigArn;
    bool m_notebookInstanceLifecycleConfigArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
