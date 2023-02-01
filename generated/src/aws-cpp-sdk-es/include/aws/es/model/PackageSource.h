/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The S3 location for importing the package specified as
   * <code>S3BucketName</code> and <code>S3Key</code></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PackageSource">AWS
   * API Reference</a></p>
   */
  class PackageSource
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API PackageSource();
    AWS_ELASTICSEARCHSERVICE_API PackageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API PackageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline PackageSource& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline PackageSource& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the bucket containing the package.</p>
     */
    inline PackageSource& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>Key (file name) of the package.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline PackageSource& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline PackageSource& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>Key (file name) of the package.</p>
     */
    inline PackageSource& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
