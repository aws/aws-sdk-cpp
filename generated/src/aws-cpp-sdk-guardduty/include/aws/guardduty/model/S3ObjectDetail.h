/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the S3 object that was scanned</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3ObjectDetail">AWS
   * API Reference</a></p>
   */
  class S3ObjectDetail
  {
  public:
    AWS_GUARDDUTY_API S3ObjectDetail();
    AWS_GUARDDUTY_API S3ObjectDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3ObjectDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the S3 object.</p>
     */
    inline const Aws::String& GetObjectArn() const{ return m_objectArn; }
    inline bool ObjectArnHasBeenSet() const { return m_objectArnHasBeenSet; }
    inline void SetObjectArn(const Aws::String& value) { m_objectArnHasBeenSet = true; m_objectArn = value; }
    inline void SetObjectArn(Aws::String&& value) { m_objectArnHasBeenSet = true; m_objectArn = std::move(value); }
    inline void SetObjectArn(const char* value) { m_objectArnHasBeenSet = true; m_objectArn.assign(value); }
    inline S3ObjectDetail& WithObjectArn(const Aws::String& value) { SetObjectArn(value); return *this;}
    inline S3ObjectDetail& WithObjectArn(Aws::String&& value) { SetObjectArn(std::move(value)); return *this;}
    inline S3ObjectDetail& WithObjectArn(const char* value) { SetObjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the S3 object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline S3ObjectDetail& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline S3ObjectDetail& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline S3ObjectDetail& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag is a hash of the S3 object. The ETag reflects changes only to
     * the contents of an object, and not its metadata.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline S3ObjectDetail& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline S3ObjectDetail& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline S3ObjectDetail& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hash of the threat detected in this finding.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }
    inline S3ObjectDetail& WithHash(const Aws::String& value) { SetHash(value); return *this;}
    inline S3ObjectDetail& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}
    inline S3ObjectDetail& WithHash(const char* value) { SetHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID of the object.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline S3ObjectDetail& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline S3ObjectDetail& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline S3ObjectDetail& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_objectArn;
    bool m_objectArnHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
