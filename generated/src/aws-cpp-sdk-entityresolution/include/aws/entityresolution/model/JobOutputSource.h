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
   * <p>An object containing <code>KMSArn</code>, <code>outputS3Path</code>, and
   * <code>roleArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/JobOutputSource">AWS
   * API Reference</a></p>
   */
  class JobOutputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API JobOutputSource() = default;
    AWS_ENTITYRESOLUTION_API JobOutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API JobOutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access Amazon Web Services resources on your behalf as part of
     * workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    JobOutputSource& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const { return m_outputS3Path; }
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }
    template<typename OutputS3PathT = Aws::String>
    void SetOutputS3Path(OutputS3PathT&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::forward<OutputS3PathT>(value); }
    template<typename OutputS3PathT = Aws::String>
    JobOutputSource& WithOutputS3Path(OutputS3PathT&& value) { SetOutputS3Path(std::forward<OutputS3PathT>(value)); return *this;}
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
    JobOutputSource& WithKMSArn(KMSArnT&& value) { SetKMSArn(std::forward<KMSArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
