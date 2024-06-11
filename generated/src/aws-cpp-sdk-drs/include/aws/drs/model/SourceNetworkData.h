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
    AWS_DRS_API SourceNetworkData();
    AWS_DRS_API SourceNetworkData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceNetworkData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source Network ID.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }
    inline SourceNetworkData& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}
    inline SourceNetworkData& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}
    inline SourceNetworkData& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC ID protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceVpc() const{ return m_sourceVpc; }
    inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
    inline void SetSourceVpc(const Aws::String& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = value; }
    inline void SetSourceVpc(Aws::String&& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = std::move(value); }
    inline void SetSourceVpc(const char* value) { m_sourceVpcHasBeenSet = true; m_sourceVpc.assign(value); }
    inline SourceNetworkData& WithSourceVpc(const Aws::String& value) { SetSourceVpc(value); return *this;}
    inline SourceNetworkData& WithSourceVpc(Aws::String&& value) { SetSourceVpc(std::move(value)); return *this;}
    inline SourceNetworkData& WithSourceVpc(const char* value) { SetSourceVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudFormation stack name that was deployed for recovering the Source
     * Network.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline SourceNetworkData& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline SourceNetworkData& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline SourceNetworkData& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the recovered VPC following Source Network recovery.</p>
     */
    inline const Aws::String& GetTargetVpc() const{ return m_targetVpc; }
    inline bool TargetVpcHasBeenSet() const { return m_targetVpcHasBeenSet; }
    inline void SetTargetVpc(const Aws::String& value) { m_targetVpcHasBeenSet = true; m_targetVpc = value; }
    inline void SetTargetVpc(Aws::String&& value) { m_targetVpcHasBeenSet = true; m_targetVpc = std::move(value); }
    inline void SetTargetVpc(const char* value) { m_targetVpcHasBeenSet = true; m_targetVpc.assign(value); }
    inline SourceNetworkData& WithTargetVpc(const Aws::String& value) { SetTargetVpc(value); return *this;}
    inline SourceNetworkData& WithTargetVpc(Aws::String&& value) { SetTargetVpc(std::move(value)); return *this;}
    inline SourceNetworkData& WithTargetVpc(const char* value) { SetTargetVpc(value); return *this;}
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
