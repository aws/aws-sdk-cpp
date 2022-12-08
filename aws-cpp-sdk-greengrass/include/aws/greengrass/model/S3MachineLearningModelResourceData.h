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
    AWS_GREENGRASS_API S3MachineLearningModelResourceData();
    AWS_GREENGRASS_API S3MachineLearningModelResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API S3MachineLearningModelResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline S3MachineLearningModelResourceData& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline S3MachineLearningModelResourceData& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * The absolute local path of the resource inside the Lambda environment.
     */
    inline S3MachineLearningModelResourceData& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    
    inline const ResourceDownloadOwnerSetting& GetOwnerSetting() const{ return m_ownerSetting; }

    
    inline bool OwnerSettingHasBeenSet() const { return m_ownerSettingHasBeenSet; }

    
    inline void SetOwnerSetting(const ResourceDownloadOwnerSetting& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = value; }

    
    inline void SetOwnerSetting(ResourceDownloadOwnerSetting&& value) { m_ownerSettingHasBeenSet = true; m_ownerSetting = std::move(value); }

    
    inline S3MachineLearningModelResourceData& WithOwnerSetting(const ResourceDownloadOwnerSetting& value) { SetOwnerSetting(value); return *this;}

    
    inline S3MachineLearningModelResourceData& WithOwnerSetting(ResourceDownloadOwnerSetting&& value) { SetOwnerSetting(std::move(value)); return *this;}


    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * The URI of the source model in an S3 bucket. The model package must be in tar.gz
     * or .zip format.
     */
    inline S3MachineLearningModelResourceData& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

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
