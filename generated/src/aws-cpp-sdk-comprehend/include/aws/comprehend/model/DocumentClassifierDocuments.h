/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The location of the training documents. This parameter is required in a
   * request to create a semi-structured document classification model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierDocuments">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierDocuments
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierDocuments();
    AWS_COMPREHEND_API DocumentClassifierDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline DocumentClassifierDocuments& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline DocumentClassifierDocuments& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI location of the training documents specified in the S3Uri CSV
     * file.</p>
     */
    inline DocumentClassifierDocuments& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline const Aws::String& GetTestS3Uri() const{ return m_testS3Uri; }

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline void SetTestS3Uri(const Aws::String& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = value; }

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline void SetTestS3Uri(Aws::String&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::move(value); }

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline void SetTestS3Uri(const char* value) { m_testS3UriHasBeenSet = true; m_testS3Uri.assign(value); }

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline DocumentClassifierDocuments& WithTestS3Uri(const Aws::String& value) { SetTestS3Uri(value); return *this;}

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline DocumentClassifierDocuments& WithTestS3Uri(Aws::String&& value) { SetTestS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI location of the test documents included in the TestS3Uri CSV file.
     * This field is not required if you do not specify a test CSV file.</p>
     */
    inline DocumentClassifierDocuments& WithTestS3Uri(const char* value) { SetTestS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
