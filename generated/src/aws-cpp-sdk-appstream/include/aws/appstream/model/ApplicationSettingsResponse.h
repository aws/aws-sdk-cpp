/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ApplicationSettingsResponse
  {
  public:
    AWS_APPSTREAM_API ApplicationSettingsResponse() = default;
    AWS_APPSTREAM_API ApplicationSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ApplicationSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their streaming sessions.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ApplicationSettingsResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline const Aws::String& GetSettingsGroup() const { return m_settingsGroup; }
    inline bool SettingsGroupHasBeenSet() const { return m_settingsGroupHasBeenSet; }
    template<typename SettingsGroupT = Aws::String>
    void SetSettingsGroup(SettingsGroupT&& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = std::forward<SettingsGroupT>(value); }
    template<typename SettingsGroupT = Aws::String>
    ApplicationSettingsResponse& WithSettingsGroup(SettingsGroupT&& value) { SetSettingsGroup(std::forward<SettingsGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an AWS Region, an S3 bucket is created. The bucket is unique to the AWS account
     * and the Region. </p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    ApplicationSettingsResponse& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_settingsGroup;
    bool m_settingsGroupHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
