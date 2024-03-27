/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about the S3 object containing the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/S3Identifier">AWS
   * API Reference</a></p>
   */
  class S3Identifier
  {
  public:
    AWS_BEDROCKAGENT_API S3Identifier();
    AWS_BEDROCKAGENT_API S3Identifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API S3Identifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Identifier& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Identifier& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Identifier& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline const Aws::String& GetS3ObjectKey() const{ return m_s3ObjectKey; }

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline void SetS3ObjectKey(const Aws::String& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = value; }

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline void SetS3ObjectKey(Aws::String&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::move(value); }

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline void SetS3ObjectKey(const char* value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey.assign(value); }

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline S3Identifier& WithS3ObjectKey(const Aws::String& value) { SetS3ObjectKey(value); return *this;}

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline S3Identifier& WithS3ObjectKey(Aws::String&& value) { SetS3ObjectKey(std::move(value)); return *this;}

    /**
     * <p>The S3 object key containing the resource.</p>
     */
    inline S3Identifier& WithS3ObjectKey(const char* value) { SetS3ObjectKey(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
