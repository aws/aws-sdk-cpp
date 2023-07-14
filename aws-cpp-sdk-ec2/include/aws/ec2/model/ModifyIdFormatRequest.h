﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyIdFormatRequest : public EC2Request
  {
  public:
    ModifyIdFormatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIdFormat"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline ModifyIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline ModifyIdFormatRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline ModifyIdFormatRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline bool GetUseLongIds() const{ return m_useLongIds; }

    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline bool UseLongIdsHasBeenSet() const { return m_useLongIdsHasBeenSet; }

    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline void SetUseLongIds(bool value) { m_useLongIdsHasBeenSet = true; m_useLongIds = value; }

    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline ModifyIdFormatRequest& WithUseLongIds(bool value) { SetUseLongIds(value); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    bool m_useLongIds;
    bool m_useLongIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
