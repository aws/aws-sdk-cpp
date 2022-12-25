/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/AnomalyMonitor.h>
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
  class CreateAnomalyMonitorRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API CreateAnomalyMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalyMonitor"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline const AnomalyMonitor& GetAnomalyMonitor() const{ return m_anomalyMonitor; }

    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline bool AnomalyMonitorHasBeenSet() const { return m_anomalyMonitorHasBeenSet; }

    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline void SetAnomalyMonitor(const AnomalyMonitor& value) { m_anomalyMonitorHasBeenSet = true; m_anomalyMonitor = value; }

    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline void SetAnomalyMonitor(AnomalyMonitor&& value) { m_anomalyMonitorHasBeenSet = true; m_anomalyMonitor = std::move(value); }

    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline CreateAnomalyMonitorRequest& WithAnomalyMonitor(const AnomalyMonitor& value) { SetAnomalyMonitor(value); return *this;}

    /**
     * <p>The cost anomaly detection monitor object that you want to create.</p>
     */
    inline CreateAnomalyMonitorRequest& WithAnomalyMonitor(AnomalyMonitor&& value) { SetAnomalyMonitor(std::move(value)); return *this;}


    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline CreateAnomalyMonitorRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline CreateAnomalyMonitorRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline CreateAnomalyMonitorRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>An optional list of tags to associate with the specified <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
     * <code>AnomalyMonitor</code> </a>. You can use resource tags to control access to
     * your <code>monitor</code> using IAM policies.</p> <p>Each tag consists of a key
     * and a value, and each key must be unique for the resource. The following
     * restrictions apply to resource tags:</p> <ul> <li> <p>Although the maximum
     * number of array members is 200, you can assign a maximum of 50 user-tags to one
     * resource. The remaining are reserved for Amazon Web Services use</p> </li> <li>
     * <p>The maximum length of a key is 128 characters</p> </li> <li> <p>The maximum
     * length of a value is 256 characters</p> </li> <li> <p>Keys and values can only
     * contain alphanumeric characters, spaces, and any of the following:
     * <code>_.:/=+@-</code> </p> </li> <li> <p>Keys and values are case sensitive</p>
     * </li> <li> <p>Keys and values are trimmed for any leading or trailing
     * whitespaces</p> </li> <li> <p>Don’t use <code>aws:</code> as a prefix for your
     * keys. This prefix is reserved for Amazon Web Services use</p> </li> </ul>
     */
    inline CreateAnomalyMonitorRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    AnomalyMonitor m_anomalyMonitor;
    bool m_anomalyMonitorHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
