/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Specifies the details for the Amazon S3 file location that is being used with
   * Amazon Web Services B2BI Data Interchange. File locations in Amazon S3 are
   * identified using a combination of the bucket and key.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_B2BI_API S3Location();
    AWS_B2BI_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline S3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline S3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket.</p>
     */
    inline S3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 key for the file location.</p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
