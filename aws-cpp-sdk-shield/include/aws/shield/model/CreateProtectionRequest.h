﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API CreateProtectionRequest : public ShieldRequest
  {
  public:
    CreateProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProtection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline CreateProtectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline CreateProtectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Friendly name for the <code>Protection</code> you are creating.</p>
     */
    inline CreateProtectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline CreateProtectionRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline CreateProtectionRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected.</p> <p>The
     * ARN should be in one of the following formats:</p> <ul> <li> <p>For an
     * Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Elastic Load Balancer (Classic Load Balancer):
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/<i>load-balancer-name</i>
     * </code> </p> </li> <li> <p>For an Amazon CloudFront distribution:
     * <code>arn:aws:cloudfront::<i>account-id</i>:distribution/<i>distribution-id</i>
     * </code> </p> </li> <li> <p>For an Global Accelerator accelerator:
     * <code>arn:aws:globalaccelerator::<i>account-id</i>:accelerator/<i>accelerator-id</i>
     * </code> </p> </li> <li> <p>For Amazon Route 53:
     * <code>arn:aws:route53:::hostedzone/<i>hosted-zone-id</i> </code> </p> </li> <li>
     * <p>For an Elastic IP address:
     * <code>arn:aws:ec2:<i>region</i>:<i>account-id</i>:eip-allocation/<i>allocation-id</i>
     * </code> </p> </li> </ul>
     */
    inline CreateProtectionRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tag key-value pairs for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
