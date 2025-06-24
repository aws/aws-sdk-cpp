/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
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
namespace AIOps
{
namespace Model
{

  /**
   * <p>This structure contains information about the cross-account configuration in
   * the account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/CrossAccountConfiguration">AWS
   * API Reference</a></p>
   */
  class CrossAccountConfiguration
  {
  public:
    AWS_AIOPS_API CrossAccountConfiguration() = default;
    AWS_AIOPS_API CrossAccountConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AIOPS_API CrossAccountConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AIOPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an existing role which will be used to do investigations on your
     * behalf. </p>
     */
    inline const Aws::String& GetSourceRoleArn() const { return m_sourceRoleArn; }
    inline bool SourceRoleArnHasBeenSet() const { return m_sourceRoleArnHasBeenSet; }
    template<typename SourceRoleArnT = Aws::String>
    void SetSourceRoleArn(SourceRoleArnT&& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = std::forward<SourceRoleArnT>(value); }
    template<typename SourceRoleArnT = Aws::String>
    CrossAccountConfiguration& WithSourceRoleArn(SourceRoleArnT&& value) { SetSourceRoleArn(std::forward<SourceRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceRoleArn;
    bool m_sourceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
