/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ResourceDownloadOwnerSetting.h>
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
  class SageMakerMachineLearningModelResourceData
  {
  public:
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData();
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}
    inline SageMakerMachineLearningModelResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceDownloadOwnerSetting& GetOwnerSetting() const{ return m_ownerSetting; }
    inline bool OwnerSettingHasBeenSet() const { return m_ownerSettingHasBeenSet; }
    inline void SetOwnerSetting(const ResourceDownloadOwnerSetting& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = value; }
    inline void SetOwnerSetting(ResourceDownloadOwnerSetting&& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = std::move(value); }
    inline SageMakerMachineLearningModelResourceData& WithOwnerSetting(const ResourceDownloadOwnerSetting& value) { SetOwnerSetting(value); return *this;}
    inline SageMakerMachineLearningModelResourceData& WithOwnerSetting(ResourceDownloadOwnerSetting&& value) { SetOwnerSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline const Aws::String& GetSageMakerJobArn() const{ return m_sageMakerJobArn; }
    inline bool SageMakerJobArnHasBeenSet() const { return m_sageMakerJobArnHasBeenSet; }
    inline void SetSageMakerJobArn(const Aws::String& value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn = value; }
    inline void SetSageMakerJobArn(Aws::String&& value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn = std::move(value); }
    inline void SetSageMakerJobArn(const char* value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn.assign(value); }
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(const Aws::String& value) { SetSageMakerJobArn(value); return *this;}
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(Aws::String&& value) { SetSageMakerJobArn(std::move(value)); return *this;}
    inline SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(const char* value) { SetSageMakerJobArn(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    ResourceDownloadOwnerSetting m_ownerSetting;
    bool m_ownerSettingHasBeenSet = false;

    Aws::String m_sageMakerJobArn;
    bool m_sageMakerJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
