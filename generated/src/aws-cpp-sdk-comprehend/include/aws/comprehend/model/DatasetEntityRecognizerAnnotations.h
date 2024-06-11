﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetEntityRecognizerAnnotations">AWS
   * API Reference</a></p>
   */
  class DatasetEntityRecognizerAnnotations
  {
  public:
    AWS_COMPREHEND_API DatasetEntityRecognizerAnnotations();
    AWS_COMPREHEND_API DatasetEntityRecognizerAnnotations(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetEntityRecognizerAnnotations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same Region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline DatasetEntityRecognizerAnnotations& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline DatasetEntityRecognizerAnnotations& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline DatasetEntityRecognizerAnnotations& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
