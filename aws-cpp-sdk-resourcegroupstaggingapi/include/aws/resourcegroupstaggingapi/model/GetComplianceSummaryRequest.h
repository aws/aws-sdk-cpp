/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/GroupByAttribute.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class GetComplianceSummaryRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceSummary"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdFilters() const{ return m_targetIdFilters; }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline bool TargetIdFiltersHasBeenSet() const { return m_targetIdFiltersHasBeenSet; }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline void SetTargetIdFilters(const Aws::Vector<Aws::String>& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters = value; }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline void SetTargetIdFilters(Aws::Vector<Aws::String>&& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters = std::move(value); }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline GetComplianceSummaryRequest& WithTargetIdFilters(const Aws::Vector<Aws::String>& value) { SetTargetIdFilters(value); return *this;}

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline GetComplianceSummaryRequest& WithTargetIdFilters(Aws::Vector<Aws::String>&& value) { SetTargetIdFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline GetComplianceSummaryRequest& AddTargetIdFilters(const Aws::String& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters.push_back(value); return *this; }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline GetComplianceSummaryRequest& AddTargetIdFilters(Aws::String&& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline GetComplianceSummaryRequest& AddTargetIdFilters(const char* value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters.push_back(value); return *this; }


    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionFilters() const{ return m_regionFilters; }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline bool RegionFiltersHasBeenSet() const { return m_regionFiltersHasBeenSet; }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline void SetRegionFilters(const Aws::Vector<Aws::String>& value) { m_regionFiltersHasBeenSet = true; m_regionFilters = value; }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline void SetRegionFilters(Aws::Vector<Aws::String>&& value) { m_regionFiltersHasBeenSet = true; m_regionFilters = std::move(value); }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline GetComplianceSummaryRequest& WithRegionFilters(const Aws::Vector<Aws::String>& value) { SetRegionFilters(value); return *this;}

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline GetComplianceSummaryRequest& WithRegionFilters(Aws::Vector<Aws::String>&& value) { SetRegionFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline GetComplianceSummaryRequest& AddRegionFilters(const Aws::String& value) { m_regionFiltersHasBeenSet = true; m_regionFilters.push_back(value); return *this; }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline GetComplianceSummaryRequest& AddRegionFilters(Aws::String&& value) { m_regionFiltersHasBeenSet = true; m_regionFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline GetComplianceSummaryRequest& AddRegionFilters(const char* value) { m_regionFiltersHasBeenSet = true; m_regionFilters.push_back(value); return *this; }


    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeFilters() const{ return m_resourceTypeFilters; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline bool ResourceTypeFiltersHasBeenSet() const { return m_resourceTypeFiltersHasBeenSet; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline void SetResourceTypeFilters(const Aws::Vector<Aws::String>& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = value; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline void SetResourceTypeFilters(Aws::Vector<Aws::String>&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = std::move(value); }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline GetComplianceSummaryRequest& WithResourceTypeFilters(const Aws::Vector<Aws::String>& value) { SetResourceTypeFilters(value); return *this;}

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline GetComplianceSummaryRequest& WithResourceTypeFilters(Aws::Vector<Aws::String>&& value) { SetResourceTypeFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline GetComplianceSummaryRequest& AddResourceTypeFilters(const Aws::String& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(value); return *this; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline GetComplianceSummaryRequest& AddResourceTypeFilters(Aws::String&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline GetComplianceSummaryRequest& AddResourceTypeFilters(const char* value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(value); return *this; }


    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyFilters() const{ return m_tagKeyFilters; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline bool TagKeyFiltersHasBeenSet() const { return m_tagKeyFiltersHasBeenSet; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline void SetTagKeyFilters(const Aws::Vector<Aws::String>& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters = value; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline void SetTagKeyFilters(Aws::Vector<Aws::String>&& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters = std::move(value); }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline GetComplianceSummaryRequest& WithTagKeyFilters(const Aws::Vector<Aws::String>& value) { SetTagKeyFilters(value); return *this;}

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline GetComplianceSummaryRequest& WithTagKeyFilters(Aws::Vector<Aws::String>&& value) { SetTagKeyFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline GetComplianceSummaryRequest& AddTagKeyFilters(const Aws::String& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters.push_back(value); return *this; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline GetComplianceSummaryRequest& AddTagKeyFilters(Aws::String&& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline GetComplianceSummaryRequest& AddTagKeyFilters(const char* value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters.push_back(value); return *this; }


    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline const Aws::Vector<GroupByAttribute>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline void SetGroupBy(const Aws::Vector<GroupByAttribute>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline void SetGroupBy(Aws::Vector<GroupByAttribute>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline GetComplianceSummaryRequest& WithGroupBy(const Aws::Vector<GroupByAttribute>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline GetComplianceSummaryRequest& WithGroupBy(Aws::Vector<GroupByAttribute>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline GetComplianceSummaryRequest& AddGroupBy(const GroupByAttribute& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline GetComplianceSummaryRequest& AddGroupBy(GroupByAttribute&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline GetComplianceSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetComplianceSummaryRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetComplianceSummaryRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetComplianceSummaryRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_targetIdFilters;
    bool m_targetIdFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionFilters;
    bool m_regionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypeFilters;
    bool m_resourceTypeFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyFilters;
    bool m_tagKeyFiltersHasBeenSet = false;

    Aws::Vector<GroupByAttribute> m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
