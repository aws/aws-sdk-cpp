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
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource() = default;
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowOutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const { return m_outputS3Path; }
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }
    template<typename OutputS3PathT = Aws::String>
    void SetOutputS3Path(OutputS3PathT&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::forward<OutputS3PathT>(value); }
    template<typename OutputS3PathT = Aws::String>
    IdMappingWorkflowOutputSource& WithOutputS3Path(OutputS3PathT&& value) { SetOutputS3Path(std::forward<OutputS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline const Aws::String& GetKMSArn() const { return m_kMSArn; }
    inline bool KMSArnHasBeenSet() const { return m_kMSArnHasBeenSet; }
    template<typename KMSArnT = Aws::String>
    void SetKMSArn(KMSArnT&& value) { m_kMSArnHasBeenSet = true; m_kMSArn = std::forward<KMSArnT>(value); }
    template<typename KMSArnT = Aws::String>
    IdMappingWorkflowOutputSource& WithKMSArn(KMSArnT&& value) { SetKMSArn(std::forward<KMSArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
