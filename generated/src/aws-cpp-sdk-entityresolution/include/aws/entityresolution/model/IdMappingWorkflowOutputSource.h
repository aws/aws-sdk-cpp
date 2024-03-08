/**
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
   * <p>The output source for the ID mapping workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingWorkflowOutputSource">AWS
   * API Reference</a></p>
   */
  class IdMappingWorkflowOutputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource();
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline const Aws::String& GetKMSArn() const{ return m_kMSArn; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline bool KMSArnHasBeenSet() const { return m_kMSArnHasBeenSet; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(const Aws::String& value) { m_kMSArnHasBeenSet = true; m_kMSArn = value; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(Aws::String&& value) { m_kMSArnHasBeenSet = true; m_kMSArn = std::move(value); }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(const char* value) { m_kMSArnHasBeenSet = true; m_kMSArn.assign(value); }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline IdMappingWorkflowOutputSource& WithKMSArn(const Aws::String& value) { SetKMSArn(value); return *this;}

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline IdMappingWorkflowOutputSource& WithKMSArn(Aws::String&& value) { SetKMSArn(std::move(value)); return *this;}

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline IdMappingWorkflowOutputSource& WithKMSArn(const char* value) { SetKMSArn(value); return *this;}


    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const{ return m_outputS3Path; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(const Aws::String& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = value; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(Aws::String&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::move(value); }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(const char* value) { m_outputS3PathHasBeenSet = true; m_outputS3Path.assign(value); }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline IdMappingWorkflowOutputSource& WithOutputS3Path(const Aws::String& value) { SetOutputS3Path(value); return *this;}

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline IdMappingWorkflowOutputSource& WithOutputS3Path(Aws::String&& value) { SetOutputS3Path(std::move(value)); return *this;}

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline IdMappingWorkflowOutputSource& WithOutputS3Path(const char* value) { SetOutputS3Path(value); return *this;}

  private:

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
