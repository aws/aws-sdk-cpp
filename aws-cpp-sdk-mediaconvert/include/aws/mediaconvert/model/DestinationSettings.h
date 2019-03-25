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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3DestinationSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings associated with the destination. Will vary based on the type of
   * destination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DestinationSettings
  {
  public:
    DestinationSettings();
    DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings associated with S3 destination
     */
    inline const S3DestinationSettings& GetS3Settings() const{ return m_s3Settings; }

    /**
     * Settings associated with S3 destination
     */
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }

    /**
     * Settings associated with S3 destination
     */
    inline void SetS3Settings(const S3DestinationSettings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }

    /**
     * Settings associated with S3 destination
     */
    inline void SetS3Settings(S3DestinationSettings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }

    /**
     * Settings associated with S3 destination
     */
    inline DestinationSettings& WithS3Settings(const S3DestinationSettings& value) { SetS3Settings(value); return *this;}

    /**
     * Settings associated with S3 destination
     */
    inline DestinationSettings& WithS3Settings(S3DestinationSettings&& value) { SetS3Settings(std::move(value)); return *this;}

  private:

    S3DestinationSettings m_s3Settings;
    bool m_s3SettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
