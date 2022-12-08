/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An association between the network ACL and a subnet.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkAclAssociation">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkAclAssociation
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation();
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline const Aws::String& GetNetworkAclAssociationId() const{ return m_networkAclAssociationId; }

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline bool NetworkAclAssociationIdHasBeenSet() const { return m_networkAclAssociationIdHasBeenSet; }

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline void SetNetworkAclAssociationId(const Aws::String& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = value; }

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline void SetNetworkAclAssociationId(Aws::String&& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = std::move(value); }

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline void SetNetworkAclAssociationId(const char* value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId.assign(value); }

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclAssociationId(const Aws::String& value) { SetNetworkAclAssociationId(value); return *this;}

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclAssociationId(Aws::String&& value) { SetNetworkAclAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the association between the network ACL and the subnet.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclAssociationId(const char* value) { SetNetworkAclAssociationId(value); return *this;}


    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}


    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet that is associated with the network ACL.</p>
     */
    inline AwsEc2NetworkAclAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_networkAclAssociationId;
    bool m_networkAclAssociationIdHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
