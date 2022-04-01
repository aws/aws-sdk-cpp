﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/S3Object.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The Amazon S3 bucket that contains the document to be processed. It's used by
   * asynchronous operations such as <a>StartDocumentTextDetection</a>.</p> <p>The
   * input document can be an image file in JPEG or PNG format. It can also be a file
   * in PDF format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DocumentLocation">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API DocumentLocation
  {
  public:
    DocumentLocation();
    DocumentLocation(Aws::Utils::Json::JsonView jsonValue);
    DocumentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline DocumentLocation& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the input document.</p>
     */
    inline DocumentLocation& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
