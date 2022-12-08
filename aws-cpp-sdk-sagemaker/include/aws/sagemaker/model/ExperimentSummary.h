/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ExperimentSource.h>
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
   * <p>A summary of the properties of an experiment. To get the complete set of
   * properties, call the <a>DescribeExperiment</a> API and provide the
   * <code>ExperimentName</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExperimentSummary">AWS
   * API Reference</a></p>
   */
  class ExperimentSummary
  {
  public:
    AWS_SAGEMAKER_API ExperimentSummary();
    AWS_SAGEMAKER_API ExperimentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ExperimentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline bool ExperimentArnHasBeenSet() const { return m_experimentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArnHasBeenSet = true; m_experimentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArnHasBeenSet = true; m_experimentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const char* value) { m_experimentArnHasBeenSet = true; m_experimentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}


    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline ExperimentSummary& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline ExperimentSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline ExperimentSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline ExperimentSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const ExperimentSource& GetExperimentSource() const{ return m_experimentSource; }

    
    inline bool ExperimentSourceHasBeenSet() const { return m_experimentSourceHasBeenSet; }

    
    inline void SetExperimentSource(const ExperimentSource& value) { m_experimentSourceHasBeenSet = true; m_experimentSource = value; }

    
    inline void SetExperimentSource(ExperimentSource&& value) { m_experimentSourceHasBeenSet = true; m_experimentSource = std::move(value); }

    
    inline ExperimentSummary& WithExperimentSource(const ExperimentSource& value) { SetExperimentSource(value); return *this;}

    
    inline ExperimentSummary& WithExperimentSource(ExperimentSource&& value) { SetExperimentSource(std::move(value)); return *this;}


    /**
     * <p>When the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the experiment was created.</p>
     */
    inline ExperimentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the experiment was created.</p>
     */
    inline ExperimentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the experiment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline ExperimentSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline ExperimentSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_experimentArn;
    bool m_experimentArnHasBeenSet = false;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ExperimentSource m_experimentSource;
    bool m_experimentSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
