/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class AssociateSourceNetworkStackRequest : public DrsRequest
  {
  public:
    AWS_DRS_API AssociateSourceNetworkStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceNetworkStack"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline const Aws::String& GetCfnStackName() const { return m_cfnStackName; }
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }
    template<typename CfnStackNameT = Aws::String>
    void SetCfnStackName(CfnStackNameT&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::forward<CfnStackNameT>(value); }
    template<typename CfnStackNameT = Aws::String>
    AssociateSourceNetworkStackRequest& WithCfnStackName(CfnStackNameT&& value) { SetCfnStackName(std::forward<CfnStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    AssociateSourceNetworkStackRequest& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
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
