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
    AWS_LIGHTSAIL_API Bucket();
    AWS_LIGHTSAIL_API Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline Bucket& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline Bucket& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The Lightsail resource type of the bucket (for example,
     * <code>Bucket</code>).</p>
     */
    inline Bucket& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline const AccessRules& GetAccessRules() const{ return m_accessRules; }

    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline bool AccessRulesHasBeenSet() const { return m_accessRulesHasBeenSet; }

    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline void SetAccessRules(const AccessRules& value) { m_accessRulesHasBeenSet = true; m_accessRules = value; }

    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline void SetAccessRules(AccessRules&& value) { m_accessRulesHasBeenSet = true; m_accessRules = std::move(value); }

    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline Bucket& WithAccessRules(const AccessRules& value) { SetAccessRules(value); return *this;}

    /**
     * <p>An object that describes the access rules of the bucket.</p>
     */
    inline Bucket& WithAccessRules(AccessRules&& value) { SetAccessRules(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline Bucket& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline Bucket& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline Bucket& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline Bucket& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline Bucket& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the bundle currently applied to the bucket.</p> <p>A bucket bundle
     * specifies the monthly cost, storage space, and data transfer quota for a
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle of a bucket.</p>
     */
    inline Bucket& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline Bucket& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline Bucket& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The URL of the bucket.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the bucket.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the bucket.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the bucket.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the bucket.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the bucket.</p>
     */
    inline Bucket& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the bucket.</p>
     */
    inline Bucket& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the bucket.</p>
     */
    inline Bucket& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline Bucket& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>An object that describes the location of the bucket, such as the Amazon Web
     * Services Region and Availability Zone.</p>
     */
    inline Bucket& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline Bucket& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline Bucket& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline Bucket& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline Bucket& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline Bucket& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code for a bucket. Include this code in your email to support
     * when you have questions about a Lightsail bucket. This code enables our support
     * team to look up your Lightsail information more easily.</p>
     */
    inline Bucket& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline Bucket& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline Bucket& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline Bucket& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the bucket. For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Tags
     * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline Bucket& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline const Aws::String& GetObjectVersioning() const{ return m_objectVersioning; }

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline bool ObjectVersioningHasBeenSet() const { return m_objectVersioningHasBeenSet; }

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline void SetObjectVersioning(const Aws::String& value) { m_objectVersioningHasBeenSet = true; m_objectVersioning = value; }

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline void SetObjectVersioning(Aws::String&& value) { m_objectVersioningHasBeenSet = true; m_objectVersioning = std::move(value); }

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline void SetObjectVersioning(const char* value) { m_objectVersioningHasBeenSet = true; m_objectVersioning.assign(value); }

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline Bucket& WithObjectVersioning(const Aws::String& value) { SetObjectVersioning(value); return *this;}

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline Bucket& WithObjectVersioning(Aws::String&& value) { SetObjectVersioning(std::move(value)); return *this;}

    /**
     * <p>Indicates whether object versioning is enabled for the bucket.</p> <p>The
     * following options can be configured:</p> <ul> <li> <p> <code>Enabled</code> -
     * Object versioning is enabled.</p> </li> <li> <p> <code>Suspended</code> - Object
     * versioning was previously enabled but is currently suspended. Existing object
     * versions are retained.</p> </li> <li> <p> <code>NeverEnabled</code> - Object
     * versioning has never been enabled.</p> </li> </ul>
     */
    inline Bucket& WithObjectVersioning(const char* value) { SetObjectVersioning(value); return *this;}


    /**
     * <p>Indicates whether the bundle that is currently applied to a bucket can be
     * changed to another bundle.</p> <p>You can update a bucket's bundle only one time
     * within a monthly Amazon Web Services billing cycle.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change a bucket's bundle.</p>
     */
    inline bool GetAbleToUpdateBundle() const{ return m_ableToUpdateBundle; }

    /**
     * <p>Indicates whether the bundle that is currently applied to a bucket can be
     * changed to another bundle.</p> <p>You can update a bucket's bundle only one time
     * within a monthly Amazon Web Services billing cycle.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change a bucket's bundle.</p>
     */
    inline bool AbleToUpdateBundleHasBeenSet() const { return m_ableToUpdateBundleHasBeenSet; }

    /**
     * <p>Indicates whether the bundle that is currently applied to a bucket can be
     * changed to another bundle.</p> <p>You can update a bucket's bundle only one time
     * within a monthly Amazon Web Services billing cycle.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change a bucket's bundle.</p>
     */
    inline void SetAbleToUpdateBundle(bool value) { m_ableToUpdateBundleHasBeenSet = true; m_ableToUpdateBundle = value; }

    /**
     * <p>Indicates whether the bundle that is currently applied to a bucket can be
     * changed to another bundle.</p> <p>You can update a bucket's bundle only one time
     * within a monthly Amazon Web Services billing cycle.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change a bucket's bundle.</p>
     */
    inline Bucket& WithAbleToUpdateBundle(bool value) { SetAbleToUpdateBundle(value); return *this;}


    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadonlyAccessAccounts() const{ return m_readonlyAccessAccounts; }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline bool ReadonlyAccessAccountsHasBeenSet() const { return m_readonlyAccessAccountsHasBeenSet; }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline void SetReadonlyAccessAccounts(const Aws::Vector<Aws::String>& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = value; }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline void SetReadonlyAccessAccounts(Aws::Vector<Aws::String>&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts = std::move(value); }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline Bucket& WithReadonlyAccessAccounts(const Aws::Vector<Aws::String>& value) { SetReadonlyAccessAccounts(value); return *this;}

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline Bucket& WithReadonlyAccessAccounts(Aws::Vector<Aws::String>&& value) { SetReadonlyAccessAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline Bucket& AddReadonlyAccessAccounts(const Aws::String& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline Bucket& AddReadonlyAccessAccounts(Aws::String&& value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that specify the Amazon Web Services account IDs that
     * have read-only access to the bucket.</p>
     */
    inline Bucket& AddReadonlyAccessAccounts(const char* value) { m_readonlyAccessAccountsHasBeenSet = true; m_readonlyAccessAccounts.push_back(value); return *this; }


    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline const Aws::Vector<ResourceReceivingAccess>& GetResourcesReceivingAccess() const{ return m_resourcesReceivingAccess; }

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline bool ResourcesReceivingAccessHasBeenSet() const { return m_resourcesReceivingAccessHasBeenSet; }

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline void SetResourcesReceivingAccess(const Aws::Vector<ResourceReceivingAccess>& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess = value; }

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline void SetResourcesReceivingAccess(Aws::Vector<ResourceReceivingAccess>&& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess = std::move(value); }

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline Bucket& WithResourcesReceivingAccess(const Aws::Vector<ResourceReceivingAccess>& value) { SetResourcesReceivingAccess(value); return *this;}

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline Bucket& WithResourcesReceivingAccess(Aws::Vector<ResourceReceivingAccess>&& value) { SetResourcesReceivingAccess(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline Bucket& AddResourcesReceivingAccess(const ResourceReceivingAccess& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe Lightsail instances that have access to the
     * bucket.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action to update the instances that have access to a bucket.</p>
     */
    inline Bucket& AddResourcesReceivingAccess(ResourceReceivingAccess&& value) { m_resourcesReceivingAccessHasBeenSet = true; m_resourcesReceivingAccess.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline const BucketState& GetState() const{ return m_state; }

    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline void SetState(const BucketState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline void SetState(BucketState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline Bucket& WithState(const BucketState& value) { SetState(value); return *this;}

    /**
     * <p>An object that describes the state of the bucket.</p>
     */
    inline Bucket& WithState(BucketState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline const BucketAccessLogConfig& GetAccessLogConfig() const{ return m_accessLogConfig; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline bool AccessLogConfigHasBeenSet() const { return m_accessLogConfigHasBeenSet; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline void SetAccessLogConfig(const BucketAccessLogConfig& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = value; }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline void SetAccessLogConfig(BucketAccessLogConfig&& value) { m_accessLogConfigHasBeenSet = true; m_accessLogConfig = std::move(value); }

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline Bucket& WithAccessLogConfig(const BucketAccessLogConfig& value) { SetAccessLogConfig(value); return *this;}

    /**
     * <p>An object that describes the access log configuration for the bucket.</p>
     */
    inline Bucket& WithAccessLogConfig(BucketAccessLogConfig&& value) { SetAccessLogConfig(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    AccessRules m_accessRules;
    bool m_accessRulesHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    bool m_ableToUpdateBundle;
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
