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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/ImageFormat.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The image format of an AWS Signer platform or profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningImageFormat">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningImageFormat
  {
  public:
    SigningImageFormat();
    SigningImageFormat(Aws::Utils::Json::JsonView jsonValue);
    SigningImageFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline const Aws::Vector<ImageFormat>& GetSupportedFormats() const{ return m_supportedFormats; }

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline bool SupportedFormatsHasBeenSet() const { return m_supportedFormatsHasBeenSet; }

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline void SetSupportedFormats(const Aws::Vector<ImageFormat>& value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats = value; }

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline void SetSupportedFormats(Aws::Vector<ImageFormat>&& value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats = std::move(value); }

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& WithSupportedFormats(const Aws::Vector<ImageFormat>& value) { SetSupportedFormats(value); return *this;}

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& WithSupportedFormats(Aws::Vector<ImageFormat>&& value) { SetSupportedFormats(std::move(value)); return *this;}

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& AddSupportedFormats(const ImageFormat& value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats.push_back(value); return *this; }

    /**
     * <p>The supported formats of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& AddSupportedFormats(ImageFormat&& value) { m_supportedFormatsHasBeenSet = true; m_supportedFormats.push_back(std::move(value)); return *this; }


    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline const ImageFormat& GetDefaultFormat() const{ return m_defaultFormat; }

    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline bool DefaultFormatHasBeenSet() const { return m_defaultFormatHasBeenSet; }

    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline void SetDefaultFormat(const ImageFormat& value) { m_defaultFormatHasBeenSet = true; m_defaultFormat = value; }

    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline void SetDefaultFormat(ImageFormat&& value) { m_defaultFormatHasBeenSet = true; m_defaultFormat = std::move(value); }

    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& WithDefaultFormat(const ImageFormat& value) { SetDefaultFormat(value); return *this;}

    /**
     * <p>The default format of an AWS Signer signing image.</p>
     */
    inline SigningImageFormat& WithDefaultFormat(ImageFormat&& value) { SetDefaultFormat(std::move(value)); return *this;}

  private:

    Aws::Vector<ImageFormat> m_supportedFormats;
    bool m_supportedFormatsHasBeenSet;

    ImageFormat m_defaultFormat;
    bool m_defaultFormatHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
