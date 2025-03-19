/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AccessRules.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/BucketState.h>
#include <aws/lightsail/model/BucketAccessLogConfig.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/ResourceReceivingAccess.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lightsail bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Bucket">AWS
   * API Reference</a></p>
   */
  class Bucket
  {
  public:
    AWS_LIGHTSAIL_API Bucket() = default;
    AWS_LIGHTSAIL_API Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lightsail resource type of the bucket.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    Bucket& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline const AccessRules& GetAccessRules() const { return m_accessRules; }
    inline bool AccessRulesHasBeenSet() const { return m_accessRulesHasBeenSet; }
    template<typename AccessRulesT = AccessRules>
    void SetAccessRules(AccessRulesT&& value) { m_accessRulesHasBeenSet = true; m_accessRules = std::forward<AccessRulesT>(value); }
    template<typename AccessRulesT = AccessRules>
    Bucket& WithAccessRules(AccessRulesT&& value) { SetAccessRules(std::forward<AccessRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Bucket& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    Bucket& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Bucket& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the bucket.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Bucket& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    Bucket& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Bucket& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    Bucket& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Bucket& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Bucket& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline const Aws::String& GetObjectVersioning() const { return m_objectVersioning; }
    inline bool ObjectVersioningHasBeenSet() const { return m_objectVersioningHasBeenSet; }
    template<typename ObjectVersioningT = Aws::String>
    void SetObjectVersioning(ObjectVersioningT&& value) { m_objectVersioningHasBeenSet = true; m_objectVersioning = std::forward<ObjectVersioningT>(value); }
    template<typename ObjectVersioningT = Aws::String>
    Bucket& WithObjectVersioning(ObjectVersioningT&& value) { SetObjectVersioning(std::forward<ObjectVersioningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bundle that is currently applied to a bucket can be
     * changed to another bundle.</p> <p>You can update a bucket's bundle only one time
     * within a monthly Amazon Web Services billing cycle.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change a bucket's bundle.</p>
     */
    inline bool GetAbleToUpdateBundle() const { return m_ableToUpdateBundle; }
    inline bool AbleToUpdateBundleHasBeenSet() const { return m_ableToUpdateBundleHasBeenSet; }
    inline void SetAbleToUpdateBundle(bool value) { m_ableToUpdateBundleHasBeenSet = true; m_ableToUpdateBundle = value; }
    inline Bucket& WithAbleToUpdateBundle(bool value) { SetAbleToUpdateBundle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadonlyAccessAccounts() const { return m_readonlyAccessAccounts; }
    inline bool ReadonlyAccessAccountsHasBeenSet() const { return m_readonlyAccessAccountsHasBeenSet; }
    template<typename ReadonlyAccessAccountsT = Aws::Vector<Aws::String>>
    void SetReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = std::forward<ReadonlyAccessAccountsT>(value); }
    template<typename ReadonlyAccessAccountsT = Aws::Vector<Aws::String>>
    Bucket& WithReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { SetReadonlyAccessAccounts(std::forward<ReadonlyAccessAccountsT>(value)); return *this;}
    template<typename ReadonlyAccessAccountsT = Aws::String>
    Bucket& AddReadonlyAccessAccounts(ReadonlyAccessAccountsT&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.emplace_back(std::forward<ReadonlyAccessAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline const Aws::Vector<ResourceReceivingAccess>& GetResourcesReceivingAccess() const { return m_resourcesReceivingAccess; }
    inline bool ResourcesReceivingAccessHasBeenSet() const { return m_resourcesReceivingAccessHasBeenSet; }
    template<typename ResourcesReceivingAccessT = Aws::Vector<ResourceReceivingAccess>>
    void SetResourcesReceivingAccess(ResourcesReceivingAccessT&& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess = std::forward<ResourcesReceivingAccessT>(value); }
    template<typename ResourcesReceivingAccessT = Aws::Vector<ResourceReceivingAccess>>
    Bucket& WithResourcesReceivingAccess(ResourcesReceivingAccessT&& value) { SetResourcesReceivingAccess(std::forward<ResourcesReceivingAccessT>(value)); return *this;}
    template<typename ResourcesReceivingAccessT = ResourceReceivingAccess>
    Bucket& AddResourcesReceivingAccess(ResourcesReceivingAccessT&& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess.emplace_back(std::forward<ResourcesReceivingAccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline const BucketState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = BucketState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = BucketState>
    Bucket& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline const BucketAccessLogConfig& GetAccessLogConfig() const { return m_accessLogConfig; }
    inline bool AccessLogConfigHasBeenSet() const { return m_accessLogConfigHasBeenSet; }
    template<typename AccessLogConfigT = BucketAccessLogConfig>
    void SetAccessLogConfig(AccessLogConfigT&& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = std::forward<AccessLogConfigT>(value); }
    template<typename AccessLogConfigT = BucketAccessLogConfig>
    Bucket& WithAccessLogConfig(AccessLogConfigT&& value) { SetAccessLogConfig(std::forward<AccessLogConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    AccessRules m_accessRules;
    bool m_accessRulesHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_objectVersioning;
    bool m_objectVersioningHasBeenSet = false;

    bool m_ableToUpdateBundle{false};
    bool m_ableToUpdateBundleHasBeenSet = false;

    Aws::Vector<Aws::String> m_readonlyAccessAccounts;
    bool m_readonlyAccessAccountsHasBeenSet = false;

    Aws::Vector<ResourceReceivingAccess> m_resourcesReceivingAccess;
    bool m_resourcesReceivingAccessHasBeenSet = false;

    BucketState m_state;
    bool m_stateHasBeenSet = false;

    BucketAccessLogConfig m_accessLogConfig;
    bool m_accessLogConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
