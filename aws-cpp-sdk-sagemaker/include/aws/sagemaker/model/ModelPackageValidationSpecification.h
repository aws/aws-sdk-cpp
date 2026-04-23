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
#include <aws/sagemaker/model/ModelPackageValidationProfile.h>
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
   * <p>Specifies batch transform jobs that Amazon SageMaker runs to validate your
   * model package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageValidationSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelPackageValidationSpecification
  {
  public:
    ModelPackageValidationSpecification();
    ModelPackageValidationSpecification(Aws::Utils::Json::JsonView jsonValue);
    ModelPackageValidationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline const Aws::String& GetValidationRole() const{ return m_validationRole; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline bool ValidationRoleHasBeenSet() const { return m_validationRoleHasBeenSet; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(const Aws::String& value) { m_validationRoleHasBeenSet = true; m_validationRole = value; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(Aws::String&& value) { m_validationRoleHasBeenSet = true; m_validationRole = std::move(value); }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(const char* value) { m_validationRoleHasBeenSet = true; m_validationRole.assign(value); }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(const Aws::String& value) { SetValidationRole(value); return *this;}

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(Aws::String&& value) { SetValidationRole(std::move(value)); return *this;}

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(const char* value) { SetValidationRole(value); return *this;}


    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline const Aws::Vector<ModelPackageValidationProfile>& GetValidationProfiles() const{ return m_validationProfiles; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline bool ValidationProfilesHasBeenSet() const { return m_validationProfilesHasBeenSet; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline void SetValidationProfiles(const Aws::Vector<ModelPackageValidationProfile>& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = value; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline void SetValidationProfiles(Aws::Vector<ModelPackageValidationProfile>&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = std::move(value); }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationProfiles(const Aws::Vector<ModelPackageValidationProfile>& value) { SetValidationProfiles(value); return *this;}

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationProfiles(Aws::Vector<ModelPackageValidationProfile>&& value) { SetValidationProfiles(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline ModelPackageValidationSpecification& AddValidationProfiles(const ModelPackageValidationProfile& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(value); return *this; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that Amazon SageMaker runs to validate your
     * model package.</p>
     */
    inline ModelPackageValidationSpecification& AddValidationProfiles(ModelPackageValidationProfile&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_validationRole;
    bool m_validationRoleHasBeenSet;

    Aws::Vector<ModelPackageValidationProfile> m_validationProfiles;
    bool m_validationProfilesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
