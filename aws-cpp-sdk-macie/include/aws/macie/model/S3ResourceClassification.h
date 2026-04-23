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
   * <p>The S3 resources that you want to associate with Amazon Macie for monitoring
   * and data classification. This data type is used as a request parameter in the
   * AssociateS3Resources action and a response parameter in the ListS3Resources
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/S3ResourceClassification">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE_API S3ResourceClassification
  {
  public:
    S3ResourceClassification();
    S3ResourceClassification(Aws::Utils::Json::JsonView jsonValue);
    S3ResourceClassification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the S3 bucket that you want to associate with Amazon Macie.</p>
     */
    inline S3ResourceClassification& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline const ClassificationType& GetClassificationType() const{ return m_classificationType; }

    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline bool ClassificationTypeHasBeenSet() const { return m_classificationTypeHasBeenSet; }

    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline void SetClassificationType(const ClassificationType& value) { m_classificationTypeHasBeenSet = true; m_classificationType = value; }

    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline void SetClassificationType(ClassificationType&& value) { m_classificationTypeHasBeenSet = true; m_classificationType = std::move(value); }

    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline S3ResourceClassification& WithClassificationType(const ClassificationType& value) { SetClassificationType(value); return *this;}

    /**
     * <p>The classification type that you want to specify for the resource associated
     * with Amazon Macie. </p>
     */
    inline S3ResourceClassification& WithClassificationType(ClassificationType&& value) { SetClassificationType(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    ClassificationType m_classificationType;
    bool m_classificationTypeHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
