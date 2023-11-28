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
   * <p>The identifier for the S3 resource.</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    
    inline S3Identifier& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    
    inline S3Identifier& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    
    inline S3Identifier& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    
    inline const Aws::String& GetS3ObjectKey() const{ return m_s3ObjectKey; }

    
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }

    
    inline void SetS3ObjectKey(const Aws::String& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = value; }

    
    inline void SetS3ObjectKey(Aws::String&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::move(value); }

    
    inline void SetS3ObjectKey(const char* value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey.assign(value); }

    
    inline S3Identifier& WithS3ObjectKey(const Aws::String& value) { SetS3ObjectKey(value); return *this;}

    
    inline S3Identifier& WithS3ObjectKey(Aws::String&& value) { SetS3ObjectKey(std::move(value)); return *this;}

    
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
