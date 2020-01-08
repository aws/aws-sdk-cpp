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
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The input configuration properties for requesting a batch translation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API InputDataConfig
  {
  public:
    InputDataConfig();
    InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI of the AWS S3 folder that contains the input file. The folder must be
     * in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline InputDataConfig& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline InputDataConfig& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the input files.
     * Valid values are <code>text/plain</code> for plaintext files and
     * <code>text/html</code> for HTML files.</p>
     */
    inline InputDataConfig& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
