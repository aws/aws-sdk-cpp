/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateVpcConnectorRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateVpcConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcConnector"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the VPC connector.</p>
     */
    inline const Aws::String& GetVpcConnectorName() const{ return m_vpcConnectorName; }

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline bool VpcConnectorNameHasBeenSet() const { return m_vpcConnectorNameHasBeenSet; }

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline void SetVpcConnectorName(const Aws::String& value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName = value; }

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline void SetVpcConnectorName(Aws::String&& value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName = std::move(value); }

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline void SetVpcConnectorName(const char* value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName.assign(value); }

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline CreateVpcConnectorRequest& WithVpcConnectorName(const Aws::String& value) { SetVpcConnectorName(value); return *this;}

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline CreateVpcConnectorRequest& WithVpcConnectorName(Aws::String&& value) { SetVpcConnectorName(std::move(value)); return *this;}

    /**
     * <p>A name for the VPC connector.</p>
     */
    inline CreateVpcConnectorRequest& WithVpcConnectorName(const char* value) { SetVpcConnectorName(value); return *this;}


    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline CreateVpcConnectorRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline CreateVpcConnectorRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline CreateVpcConnectorRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline CreateVpcConnectorRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of subnets that App Runner should use when it associates your
     * service with a custom Amazon VPC. Specify IDs of subnets of a single Amazon VPC.
     * App Runner determines the Amazon VPC from the subnets you specify.</p> 
     * <p> App Runner currently only provides support for IPv4. </p> 
     */
    inline CreateVpcConnectorRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline CreateVpcConnectorRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline CreateVpcConnectorRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline CreateVpcConnectorRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline CreateVpcConnectorRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of security groups that App Runner should use for access to
     * Amazon Web Services resources under the specified subnets. If not specified, App
     * Runner uses the default security group of the Amazon VPC. The default security
     * group allows all outbound traffic.</p>
     */
    inline CreateVpcConnectorRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcConnectorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcConnectorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcConnectorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of metadata items that you can associate with your VPC connector
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcConnectorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vpcConnectorName;
    bool m_vpcConnectorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
