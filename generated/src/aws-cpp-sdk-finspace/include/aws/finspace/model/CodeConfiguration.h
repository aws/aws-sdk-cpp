/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure of the customer code available within the running
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CodeConfiguration">AWS
   * API Reference</a></p>
   */
  class CodeConfiguration
  {
  public:
    AWS_FINSPACE_API CodeConfiguration() = default;
    AWS_FINSPACE_API CodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API CodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    CodeConfiguration& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    CodeConfiguration& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of an S3 object.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const { return m_s3ObjectVersion; }
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
    template<typename S3ObjectVersionT = Aws::String>
    void SetS3ObjectVersion(S3ObjectVersionT&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::forward<S3ObjectVersionT>(value); }
    template<typename S3ObjectVersionT = Aws::String>
    CodeConfiguration& WithS3ObjectVersion(S3ObjectVersionT&& value) { SetS3ObjectVersion(std::forward<S3ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
