/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ViolationReason.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of the resource that is not protected by the policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ComplianceViolator">AWS
   * API Reference</a></p>
   */
  class ComplianceViolator
  {
  public:
    AWS_FMS_API ComplianceViolator();
    AWS_FMS_API ComplianceViolator(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ComplianceViolator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline ComplianceViolator& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline ComplianceViolator& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline ComplianceViolator& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline const ViolationReason& GetViolationReason() const{ return m_violationReason; }

    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline bool ViolationReasonHasBeenSet() const { return m_violationReasonHasBeenSet; }

    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline void SetViolationReason(const ViolationReason& value) { m_violationReasonHasBeenSet = true; m_violationReason = value; }

    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline void SetViolationReason(ViolationReason&& value) { m_violationReasonHasBeenSet = true; m_violationReason = std::move(value); }

    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline ComplianceViolator& WithViolationReason(const ViolationReason& value) { SetViolationReason(value); return *this;}

    /**
     * <p>The reason that the resource is not protected by the policy.</p>
     */
    inline ComplianceViolator& WithViolationReason(ViolationReason&& value) { SetViolationReason(std::move(value)); return *this;}


    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline ComplianceViolator& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline ComplianceViolator& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::CloudFront::Distribution</code>, or
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>.</p>
     */
    inline ComplianceViolator& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about the resource that doesn't comply with the policy scope.</p>
     */
    inline ComplianceViolator& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ViolationReason m_violationReason;
    bool m_violationReasonHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
