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
   * Attributes that define an Amazon S3 machine learning resource.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/S3MachineLearningModelResourceData">AWS
   * API Reference</a></p>
   */
  class S3MachineLearningModelResourceData
  {
  public:
    AWS_GREENGRASS_API S3MachineLearningModelResourceData() = default;
    AWS_GREENGRASS_API S3MachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API S3MachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    S3MachineLearningModelResourceData& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceDownloadOwnerSetting& GetOwnerSetting() const { return m_ownerSetting; }
    inline bool OwnerSettingHasBeenSet() const { return m_ownerSettingHasBeenSet; }
    template<typename OwnerSettingT = ResourceDownloadOwnerSetting>
    void SetOwnerSetting(OwnerSettingT&& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = std::forward<OwnerSettingT>(value); }
    template<typename OwnerSettingT = ResourceDownloadOwnerSetting>
    S3MachineLearningModelResourceData& WithOwnerSetting(OwnerSettingT&& value) { SetOwnerSetting(std::forward<OwnerSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3MachineLearningModelResourceData& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    ResourceDownloadOwnerSetting m_ownerSetting;
    bool m_ownerSettingHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
