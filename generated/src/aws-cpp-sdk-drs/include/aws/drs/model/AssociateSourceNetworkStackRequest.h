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
    AWS_DRS_API AssociateSourceNetworkStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceNetworkStack"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline const Aws::String& GetCfnStackName() const{ return m_cfnStackName; }

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline void SetCfnStackName(const Aws::String& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = value; }

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline void SetCfnStackName(Aws::String&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::move(value); }

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline void SetCfnStackName(const char* value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName.assign(value); }

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithCfnStackName(const Aws::String& value) { SetCfnStackName(value); return *this;}

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithCfnStackName(Aws::String&& value) { SetCfnStackName(std::move(value)); return *this;}

    /**
     * <p>CloudFormation template to associate with a Source Network.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithCfnStackName(const char* value) { SetCfnStackName(value); return *this;}


    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}

    /**
     * <p>The Source Network ID to associate with CloudFormation template.</p>
     */
    inline AssociateSourceNetworkStackRequest& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}

  private:

    Aws::String m_cfnStackName;
    bool m_cfnStackNameHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
