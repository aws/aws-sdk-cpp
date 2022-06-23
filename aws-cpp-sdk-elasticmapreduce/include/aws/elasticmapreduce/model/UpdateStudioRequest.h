/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class AWS_EMR_API UpdateStudioRequest : public EMRRequest
  {
  public:
    UpdateStudioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStudio"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline UpdateStudioRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline UpdateStudioRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio to update.</p>
     */
    inline UpdateStudioRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A detailed description to assign to the Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline UpdateStudioRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline UpdateStudioRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline UpdateStudioRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline UpdateStudioRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. The list can
     * include new subnet IDs, but must also include all of the subnet IDs previously
     * associated with the Studio. The list order does not matter. A Studio can have a
     * maximum of 5 subnets. The subnets must belong to the same VPC as the Studio.
     * </p>
     */
    inline UpdateStudioRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDefaultS3Location() const{ return m_defaultS3Location; }

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline bool DefaultS3LocationHasBeenSet() const { return m_defaultS3LocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline void SetDefaultS3Location(const Aws::String& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = value; }

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline void SetDefaultS3Location(Aws::String&& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = std::move(value); }

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline void SetDefaultS3Location(const char* value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location.assign(value); }

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDefaultS3Location(const Aws::String& value) { SetDefaultS3Location(value); return *this;}

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDefaultS3Location(Aws::String&& value) { SetDefaultS3Location(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location to back up Workspaces and notebook files for the
     * Amazon EMR Studio.</p>
     */
    inline UpdateStudioRequest& WithDefaultS3Location(const char* value) { SetDefaultS3Location(value); return *this;}

  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_defaultS3Location;
    bool m_defaultS3LocationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
