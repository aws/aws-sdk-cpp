/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DimensionValuesWithAttributes.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{
  class GetDimensionValuesResult
  {
  public:
    AWS_COSTEXPLORER_API GetDimensionValuesResult();
    AWS_COSTEXPLORER_API GetDimensionValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetDimensionValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline const Aws::Vector<DimensionValuesWithAttributes>& GetDimensionValues() const{ return m_dimensionValues; }

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline void SetDimensionValues(const Aws::Vector<DimensionValuesWithAttributes>& value) { m_dimensionValues = value; }

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline void SetDimensionValues(Aws::Vector<DimensionValuesWithAttributes>&& value) { m_dimensionValues = std::move(value); }

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline GetDimensionValuesResult& WithDimensionValues(const Aws::Vector<DimensionValuesWithAttributes>& value) { SetDimensionValues(value); return *this;}

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline GetDimensionValuesResult& WithDimensionValues(Aws::Vector<DimensionValuesWithAttributes>&& value) { SetDimensionValues(std::move(value)); return *this;}

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline GetDimensionValuesResult& AddDimensionValues(const DimensionValuesWithAttributes& value) { m_dimensionValues.push_back(value); return *this; }

    /**
     * <p>The filters that you used to filter your request. Some dimensions are
     * available only for a specific context.</p> <p>If you set the context to
     * <code>COST_AND_USAGE</code>, you can use the following dimensions for
     * searching:</p> <ul> <li> <p>AZ - The Availability Zone. An example is
     * <code>us-east-1a</code>.</p> </li> <li> <p>DATABASE_ENGINE - The Amazon
     * Relational Database Service database. Examples are Aurora or MySQL.</p> </li>
     * <li> <p>INSTANCE_TYPE - The type of Amazon EC2 instance. An example is
     * <code>m4.xlarge</code>.</p> </li> <li> <p>LEGAL_ENTITY_NAME - The name of the
     * organization that sells you Amazon Web Services services, such as Amazon Web
     * Services.</p> </li> <li> <p>LINKED_ACCOUNT - The description in the attribute
     * map that includes the full name of the member account. The value field contains
     * the Amazon Web Services ID of the member account.</p> </li> <li>
     * <p>OPERATING_SYSTEM - The operating system. Examples are Windows or Linux.</p>
     * </li> <li> <p>OPERATION - The action performed. Examples include
     * <code>RunInstance</code> and <code>CreateBucket</code>.</p> </li> <li>
     * <p>PLATFORM - The Amazon EC2 operating system. Examples are Windows or
     * Linux.</p> </li> <li> <p>PURCHASE_TYPE - The reservation type of the purchase to
     * which this usage is related. Examples include On-Demand Instances and Standard
     * Reserved Instances.</p> </li> <li> <p>SERVICE - The Amazon Web Services service
     * such as Amazon DynamoDB.</p> </li> <li> <p>USAGE_TYPE - The type of usage. An
     * example is DataTransfer-In-Bytes. The response for the
     * <code>GetDimensionValues</code> operation includes a unit attribute. Examples
     * include GB and Hrs.</p> </li> <li> <p>USAGE_TYPE_GROUP - The grouping of common
     * usage types. An example is Amazon EC2: CloudWatch – Alarms. The response for
     * this operation includes a unit attribute.</p> </li> <li> <p>RECORD_TYPE - The
     * different types of charges such as RI fees, usage costs, tax refunds, and
     * credits.</p> </li> <li> <p>RESOURCE_ID - The unique identifier of the resource.
     * ResourceId is an opt-in feature only available for last 14 days for EC2-Compute
     * Service. You can opt-in by enabling <code>Hourly</code> and <code>Resource Level
     * Data</code> in Cost Management Console preferences.</p> </li> </ul> <p>If you
     * set the context to <code>RESERVATIONS</code>, you can use the following
     * dimensions for searching:</p> <ul> <li> <p>AZ - The Availability Zone. An
     * example is <code>us-east-1a</code>.</p> </li> <li> <p>CACHE_ENGINE - The Amazon
     * ElastiCache operating system. Examples are Windows or Linux.</p> </li> <li>
     * <p>DEPLOYMENT_OPTION - The scope of Amazon Relational Database Service
     * deployments. Valid values are <code>SingleAZ</code> and
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
     * Instance or Compute)</p> </li> <li> <p>PAYMENT_OPTION - Payment option for the
     * given Savings Plans (for example, All Upfront)</p> </li> <li> <p>REGION - The
     * Amazon Web Services Region.</p> </li> <li> <p>INSTANCE_TYPE_FAMILY - The family
     * of instances (For example, <code>m5</code>)</p> </li> <li> <p>LINKED_ACCOUNT -
     * The description in the attribute map that includes the full name of the member
     * account. The value field contains the Amazon Web Services ID of the member
     * account.</p> </li> <li> <p>SAVINGS_PLAN_ARN - The unique identifier for your
     * Savings Plan</p> </li> </ul>
     */
    inline GetDimensionValuesResult& AddDimensionValues(DimensionValuesWithAttributes&& value) { m_dimensionValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of results that Amazon Web Services returned at one time.</p>
     */
    inline int GetReturnSize() const{ return m_returnSize; }

    /**
     * <p>The number of results that Amazon Web Services returned at one time.</p>
     */
    inline void SetReturnSize(int value) { m_returnSize = value; }

    /**
     * <p>The number of results that Amazon Web Services returned at one time.</p>
     */
    inline GetDimensionValuesResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}


    /**
     * <p>The total number of search results.</p>
     */
    inline int GetTotalSize() const{ return m_totalSize; }

    /**
     * <p>The total number of search results.</p>
     */
    inline void SetTotalSize(int value) { m_totalSize = value; }

    /**
     * <p>The total number of search results.</p>
     */
    inline GetDimensionValuesResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}


    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetDimensionValuesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetDimensionValuesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetDimensionValuesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<DimensionValuesWithAttributes> m_dimensionValues;

    int m_returnSize;

    int m_totalSize;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
