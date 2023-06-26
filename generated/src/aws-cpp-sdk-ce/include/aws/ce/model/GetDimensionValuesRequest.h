/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Dimension.h>
#include <aws/ce/model/Context.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SortDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetDimensionValuesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetDimensionValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDimensionValues"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline GetDimensionValuesRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline GetDimensionValuesRequest& WithSearchString(Aws::String&& value) { SetSearchString(std::move(value)); return *this;}

    /**
     * <p>The value that you want to search the filter values for.</p>
     */
    inline GetDimensionValuesRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}


    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline GetDimensionValuesRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start date and end date for retrieving the dimension values. The start
     * date is inclusive, but the end date is exclusive. For example, if
     * <code>start</code> is <code>2017-01-01</code> and <code>end</code> is
     * <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline GetDimensionValuesRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline const Dimension& GetDimension() const{ return m_dimension; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline void SetDimension(const Dimension& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline void SetDimension(Dimension&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline GetDimensionValuesRequest& WithDimension(const Dimension& value) { SetDimension(value); return *this;}

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see <code>Context</code>.
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/AAPI_CostCategoryRule.html">CostCategoryRule</a>.
     * </p>
     */
    inline GetDimensionValuesRequest& WithDimension(Dimension&& value) { SetDimension(std::move(value)); return *this;}


    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline const Context& GetContext() const{ return m_context; }

    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline void SetContext(const Context& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline void SetContext(Context&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline GetDimensionValuesRequest& WithContext(const Context& value) { SetContext(value); return *this;}

    /**
     * <p>The context for the call to <code>GetDimensionValues</code>. This can be
     * <code>RESERVATIONS</code> or <code>COST_AND_USAGE</code>. The default value is
     * <code>COST_AND_USAGE</code>. If the context is set to <code>RESERVATIONS</code>,
     * the resulting dimension values can be used in the
     * <code>GetReservationUtilization</code> operation. If the context is set to
     * <code>COST_AND_USAGE</code>, the resulting dimension values can be used in the
     * <code>GetCostAndUsage</code> operation.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>BILLING_ENTITY - The Amazon Web
     * Services seller that your account is with. Possible values are the
     * following:</p> <p>- Amazon Web Services(Amazon Web Services): The entity that
     * sells Amazon Web Services.</p> <p>- AISPL (Amazon Internet Services Pvt. Ltd.):
     * The local Indian entity that's an acting reseller for Amazon Web Services in
     * India.</p> <p>- Amazon Web Services Marketplace: The entity that supports the
     * sale of solutions that are built on Amazon Web Services by third-party software
     * providers.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The
     * scope of Amazon Relational Database Service deployments. Valid values are
     * <code>SingleAZ</code> and <code>MultiAZ</code>.</p> </li> <li>
     * <p>DATABASE_ENGINE - The Amazon Relational Database Service database. Examples
     * are Aurora or MySQL.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li>
     * <p>INSTANCE_TYPE_FAMILY - A family of instance types optimized to fit different
     * use cases. Examples are <code>Compute Optimized</code> (for example,
     * <code>C4</code>, <code>C5</code>, <code>C6g</code>, and <code>C7g</code>),
     * <code>Memory Optimization</code> (for example, <code>R4</code>,
     * <code>R5n</code>, <code>R5b</code>, and <code>R6g</code>).</p> </li> <li>
     * <p>INVOICING_ENTITY - The name of the entity that issues the Amazon Web Services
     * invoice.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the organization that
     * sells you Amazon Web Services services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the Amazon Web
     * Services ID of the member account.</p> </li> <li> <p>OPERATING_SYSTEM - The
     * operating system. Examples are Windows or Linux.</p> </li> <li> <p>OPERATION -
     * The action performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase that this usage is related to. Examples include
     * On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>RESERVATION_ID - The unique identifier for an Amazon Web Services Reservation
     * Instance.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plans.</p> </li> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute).</p> </li> <li> <p>SERVICE - The Amazon Web Services
     * service such as Amazon DynamoDB.</p> </li> <li> <p>TENANCY - The tenancy of a
     * resource. Examples are shared or dedicated.</p> </li> <li> <p>USAGE_TYPE - The
     * type of usage. An example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>REGION - The Amazon
     * Web Services Region.</p> </li> <li> <p>RECORD_TYPE - The different types of
     * charges such as Reserved Instance (RI) fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service.</p> </li> </ul> <p>If you set the context to <code>RESERVATIONS</code>,
     * you can use the following dimensions for searching:</p> <ul> <li> <p>AZ - The
     * Availability Zone. An example is <code>us-east-1a</code>.</p> </li> <li>
     * <p>CACHE_ENGINE - The Amazon ElastiCache operating system. Examples are Windows
     * or Linux.</p> </li> <li> <p>DEPLOYMENT_OPTION - The scope of Amazon Relational
     * Database Service deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating system. Examples
     * are Windows or Linux.</p> </li> <li> <p>REGION - The Amazon Web Services
     * Region.</p> </li> <li> <p>SCOPE (Utilization only) - The scope of a Reserved
     * Instance (RI). Values are regional or a single Availability Zone.</p> </li> <li>
     * <p>TAG (Coverage only) - The tags that are associated with a Reserved Instance
     * (RI).</p> </li> <li> <p>TENANCY - The tenancy of a resource. Examples are shared
     * or dedicated.</p> </li> </ul> <p>If you set the context to
     * <code>SAVINGS_PLANS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>SAVINGS_PLANS_TYPE - Type of Savings Plans (EC2
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - The payment option for
     * the given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION -
     * The Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The
     * family of instances (For example, <code>m5</code>)</p> </li> <li>
     * <p>LINKED_ACCOUNT - The description in the attribute map that includes the full
     * name of the member account. The value field contains the Amazon Web Services ID
     * of the member account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique
     * identifier for your Savings Plans.</p> </li> </ul>
     */
    inline GetDimensionValuesRequest& WithContext(Context&& value) { SetContext(std::move(value)); return *this;}


    
    inline const Expression& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline GetDimensionValuesRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    
    inline GetDimensionValuesRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline const Aws::Vector<SortDefinition>& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline void SetSortBy(const Aws::Vector<SortDefinition>& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline void SetSortBy(Aws::Vector<SortDefinition>&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline GetDimensionValuesRequest& WithSortBy(const Aws::Vector<SortDefinition>& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline GetDimensionValuesRequest& WithSortBy(Aws::Vector<SortDefinition>&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline GetDimensionValuesRequest& AddSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(value); return *this; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * the <code>SortOrder</code> key are <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p> <p>When you specify a <code>SortBy</code>
     * paramater, the context must be <code>COST_AND_USAGE</code>. Further, when using
     * <code>SortBy</code>, <code>NextPageToken</code> and <code>SearchString</code>
     * aren't supported.</p>
     */
    inline GetDimensionValuesRequest& AddSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(std::move(value)); return *this; }


    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetDimensionValues</code>, MaxResults has an
     * upper limit of 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetDimensionValues</code>, MaxResults has an
     * upper limit of 1000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetDimensionValues</code>, MaxResults has an
     * upper limit of 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetDimensionValues</code>, MaxResults has an
     * upper limit of 1000.</p>
     */
    inline GetDimensionValuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet = false;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Dimension m_dimension;
    bool m_dimensionHasBeenSet = false;

    Context m_context;
    bool m_contextHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<SortDefinition> m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
