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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ModifyClusterSubnetGroupRequest : public RedshiftRequest
  {
  public:
    ModifyClusterSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterSubnetGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}


    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A text description of the subnet group to be modified.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline ModifyClusterSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline ModifyClusterSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline ModifyClusterSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of VPC subnet IDs. A maximum of 20 subnets can be modified in a
     * single request.</p>
     */
    inline ModifyClusterSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
