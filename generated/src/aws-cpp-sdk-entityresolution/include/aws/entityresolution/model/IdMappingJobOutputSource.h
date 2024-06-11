﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing <code>KMSArn</code>, <code>OutputS3Path</code>, and
   * <code>RoleARN</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingJobOutputSource">AWS
   * API Reference</a></p>
   */
  class IdMappingJobOutputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingJobOutputSource();
    AWS_ENTITYRESOLUTION_API IdMappingJobOutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingJobOutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline const Aws::String& GetKMSArn() const{ return m_kMSArn; }
    inline bool KMSArnHasBeenSet() const { return m_kMSArnHasBeenSet; }
    inline void SetKMSArn(const Aws::String& value) { m_kMSArnHasBeenSet = true; m_kMSArn = value; }
    inline void SetKMSArn(Aws::String&& value) { m_kMSArnHasBeenSet = true; m_kMSArn = std::move(value); }
    inline void SetKMSArn(const char* value) { m_kMSArnHasBeenSet = true; m_kMSArn.assign(value); }
    inline IdMappingJobOutputSource& WithKMSArn(const Aws::String& value) { SetKMSArn(value); return *this;}
    inline IdMappingJobOutputSource& WithKMSArn(Aws::String&& value) { SetKMSArn(std::move(value)); return *this;}
    inline IdMappingJobOutputSource& WithKMSArn(const char* value) { SetKMSArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const{ return m_outputS3Path; }
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }
    inline void SetOutputS3Path(const Aws::String& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = value; }
    inline void SetOutputS3Path(Aws::String&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::move(value); }
    inline void SetOutputS3Path(const char* value) { m_outputS3PathHasBeenSet = true; m_outputS3Path.assign(value); }
    inline IdMappingJobOutputSource& WithOutputS3Path(const Aws::String& value) { SetOutputS3Path(value); return *this;}
    inline IdMappingJobOutputSource& WithOutputS3Path(Aws::String&& value) { SetOutputS3Path(std::move(value)); return *this;}
    inline IdMappingJobOutputSource& WithOutputS3Path(const char* value) { SetOutputS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access Amazon Web Services resources on your behalf as part of
     * workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline IdMappingJobOutputSource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline IdMappingJobOutputSource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline IdMappingJobOutputSource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
