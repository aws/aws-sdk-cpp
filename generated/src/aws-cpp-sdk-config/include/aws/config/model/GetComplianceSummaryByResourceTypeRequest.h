/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceTypeRequest">AWS
   * API Reference</a></p>
   */
  class GetComplianceSummaryByResourceTypeRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceSummaryByResourceType"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an Amazon Web Services resource type such
     * as <code>AWS::EC2::Instance</code>. You can specify that the resource type is an
     * Amazon Web Services account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
