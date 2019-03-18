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
#include <aws/macie/model/ClassificationTypeUpdate.h>
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
   * <p>The S3 resources whose classification types you want to update. This data
   * type is used as a request parameter in the UpdateS3Resources action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/S3ResourceClassificationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE_API S3ResourceClassificationUpdate
  {
  public:
    S3ResourceClassificationUpdate();
    S3ResourceClassificationUpdate(Aws::Utils::Json::JsonView jsonValue);
    S3ResourceClassificationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket whose classification types you want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the S3 bucket whose classification types you want to
     * update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline const ClassificationTypeUpdate& GetClassificationTypeUpdate() const{ return m_classificationTypeUpdate; }

    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline bool ClassificationTypeUpdateHasBeenSet() const { return m_classificationTypeUpdateHasBeenSet; }

    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline void SetClassificationTypeUpdate(const ClassificationTypeUpdate& value) { m_classificationTypeUpdateHasBeenSet = true; m_classificationTypeUpdate = value; }

    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline void SetClassificationTypeUpdate(ClassificationTypeUpdate&& value) { m_classificationTypeUpdateHasBeenSet = true; m_classificationTypeUpdate = std::move(value); }

    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline S3ResourceClassificationUpdate& WithClassificationTypeUpdate(const ClassificationTypeUpdate& value) { SetClassificationTypeUpdate(value); return *this;}

    /**
     * <p>The classification type that you want to update for the resource associated
     * with Amazon Macie. </p>
     */
    inline S3ResourceClassificationUpdate& WithClassificationTypeUpdate(ClassificationTypeUpdate&& value) { SetClassificationTypeUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    ClassificationTypeUpdate m_classificationTypeUpdate;
    bool m_classificationTypeUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
