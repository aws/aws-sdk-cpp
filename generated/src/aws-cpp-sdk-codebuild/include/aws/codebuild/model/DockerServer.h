/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/DockerServerStatus.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains docker server information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DockerServer">AWS
   * API Reference</a></p>
   */
  class DockerServer
  {
  public:
    AWS_CODEBUILD_API DockerServer() = default;
    AWS_CODEBUILD_API DockerServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API DockerServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the compute resources the docker server uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 4
     * GiB memory and 2 vCPUs for your docker server.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 8 GiB memory and 4 vCPUs for your
     * docker server.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to
     * 16 GiB memory and 8 vCPUs for your docker server.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_XLARGE</code>: Use up to 64 GiB memory and 32 vCPUs for
     * your docker server.</p> </li> <li> <p> <code>BUILD_GENERAL1_2XLARGE</code>: Use
     * up to 128 GiB memory and 64 vCPUs for your docker server.</p> </li> </ul>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline DockerServer& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more security groups IDs.</p>  <p>Security groups
     * configured for Docker servers should allow ingress network traffic from the VPC
     * configured in the project. They should allow ingress on port 9876.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    DockerServer& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    DockerServer& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DockerServerStatus object to use for this docker server.</p>
     */
    inline const DockerServerStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = DockerServerStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = DockerServerStatus>
    DockerServer& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    DockerServerStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
