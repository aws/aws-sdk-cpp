/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Partition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/DataClassificationDetails.h>
#include <aws/securityhub/model/ResourceDetails.h>
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
   * <p>A resource related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_SECURITYHUB_API Resource();
    AWS_SECURITYHUB_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline void SetPartition(const Partition& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline void SetPartition(Partition&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline Resource& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline Resource& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p>
     */
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline Resource& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline Resource& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline Resource& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed.</p>
     */
    inline Resource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline const DataClassificationDetails& GetDataClassification() const{ return m_dataClassification; }

    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline bool DataClassificationHasBeenSet() const { return m_dataClassificationHasBeenSet; }

    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline void SetDataClassification(const DataClassificationDetails& value) { m_dataClassificationHasBeenSet = true; m_dataClassification = value; }

    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline void SetDataClassification(DataClassificationDetails&& value) { m_dataClassificationHasBeenSet = true; m_dataClassification = std::move(value); }

    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline Resource& WithDataClassification(const DataClassificationDetails& value) { SetDataClassification(value); return *this;}

    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline Resource& WithDataClassification(DataClassificationDetails&& value) { SetDataClassification(std::move(value)); return *this;}


    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline void SetDetails(const ResourceDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline void SetDetails(ResourceDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline Resource& WithDetails(const ResourceDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline Resource& WithDetails(ResourceDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Partition m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataClassificationDetails m_dataClassification;
    bool m_dataClassificationHasBeenSet = false;

    ResourceDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
