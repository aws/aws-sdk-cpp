/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of Source Network related to a job event.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/SourceNetworkData">AWS
   * API Reference</a></p>
   */
  class SourceNetworkData
  {
  public:
    AWS_DRS_API SourceNetworkData() = default;
    AWS_DRS_API SourceNetworkData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceNetworkData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source Network ID.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    SourceNetworkData& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC ID protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceVpc() const { return m_sourceVpc; }
    inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
    template<typename SourceVpcT = Aws::String>
    void SetSourceVpc(SourceVpcT&& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = std::forward<SourceVpcT>(value); }
    template<typename SourceVpcT = Aws::String>
    SourceNetworkData& WithSourceVpc(SourceVpcT&& value) { SetSourceVpc(std::forward<SourceVpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudFormation stack name that was deployed for recovering the Source
     * Network.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    SourceNetworkData& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the recovered VPC following Source Network recovery.</p>
     */
    inline const Aws::String& GetTargetVpc() const { return m_targetVpc; }
    inline bool TargetVpcHasBeenSet() const { return m_targetVpcHasBeenSet; }
    template<typename TargetVpcT = Aws::String>
    void SetTargetVpc(TargetVpcT&& value) { m_targetVpcHasBeenSet = true; m_targetVpc = std::forward<TargetVpcT>(value); }
    template<typename TargetVpcT = Aws::String>
    SourceNetworkData& WithTargetVpc(TargetVpcT&& value) { SetTargetVpc(std::forward<TargetVpcT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;

    Aws::String m_sourceVpc;
    bool m_sourceVpcHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_targetVpc;
    bool m_targetVpcHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
