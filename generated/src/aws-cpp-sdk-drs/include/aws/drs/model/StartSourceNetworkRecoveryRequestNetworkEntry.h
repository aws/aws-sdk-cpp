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
   * <p>An object representing the Source Network to recover.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartSourceNetworkRecoveryRequestNetworkEntry">AWS
   * API Reference</a></p>
   */
  class StartSourceNetworkRecoveryRequestNetworkEntry
  {
  public:
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry() = default;
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StartSourceNetworkRecoveryRequestNetworkEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>CloudFormation stack name to be used for recovering the network.</p>
     */
    inline const Aws::String& GetCfnStackName() const { return m_cfnStackName; }
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }
    template<typename CfnStackNameT = Aws::String>
    void SetCfnStackName(CfnStackNameT&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::forward<CfnStackNameT>(value); }
    template<typename CfnStackNameT = Aws::String>
    StartSourceNetworkRecoveryRequestNetworkEntry& WithCfnStackName(CfnStackNameT&& value) { SetCfnStackName(std::forward<CfnStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Network you want to recover.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    StartSourceNetworkRecoveryRequestNetworkEntry& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cfnStackName;
    bool m_cfnStackNameHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
