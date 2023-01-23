/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>(Discontinued) The S3 resources whose classification types you want to
   * update. This data type is used as a request parameter in the
   * <code>UpdateS3Resources</code> action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/S3ResourceClassificationUpdate">AWS
   * API Reference</a></p>
   */
  class S3ResourceClassificationUpdate
  {
  public:
    AWS_MACIE_API S3ResourceClassificationUpdate();
    AWS_MACIE_API S3ResourceClassificationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API S3ResourceClassificationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket whose classification types you want
     * to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket whose classification types you
     * want to update.</p>
     */
    inline S3ResourceClassificationUpdate& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline const ClassificationTypeUpdate& GetClassificationTypeUpdate() const{ return m_classificationTypeUpdate; }

    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline bool ClassificationTypeUpdateHasBeenSet() const { return m_classificationTypeUpdateHasBeenSet; }

    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline void SetClassificationTypeUpdate(const ClassificationTypeUpdate& value) { m_classificationTypeUpdateHasBeenSet = true; m_classificationTypeUpdate = value; }

    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline void SetClassificationTypeUpdate(ClassificationTypeUpdate&& value) { m_classificationTypeUpdateHasBeenSet = true; m_classificationTypeUpdate = std::move(value); }

    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline S3ResourceClassificationUpdate& WithClassificationTypeUpdate(const ClassificationTypeUpdate& value) { SetClassificationTypeUpdate(value); return *this;}

    /**
     * <p>(Discontinued) The classification type that you want to update for the
     * resource associated with Amazon Macie Classic. </p>
     */
    inline S3ResourceClassificationUpdate& WithClassificationTypeUpdate(ClassificationTypeUpdate&& value) { SetClassificationTypeUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    ClassificationTypeUpdate m_classificationTypeUpdate;
    bool m_classificationTypeUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
