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
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the persistent application settings for users of a
   * stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ApplicationSettingsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ApplicationSettingsResponse
  {
  public:
    ApplicationSettingsResponse();
    ApplicationSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their streaming sessions.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their streaming sessions.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their streaming sessions.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their streaming sessions.</p>
     */
    inline ApplicationSettingsResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline const Aws::String& GetSettingsGroup() const{ return m_settingsGroup; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline bool SettingsGroupHasBeenSet() const { return m_settingsGroupHasBeenSet; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline void SetSettingsGroup(const Aws::String& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = value; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline void SetSettingsGroup(Aws::String&& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = std::move(value); }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline void SetSettingsGroup(const char* value) { m_settingsGroupHasBeenSet = true; m_settingsGroup.assign(value); }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline ApplicationSettingsResponse& WithSettingsGroup(const Aws::String& value) { SetSettingsGroup(value); return *this;}

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline ApplicationSettingsResponse& WithSettingsGroup(Aws::String&& value) { SetSettingsGroup(std::move(value)); return *this;}

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline ApplicationSettingsResponse& WithSettingsGroup(const char* value) { SetSettingsGroup(value); return *this;}


    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline ApplicationSettingsResponse& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline ApplicationSettingsResponse& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline ApplicationSettingsResponse& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_settingsGroup;
    bool m_settingsGroupHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
