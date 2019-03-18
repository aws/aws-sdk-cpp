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
  class AWS_CODEDEPLOY_API S3Location
  {
  public:
    S3Location();
    S3Location(Aws::Utils::Json::JsonView jsonValue);
    S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the application revision is
     * stored.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline const BundleType& GetBundleType() const{ return m_bundleType; }

    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline bool BundleTypeHasBeenSet() const { return m_bundleTypeHasBeenSet; }

    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline void SetBundleType(const BundleType& value) { m_bundleTypeHasBeenSet = true; m_bundleType = value; }

    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline void SetBundleType(BundleType&& value) { m_bundleTypeHasBeenSet = true; m_bundleType = std::move(value); }

    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline S3Location& WithBundleType(const BundleType& value) { SetBundleType(value); return *this;}

    /**
     * <p>The file type of the application revision. Must be one of the following:</p>
     * <ul> <li> <p>tar: A tar archive file.</p> </li> <li> <p>tgz: A compressed tar
     * archive file.</p> </li> <li> <p>zip: A zip archive file.</p> </li> </ul>
     */
    inline S3Location& WithBundleType(BundleType&& value) { SetBundleType(std::move(value)); return *this;}


    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline S3Location& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline S3Location& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A specific version of the Amazon S3 object that represents the bundled
     * artifacts for the application revision.</p> <p>If the version is not specified,
     * the system uses the most recent version by default.</p>
     */
    inline S3Location& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline S3Location& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline S3Location& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag of the Amazon S3 object that represents the bundled artifacts for
     * the application revision.</p> <p>If the ETag is not specified as an input
     * parameter, ETag validation of the object is skipped.</p>
     */
    inline S3Location& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    BundleType m_bundleType;
    bool m_bundleTypeHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
