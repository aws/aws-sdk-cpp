/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Dimension.h>
#include <aws/ce/model/Context.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API GetDimensionValuesRequest : public CostExplorerRequest
  {
  public:
    GetDimensionValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDimensionValues"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetDimensionValuesRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetDimensionValuesRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
     */
    inline const Dimension& GetDimension() const{ return m_dimension; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
     */
    inline void SetDimension(const Dimension& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
     */
    inline void SetDimension(Dimension&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
     */
    inline GetDimensionValuesRequest& WithDimension(const Dimension& value) { SetDimension(value); return *this;}

    /**
     * <p>The name of the dimension. Each <code>Dimension</code> is available for a
     * different <code>Context</code>. For more information, see
     * <code>Context</code>.</p>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
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
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you AWS services, such as Amazon Web Services.</p> </li>
     * <li> <p>LINKED_ACCOUNT - The description in the attribute map that includes the
     * full name of the member account. The value field contains the AWS ID of the
     * member account.</p> </li> <li> <p>OPERATING_SYSTEM - The operating system.
     * Examples are Windows or Linux.</p> </li> <li> <p>OPERATION - The action
     * performed. Examples include <code>RunInstance</code> and
     * <code>CreateBucket</code>.</p> </li> <li> <p>PLATFORM - The Amazon EC2 operating
     * system. Examples are Windows or Linux.</p> </li> <li> <p>PURCHASE_TYPE - The
     * reservation type of the purchase to which this usage is related. Examples
     * include On-Demand Instances and Standard Reserved Instances.</p> </li> <li>
     * <p>SERVICE - The AWS service such as Amazon DynamoDB.</p> </li> <li>
     * <p>USAGE_TYPE - The type of usage. An example is DataTransfer-In-Bytes. The
     * response for the <code>GetDimensionValues</code> operation includes a unit
     * attribute. Examples include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The
     * grouping of common usage types. An example is Amazon EC2: CloudWatch – Alarms.
     * The response for this operation includes a unit attribute.</p> </li> <li>
     * <p>RECORD_TYPE - The different types of charges such as RI fees, usage costs,
     * tax refunds, and credits.</p> </li> </ul> <p>If you set the context to
     * <code>RESERVATIONS</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon ElastiCache
     * operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
     * <code>MultiAZ</code>.</p> </li> <li> <p>INSTANCE_TYPE - The type of Amazon EC2
     * instance. An example is <code>m4.xlarge</code>.</p> </li> <li> <p>LINKED_ACCOUNT
     * - The description in the attribute map that includes the full name of the member
     * account. The value field contains the AWS ID of the member account.</p> </li>
     * <li> <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>REGION - The AWS Region.</p> </li> <li> <p>SCOPE
     * (Utilization only) - The scope of a Reserved Instance (RI). Values are regional
     * or a single Availability Zone.</p> </li> <li> <p>TAG (Coverage only) - The tags
     * that are associated with a Reserved Instance (RI).</p> </li> <li> <p>TENANCY -
     * The tenancy of a resource. Examples are shared or dedicated.</p> </li> </ul>
     */
    inline GetDimensionValuesRequest& WithContext(Context&& value) { SetContext(std::move(value)); return *this;}


    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetDimensionValuesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Dimension m_dimension;
    bool m_dimensionHasBeenSet;

    Context m_context;
    bool m_contextHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
