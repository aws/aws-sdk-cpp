/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/elasticmapreduce/model/BlockPublicAccessConfiguration.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class PutBlockPublicAccessConfigurationRequest : public EMRRequest
  {
  public:
    AWS_EMR_API PutBlockPublicAccessConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBlockPublicAccessConfiguration"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A configuration for Amazon EMR block public access. The configuration applies
     * to all clusters created in your account for the current Region. The
     * configuration specifies whether block public access is enabled. If block public
     * access is enabled, security groups associated with the cluster cannot have rules
     * that allow inbound traffic from 0.0.0.0/0 or ::/0 on a port, unless the port is
     * specified as an exception using
     * <code>PermittedPublicSecurityGroupRuleRanges</code> in the
     * <code>BlockPublicAccessConfiguration</code>. By default, Port 22 (SSH) is an
     * exception, and public access is allowed on this port. You can change this by
     * updating <code>BlockPublicSecurityGroupRules</code> to remove the exception.</p>
     *  <p>For accounts that created clusters in a Region before November 25,
     * 2019, block public access is disabled by default in that Region. To use this
     * feature, you must manually enable and configure it. For accounts that did not
     * create an Amazon EMR cluster in a Region before this date, block public access
     * is enabled by default in that Region.</p> 
     */
    inline const BlockPublicAccessConfiguration& GetBlockPublicAccessConfiguration() const { return m_blockPublicAccessConfiguration; }
    inline bool BlockPublicAccessConfigurationHasBeenSet() const { return m_blockPublicAccessConfigurationHasBeenSet; }
    template<typename BlockPublicAccessConfigurationT = BlockPublicAccessConfiguration>
    void SetBlockPublicAccessConfiguration(BlockPublicAccessConfigurationT&& value) { m_blockPublicAccessConfigurationHasBeenSet = true; m_blockPublicAccessConfiguration = std::forward<BlockPublicAccessConfigurationT>(value); }
    template<typename BlockPublicAccessConfigurationT = BlockPublicAccessConfiguration>
    PutBlockPublicAccessConfigurationRequest& WithBlockPublicAccessConfiguration(BlockPublicAccessConfigurationT&& value) { SetBlockPublicAccessConfiguration(std::forward<BlockPublicAccessConfigurationT>(value)); return *this;}
    ///@}
  private:

    BlockPublicAccessConfiguration m_blockPublicAccessConfiguration;
    bool m_blockPublicAccessConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
