/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/CodeArtifacts.h>
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
   * <p>Specifies the name of an S3 bucket and a <code>CodeArtifacts</code> object
   * that contains the S3 object keys for a source code .zip file and for a build
   * artifacts .zip file that contains .jar or .class files.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/S3RepositoryDetails">AWS
   * API Reference</a></p>
   */
  class S3RepositoryDetails
  {
  public:
    AWS_CODEGURUREVIEWER_API S3RepositoryDetails();
    AWS_CODEGURUREVIEWER_API S3RepositoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API S3RepositoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline S3RepositoryDetails& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline S3RepositoryDetails& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline S3RepositoryDetails& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline const CodeArtifacts& GetCodeArtifacts() const{ return m_codeArtifacts; }

    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline bool CodeArtifactsHasBeenSet() const { return m_codeArtifactsHasBeenSet; }

    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline void SetCodeArtifacts(const CodeArtifacts& value) { m_codeArtifactsHasBeenSet = true; m_codeArtifacts = value; }

    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline void SetCodeArtifacts(CodeArtifacts&& value) { m_codeArtifactsHasBeenSet = true; m_codeArtifacts = std::move(value); }

    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline S3RepositoryDetails& WithCodeArtifacts(const CodeArtifacts& value) { SetCodeArtifacts(value); return *this;}

    /**
     * <p>A <code>CodeArtifacts</code> object. The <code>CodeArtifacts</code> object
     * includes the S3 object key for a source code .zip file and for a build artifacts
     * .zip file that contains .jar or .class files.</p>
     */
    inline S3RepositoryDetails& WithCodeArtifacts(CodeArtifacts&& value) { SetCodeArtifacts(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    CodeArtifacts m_codeArtifacts;
    bool m_codeArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
