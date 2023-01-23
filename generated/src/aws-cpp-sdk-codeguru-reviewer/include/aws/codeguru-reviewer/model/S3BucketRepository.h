/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/S3RepositoryDetails.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about an associated repository in an S3 bucket. The associated
   * repository contains a source code .zip file and a build artifacts .zip file that
   * contains .jar or .class files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/S3BucketRepository">AWS
   * API Reference</a></p>
   */
  class S3BucketRepository
  {
  public:
    AWS_CODEGURUREVIEWER_API S3BucketRepository();
    AWS_CODEGURUREVIEWER_API S3BucketRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API S3BucketRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline S3BucketRepository& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline S3BucketRepository& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository when the <code>ProviderType</code> is
     * <code>S3Bucket</code>.</p>
     */
    inline S3BucketRepository& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline const S3RepositoryDetails& GetDetails() const{ return m_details; }

    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline void SetDetails(const S3RepositoryDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline void SetDetails(S3RepositoryDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline S3BucketRepository& WithDetails(const S3RepositoryDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>An <code>S3RepositoryDetails</code> object that specifies the name of an S3
     * bucket and a <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code>
     * object includes the S3 object keys for a source code .zip file and for a build
     * artifacts .zip file.</p>
     */
    inline S3BucketRepository& WithDetails(S3RepositoryDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3RepositoryDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
