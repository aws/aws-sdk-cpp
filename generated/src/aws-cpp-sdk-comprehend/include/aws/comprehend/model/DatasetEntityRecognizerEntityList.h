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
   * <p>Describes the dataset entity list for an entity recognizer model.</p> <p>For
   * more information on how the input file is formatted, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/prep-training-data-cer.html">Preparing
   * training data</a> in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetEntityRecognizerEntityList">AWS
   * API Reference</a></p>
   */
  class DatasetEntityRecognizerEntityList
  {
  public:
    AWS_COMPREHEND_API DatasetEntityRecognizerEntityList();
    AWS_COMPREHEND_API DatasetEntityRecognizerEntityList(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetEntityRecognizerEntityList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline DatasetEntityRecognizerEntityList& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline DatasetEntityRecognizerEntityList& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 location where the entity list is located.</p>
     */
    inline DatasetEntityRecognizerEntityList& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
