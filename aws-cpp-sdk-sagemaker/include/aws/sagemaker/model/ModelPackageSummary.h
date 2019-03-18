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
#include <aws/sagemaker/model/ModelPackageStatus.h>
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
   * <p>Provides summary information about a model package.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelPackageSummary
  {
  public:
    ModelPackageSummary();
    ModelPackageSummary(Aws::Utils::Json::JsonView jsonValue);
    ModelPackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model package.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }

    /**
     * <p>The name of the model package.</p>
     */
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }

    /**
     * <p>The name of the model package.</p>
     */
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }

    /**
     * <p>The name of the model package.</p>
     */
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }

    /**
     * <p>The name of the model package.</p>
     */
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }

    /**
     * <p>The name of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}

    /**
     * <p>The name of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    /**
     * <p>A brief description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }

    /**
     * <p>A brief description of the model package.</p>
     */
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }

    /**
     * <p>A brief description of the model package.</p>
     */
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }

    /**
     * <p>A brief description of the model package.</p>
     */
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }

    /**
     * <p>A brief description of the model package.</p>
     */
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }

    /**
     * <p>A brief description of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}

    /**
     * <p>A brief description of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}


    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline ModelPackageSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline ModelPackageSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The overall status of the model package.</p>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }

    /**
     * <p>The overall status of the model package.</p>
     */
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }

    /**
     * <p>The overall status of the model package.</p>
     */
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }

    /**
     * <p>The overall status of the model package.</p>
     */
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = std::move(value); }

    /**
     * <p>The overall status of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}

    /**
     * <p>The overall status of the model package.</p>
     */
    inline ModelPackageSummary& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet;

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    ModelPackageStatus m_modelPackageStatus;
    bool m_modelPackageStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
