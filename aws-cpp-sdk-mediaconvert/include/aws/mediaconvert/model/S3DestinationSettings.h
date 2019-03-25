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
#include <aws/mediaconvert/model/S3EncryptionSettings.h>
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
   * Settings associated with S3 destination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/S3DestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API S3DestinationSettings
  {
  public:
    S3DestinationSettings();
    S3DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    S3DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline const S3EncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline void SetEncryption(const S3EncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline void SetEncryption(S3EncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline S3DestinationSettings& WithEncryption(const S3EncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline S3DestinationSettings& WithEncryption(S3EncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    S3EncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
