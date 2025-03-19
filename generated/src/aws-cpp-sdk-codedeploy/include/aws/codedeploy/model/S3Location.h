/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/BundleType.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the location of application artifacts stored in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_CODEDEPLOY_API S3Location() = default;
    AWS_CODEDEPLOY_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Location& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3Location& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p> <code>tar</code>: A tar archive file.</p> </li> <li> <p>
     * <code>tgz</code>: A compressed tar archive file.</p> </li> <li> <p>
     * <code>zip</code>: A zip archive file.</p> </li> <li> <p> <code>YAML</code>: A
     * YAML-formatted file.</p> </li> <li> <p> <code>JSON</code>: A JSON-formatted
     * file.</p> </li> </ul>
     */
    inline BundleType GetBundleType() const { return m_bundleType; }
    inline bool BundleTypeHasBeenSet() const { return m_bundleTypeHasBeenSet; }
    inline void SetBundleType(BundleType value) { m_bundleTypeHasBeenSet = true; m_bundleType = value; }
    inline S3Location& WithBundleType(BundleType value) { SetBundleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    S3Location& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    S3Location& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    BundleType m_bundleType{BundleType::NOT_SET};
    bool m_bundleTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
