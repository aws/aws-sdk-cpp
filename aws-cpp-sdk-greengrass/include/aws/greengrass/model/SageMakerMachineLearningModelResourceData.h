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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Attributes that define an Amazon SageMaker machine learning resource.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/SageMakerMachineLearningModelResourceData">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData
  {
  public:
    SageMakerMachineLearningModelResourceData();
    SageMakerMachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    SageMakerMachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline const Aws::String& GetSageMakerJobArn() const{ return m_sageMakerJobArn; }

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline bool SageMakerJobArnHasBeenSet() const { return m_sageMakerJobArnHasBeenSet; }

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline void SetSageMakerJobArn(const Aws::String& value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn = value; }

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline void SetSageMakerJobArn(Aws::String&& value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn = std::move(value); }

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline void SetSageMakerJobArn(const char* value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn.assign(value); }

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(const Aws::String& value) { SetSageMakerJobArn(value); return *this;}

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(Aws::String&& value) { SetSageMakerJobArn(std::move(value)); return *this;}

    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(const char* value) { SetSageMakerJobArn(value); return *this;}

  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet;

    Aws::String m_sageMakerJobArn;
    bool m_sageMakerJobArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
