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
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DeleteModelPackageRequest : public SageMakerRequest
  {
  public:
    DeleteModelPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteModelPackage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline DeleteModelPackageRequest& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline DeleteModelPackageRequest& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline DeleteModelPackageRequest& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}

  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
