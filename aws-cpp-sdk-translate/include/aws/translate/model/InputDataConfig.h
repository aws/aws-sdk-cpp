/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InputDataConfig
  {
  public:
    AWS_TRANSLATE_API InputDataConfig();
    AWS_TRANSLATE_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI of the AWS S3 folder that contains the input files. Amazon Translate
     * translates all the files in the folder and all its sub-folders. The folder must
     * be in the same Region as the API endpoint you are calling.</p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline InputDataConfig& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline InputDataConfig& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Describes the format of the data that you submit to Amazon Translate as
     * input. You can specify one of the following multipurpose internet mail extension
     * (MIME) types:</p> <ul> <li> <p> <code>text/html</code>: The input data consists
     * of one or more HTML files. Amazon Translate translates only the text that
     * resides in the <code>html</code> element in each file.</p> </li> <li> <p>
     * <code>text/plain</code>: The input data consists of one or more unformatted text
     * files. Amazon Translate translates every character in this type of input.</p>
     * </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>:
     * The input data consists of one or more Word documents (.docx).</p> </li> <li>
     * <p>
     * <code>application/vnd.openxmlformats-officedocument.presentationml.presentation</code>:
     * The input data consists of one or more PowerPoint Presentation files
     * (.pptx).</p> </li> <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.spreadsheetml.sheet</code>:
     * The input data consists of one or more Excel Workbook files (.xlsx).</p> </li>
     * <li> <p> <code>application/x-xliff+xml</code>: The input data consists of one or
     * more XML Localization Interchange File Format (XLIFF) files (.xlf). Amazon
     * Translate supports only XLIFF version 1.2.</p> </li> </ul>  <p>If you
     * structure your input data as HTML, ensure that you set this parameter to
     * <code>text/html</code>. By doing so, you cut costs by limiting the translation
     * to the contents of the <code>html</code> element in each file. Otherwise, if you
     * set this parameter to <code>text/plain</code>, your costs will cover the
     * translation of every character.</p> 
     */
    inline InputDataConfig& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
