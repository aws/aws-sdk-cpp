/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon S3 location of the input data objects.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobS3DataSource">AWS
   * API Reference</a></p>
   */
  class LabelingJobS3DataSource
  {
  public:
    AWS_SAGEMAKER_API LabelingJobS3DataSource();
    AWS_SAGEMAKER_API LabelingJobS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline const Aws::String& GetManifestS3Uri() const{ return m_manifestS3Uri; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline bool ManifestS3UriHasBeenSet() const { return m_manifestS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline void SetManifestS3Uri(const Aws::String& value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri = value; }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline void SetManifestS3Uri(Aws::String&& value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline void SetManifestS3Uri(const char* value) { m_manifestS3UriHasBeenSet = true; m_manifestS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(const Aws::String& value) { SetManifestS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(Aws::String&& value) { SetManifestS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the manifest file that describes the input data
     * objects. </p> <p>The input manifest file referenced in
     * <code>ManifestS3Uri</code> must contain one of the following keys:
     * <code>source-ref</code> or <code>source</code>. The value of the keys are
     * interpreted as follows:</p> <ul> <li> <p> <code>source-ref</code>: The source of
     * the object is the Amazon S3 object specified in the value. Use this value when
     * the object is a binary object, such as an image.</p> </li> <li> <p>
     * <code>source</code>: The source of the object is the value. Use this value when
     * the object is a text value.</p> </li> </ul> <p>If you are a new user of Ground
     * Truth, it is recommended you review <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-input-data-input-manifest.html">Use
     * an Input Manifest File </a> in the Amazon SageMaker Developer Guide to learn how
     * to create an input manifest file.</p>
     */
    inline LabelingJobS3DataSource& WithManifestS3Uri(const char* value) { SetManifestS3Uri(value); return *this;}

  private:

    Aws::String m_manifestS3Uri;
    bool m_manifestS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
