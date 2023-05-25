/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie/model/ClassificationType.h>
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
namespace Macie
{
namespace Model
{

  /**
   * <p>(Discontinued) The S3 resources that you want to associate with Amazon Macie
   * Classic for monitoring and data classification. This data type is used as a
   * request parameter in the <code>AssociateS3Resources</code> action and a response
   * parameter in the <code>ListS3Resources</code> action. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/S3ResourceClassification">AWS
   * API Reference</a></p>
   */
  class S3ResourceClassification
  {
  public:
    AWS_MACIE_API S3ResourceClassification();
    AWS_MACIE_API S3ResourceClassification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API S3ResourceClassification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket that you want to associate with
     * Amazon Macie Classic.</p>
     */
    inline S3ResourceClassification& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline const ClassificationType& GetClassificationType() const{ return m_classificationType; }

    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline bool ClassificationTypeHasBeenSet() const { return m_classificationTypeHasBeenSet; }

    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline void SetClassificationType(const ClassificationType& value) { m_classificationTypeHasBeenSet = true; m_classificationType = value; }

    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline void SetClassificationType(ClassificationType&& value) { m_classificationTypeHasBeenSet = true; m_classificationType = std::move(value); }

    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline S3ResourceClassification& WithClassificationType(const ClassificationType& value) { SetClassificationType(value); return *this;}

    /**
     * <p>(Discontinued) The classification type that you want to specify for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline S3ResourceClassification& WithClassificationType(ClassificationType&& value) { SetClassificationType(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    ClassificationType m_classificationType;
    bool m_classificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
