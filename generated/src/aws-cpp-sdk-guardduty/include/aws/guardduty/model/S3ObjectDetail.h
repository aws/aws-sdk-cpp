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
    AWS_GUARDDUTY_API S3ObjectDetail() = default;
    AWS_GUARDDUTY_API S3ObjectDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API S3ObjectDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the S3 object.</p>
     */
    inline const Aws::String& GetObjectArn() const { return m_objectArn; }
    inline bool ObjectArnHasBeenSet() const { return m_objectArnHasBeenSet; }
    template<typename ObjectArnT = Aws::String>
    void SetObjectArn(ObjectArnT&& value) { m_objectArnHasBeenSet = true; m_objectArn = std::forward<ObjectArnT>(value); }
    template<typename ObjectArnT = Aws::String>
    S3ObjectDetail& WithObjectArn(ObjectArnT&& value) { SetObjectArn(std::forward<ObjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the S3 object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3ObjectDetail& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag is a hash of the S3 object. The ETag reflects changes only to
     * the contents of an object, and not its metadata.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    S3ObjectDetail& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hash of the threat detected in this finding.</p>
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    S3ObjectDetail& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID of the object.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    S3ObjectDetail& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
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
