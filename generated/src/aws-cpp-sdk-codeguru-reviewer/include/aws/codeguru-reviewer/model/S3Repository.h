/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about a repository in an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/S3Repository">AWS
   * API Reference</a></p>
   */
  class S3Repository
  {
  public:
    AWS_CODEGURUREVIEWER_API S3Repository();
    AWS_CODEGURUREVIEWER_API S3Repository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API S3Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline S3Repository& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline S3Repository& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository in the S3 bucket.</p>
     */
    inline S3Repository& WithName(const char* value) { SetName(value); return *this;}


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
    inline S3Repository& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline S3Repository& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket used for associating a new S3 repository. It must
     * begin with <code>codeguru-reviewer-</code>. </p>
     */
    inline S3Repository& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
