/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ResourceData.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Web Services resource that is
   * associated with the GuardDuty finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ResourceV2">AWS
   * API Reference</a></p>
   */
  class ResourceV2
  {
  public:
    AWS_GUARDDUTY_API ResourceV2();
    AWS_GUARDDUTY_API ResourceV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ResourceV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the resource.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline ResourceV2& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline ResourceV2& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline ResourceV2& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceV2& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceV2& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceV2& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID to which the resource belongs.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ResourceV2& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ResourceV2& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ResourceV2& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline const FindingResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const FindingResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(FindingResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceV2& WithResourceType(const FindingResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceV2& WithResourceType(FindingResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the resource belongs.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ResourceV2& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ResourceV2& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ResourceV2& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service of the resource.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline ResourceV2& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline ResourceV2& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline ResourceV2& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cloud partition within the Amazon Web Services Region to which the
     * resource belongs.</p>
     */
    inline const Aws::String& GetCloudPartition() const{ return m_cloudPartition; }
    inline bool CloudPartitionHasBeenSet() const { return m_cloudPartitionHasBeenSet; }
    inline void SetCloudPartition(const Aws::String& value) { m_cloudPartitionHasBeenSet = true; m_cloudPartition = value; }
    inline void SetCloudPartition(Aws::String&& value) { m_cloudPartitionHasBeenSet = true; m_cloudPartition = std::move(value); }
    inline void SetCloudPartition(const char* value) { m_cloudPartitionHasBeenSet = true; m_cloudPartition.assign(value); }
    inline ResourceV2& WithCloudPartition(const Aws::String& value) { SetCloudPartition(value); return *this;}
    inline ResourceV2& WithCloudPartition(Aws::String&& value) { SetCloudPartition(std::move(value)); return *this;}
    inline ResourceV2& WithCloudPartition(const char* value) { SetCloudPartition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the tags associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ResourceV2& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ResourceV2& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ResourceV2& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ResourceV2& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon Web Services resource associated with
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const ResourceData& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const ResourceData& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(ResourceData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline ResourceV2& WithData(const ResourceData& value) { SetData(value); return *this;}
    inline ResourceV2& WithData(ResourceData&& value) { SetData(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    FindingResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_cloudPartition;
    bool m_cloudPartitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceData m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
