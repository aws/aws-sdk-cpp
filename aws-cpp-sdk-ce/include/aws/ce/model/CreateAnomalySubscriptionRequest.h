/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/AnomalySubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class CreateAnomalySubscriptionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalySubscription"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline const AnomalySubscription& GetAnomalySubscription() const{ return m_anomalySubscription; }

    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline bool AnomalySubscriptionHasBeenSet() const { return m_anomalySubscriptionHasBeenSet; }

    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline void SetAnomalySubscription(const AnomalySubscription& value) { m_anomalySubscriptionHasBeenSet = true; m_anomalySubscription = value; }

    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline void SetAnomalySubscription(AnomalySubscription&& value) { m_anomalySubscriptionHasBeenSet = true; m_anomalySubscription = std::move(value); }

    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline CreateAnomalySubscriptionRequest& WithAnomalySubscription(const AnomalySubscription& value) { SetAnomalySubscription(value); return *this;}

    /**
     * <p>The cost anomaly subscription object that you want to create. </p>
     */
    inline CreateAnomalySubscriptionRequest& WithAnomalySubscription(AnomalySubscription&& value) { SetAnomalySubscription(std::move(value)); return *this;}


    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline CreateAnomalySubscriptionRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline CreateAnomalySubscriptionRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline CreateAnomalySubscriptionRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
     * <code>AnomalySubscription</code> </a>. You can use resource tags to control
     * access to your <code>subscription</code> using IAM policies.</p> <p>Each tag
     * consists of a key and a value, and each key must be unique for the resource. The
     * following restrictions apply to resource tags:</p> <ul> <li> <p>Although the
     * maximum number of array members is 200, you can assign a maximum of 50 user-tags
     * to one resource. The remaining are reserved for Amazon Web Services use</p>
     * </li> <li> <p>The maximum length of a key is 128 characters</p> </li> <li>
     * <p>The maximum length of a value is 256 characters</p> </li> <li> <p>Keys and
     * values can only contain alphanumeric characters, spaces, and any of the
     * following: <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case
     * sensitive</p> </li> <li> <p>Keys and values are trimmed for any leading or
     * trailing whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix
     * for your keys. This prefix is reserved for Amazon Web Services use</p> </li>
     * </ul>
     */
    inline CreateAnomalySubscriptionRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    AnomalySubscription m_anomalySubscription;
    bool m_anomalySubscriptionHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
