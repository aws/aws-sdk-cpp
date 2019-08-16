/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EMR_API PutBlockPublicAccessConfigurationRequest : public EMRRequest
  {
  public:
    PutBlockPublicAccessConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBlockPublicAccessConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     */
    inline const BlockPublicAccessConfiguration& GetBlockPublicAccessConfiguration() const{ return m_blockPublicAccessConfiguration; }

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
     */
    inline bool BlockPublicAccessConfigurationHasBeenSet() const { return m_blockPublicAccessConfigurationHasBeenSet; }

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
     */
    inline void SetBlockPublicAccessConfiguration(const BlockPublicAccessConfiguration& value) { m_blockPublicAccessConfigurationHasBeenSet = true; m_blockPublicAccessConfiguration = value; }

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
     */
    inline void SetBlockPublicAccessConfiguration(BlockPublicAccessConfiguration&& value) { m_blockPublicAccessConfigurationHasBeenSet = true; m_blockPublicAccessConfiguration = std::move(value); }

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
     */
    inline PutBlockPublicAccessConfigurationRequest& WithBlockPublicAccessConfiguration(const BlockPublicAccessConfiguration& value) { SetBlockPublicAccessConfiguration(value); return *this;}

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
     */
    inline PutBlockPublicAccessConfigurationRequest& WithBlockPublicAccessConfiguration(BlockPublicAccessConfiguration&& value) { SetBlockPublicAccessConfiguration(std::move(value)); return *this;}

  private:

    BlockPublicAccessConfiguration m_blockPublicAccessConfiguration;
    bool m_blockPublicAccessConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
