/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the details for the file location for the file being used in the
   * workflow. Only applicable if you are using S3 storage.</p> <p> You need to
   * provide the bucket and key. The key can represent either a path or a file. This
   * is determined by whether or not you end the key value with the forward slash (/)
   * character. If the final character is "/", then your file is copied to the
   * folder, and its name does not change. If, rather, the final character is
   * alphanumeric, your uploaded file is renamed to the path value. In this case, if
   * a file with that name already exists, it is overwritten. </p> <p>For example, if
   * your path is <code>shared-files/bob/</code>, your uploaded files are copied to
   * the <code>shared-files/bob/</code>, folder. If your path is
   * <code>shared-files/today</code>, each uploaded file is copied to the
   * <code>shared-files</code> folder and named <code>today</code>: each upload
   * overwrites the previous version of the <i>bob</i> file.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/S3FileLocation">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API S3FileLocation
  {
  public:
    S3FileLocation();
    S3FileLocation(Aws::Utils::Json::JsonView jsonValue);
    S3FileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline S3FileLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline S3FileLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the S3 bucket that contains the file being used.</p>
     */
    inline S3FileLocation& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3FileLocation& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3FileLocation& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the file when it was created in S3. You use the object
     * key to retrieve the object.</p>
     */
    inline S3FileLocation& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Specifies the file version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Specifies the file version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>Specifies the file version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Specifies the file version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>Specifies the file version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>Specifies the file version.</p>
     */
    inline S3FileLocation& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Specifies the file version.</p>
     */
    inline S3FileLocation& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Specifies the file version.</p>
     */
    inline S3FileLocation& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline const Aws::String& GetEtag() const{ return m_etag; }

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetEtag(const Aws::String& value) { m_etagHasBeenSet = true; m_etag = value; }

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetEtag(Aws::String&& value) { m_etagHasBeenSet = true; m_etag = std::move(value); }

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetEtag(const char* value) { m_etagHasBeenSet = true; m_etag.assign(value); }

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline S3FileLocation& WithEtag(const Aws::String& value) { SetEtag(value); return *this;}

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline S3FileLocation& WithEtag(Aws::String&& value) { SetEtag(std::move(value)); return *this;}

    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata.</p>
     */
    inline S3FileLocation& WithEtag(const char* value) { SetEtag(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::String m_etag;
    bool m_etagHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
