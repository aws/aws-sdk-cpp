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
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData() = default;
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API SageMakerMachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline const Aws::String& GetDestinationPath() const { return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    template<typename DestinationPathT = Aws::String>
    void SetDestinationPath(DestinationPathT&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::forward<DestinationPathT>(value); }
    template<typename DestinationPathT = Aws::String>
    SageMakerMachineLearningModelResourceData& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceDownloadOwnerSetting& GetOwnerSetting() const { return m_ownerSetting; }
    inline bool OwnerSettingHasBeenSet() const { return m_ownerSettingHasBeenSet; }
    template<typename OwnerSettingT = ResourceDownloadOwnerSetting>
    void SetOwnerSetting(OwnerSettingT&& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = std::forward<OwnerSettingT>(value); }
    template<typename OwnerSettingT = ResourceDownloadOwnerSetting>
    SageMakerMachineLearningModelResourceData& WithOwnerSetting(OwnerSettingT&& value) { SetOwnerSetting(std::forward<OwnerSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the Amazon SageMaker training job that represents the source model.
     */
    inline const Aws::String& GetSageMakerJobArn() const { return m_sageMakerJobArn; }
    inline bool SageMakerJobArnHasBeenSet() const { return m_sageMakerJobArnHasBeenSet; }
    template<typename SageMakerJobArnT = Aws::String>
    void SetSageMakerJobArn(SageMakerJobArnT&& value) { m_sageMakerJobArnHasBeenSet = true; m_sageMakerJobArn = std::forward<SageMakerJobArnT>(value); }
    template<typename SageMakerJobArnT = Aws::String>
    SageMakerMachineLearningModelResourceData& WithSageMakerJobArn(SageMakerJobArnT&& value) { SetSageMakerJobArn(std::forward<SageMakerJobArnT>(value)); return *this;}
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
