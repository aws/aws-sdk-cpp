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
  class AWS_COMPREHEND_API EntityRecognizerAnnotations
  {
  public:
    EntityRecognizerAnnotations();
    EntityRecognizerAnnotations(Aws::Utils::Json::JsonView jsonValue);
    EntityRecognizerAnnotations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
