/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
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
   * <p>Summary information about a model group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageGroupSummary">AWS
   * API Reference</a></p>
   */
  class ModelPackageGroupSummary
  {
  public:
    AWS_SAGEMAKER_API ModelPackageGroupSummary();
    AWS_SAGEMAKER_API ModelPackageGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>The name of the model group.</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>The name of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>The name of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const{ return m_modelPackageGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(const Aws::String& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(Aws::String&& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(const char* value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupArn(const Aws::String& value) { SetModelPackageGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupArn(Aws::String&& value) { SetModelPackageGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupArn(const char* value) { SetModelPackageGroupArn(value); return *this;}


    /**
     * <p>A description of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const{ return m_modelPackageGroupDescription; }

    /**
     * <p>A description of the model group.</p>
     */
    inline bool ModelPackageGroupDescriptionHasBeenSet() const { return m_modelPackageGroupDescriptionHasBeenSet; }

    /**
     * <p>A description of the model group.</p>
     */
    inline void SetModelPackageGroupDescription(const Aws::String& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = value; }

    /**
     * <p>A description of the model group.</p>
     */
    inline void SetModelPackageGroupDescription(Aws::String&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::move(value); }

    /**
     * <p>A description of the model group.</p>
     */
    inline void SetModelPackageGroupDescription(const char* value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription.assign(value); }

    /**
     * <p>A description of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupDescription(const Aws::String& value) { SetModelPackageGroupDescription(value); return *this;}

    /**
     * <p>A description of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupDescription(Aws::String&& value) { SetModelPackageGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupDescription(const char* value) { SetModelPackageGroupDescription(value); return *this;}


    /**
     * <p>The time that the model group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the model group was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the model group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the model group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the model group was created.</p>
     */
    inline ModelPackageGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the model group was created.</p>
     */
    inline ModelPackageGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the model group.</p>
     */
    inline const ModelPackageGroupStatus& GetModelPackageGroupStatus() const{ return m_modelPackageGroupStatus; }

    /**
     * <p>The status of the model group.</p>
     */
    inline bool ModelPackageGroupStatusHasBeenSet() const { return m_modelPackageGroupStatusHasBeenSet; }

    /**
     * <p>The status of the model group.</p>
     */
    inline void SetModelPackageGroupStatus(const ModelPackageGroupStatus& value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = value; }

    /**
     * <p>The status of the model group.</p>
     */
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus&& value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = std::move(value); }

    /**
     * <p>The status of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupStatus(const ModelPackageGroupStatus& value) { SetModelPackageGroupStatus(value); return *this;}

    /**
     * <p>The status of the model group.</p>
     */
    inline ModelPackageGroupSummary& WithModelPackageGroupStatus(ModelPackageGroupStatus&& value) { SetModelPackageGroupStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageGroupArn;
    bool m_modelPackageGroupArnHasBeenSet = false;

    Aws::String m_modelPackageGroupDescription;
    bool m_modelPackageGroupDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ModelPackageGroupStatus m_modelPackageGroupStatus;
    bool m_modelPackageGroupStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
