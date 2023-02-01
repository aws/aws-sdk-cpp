/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/SnapshotAttributeName.h>
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
  class DescribeSnapshotAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSnapshotAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshotAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline const SnapshotAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline void SetAttribute(const SnapshotAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline void SetAttribute(SnapshotAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithAttribute(const SnapshotAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The snapshot attribute you would like to view.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithAttribute(SnapshotAttributeName&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeSnapshotAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    SnapshotAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
