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
   * <p>Describes the annotations associated with a entity recognizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerAnnotations">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerAnnotations
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerAnnotations();
    AWS_COMPREHEND_API EntityRecognizerAnnotations(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerAnnotations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetTestS3Uri() const{ return m_testS3Uri; }

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetTestS3Uri(const Aws::String& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = value; }

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetTestS3Uri(Aws::String&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetTestS3Uri(const char* value) { m_testS3UriHasBeenSet = true; m_testS3Uri.assign(value); }

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithTestS3Uri(const Aws::String& value) { SetTestS3Uri(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithTestS3Uri(Aws::String&& value) { SetTestS3Uri(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the test annotations for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerAnnotations& WithTestS3Uri(const char* value) { SetTestS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
