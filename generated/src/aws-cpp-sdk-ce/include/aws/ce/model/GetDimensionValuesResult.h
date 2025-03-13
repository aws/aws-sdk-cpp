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
    AWS_COSTEXPLORER_API GetDimensionValuesResult() = default;
    AWS_COSTEXPLORER_API GetDimensionValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetDimensionValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
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
    inline const Aws::Vector<DimensionValuesWithAttributes>& GetDimensionValues() const { return m_dimensionValues; }
    template<typename DimensionValuesT = Aws::Vector<DimensionValuesWithAttributes>>
    void SetDimensionValues(DimensionValuesT&& value) { m_dimensionValuesHasBeenSet = true; m_dimensionValues = std::forward<DimensionValuesT>(value); }
    template<typename DimensionValuesT = Aws::Vector<DimensionValuesWithAttributes>>
    GetDimensionValuesResult& WithDimensionValues(DimensionValuesT&& value) { SetDimensionValues(std::forward<DimensionValuesT>(value)); return *this;}
    template<typename DimensionValuesT = DimensionValuesWithAttributes>
    GetDimensionValuesResult& AddDimensionValues(DimensionValuesT&& value) { m_dimensionValuesHasBeenSet = true; m_dimensionValues.emplace_back(std::forward<DimensionValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of results that Amazon Web Services returned at one time.</p>
     */
    inline int GetReturnSize() const { return m_returnSize; }
    inline void SetReturnSize(int value) { m_returnSizeHasBeenSet = true; m_returnSize = value; }
    inline GetDimensionValuesResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of search results.</p>
     */
    inline int GetTotalSize() const { return m_totalSize; }
    inline void SetTotalSize(int value) { m_totalSizeHasBeenSet = true; m_totalSize = value; }
    inline GetDimensionValuesResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetDimensionValuesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDimensionValuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DimensionValuesWithAttributes> m_dimensionValues;
    bool m_dimensionValuesHasBeenSet = false;

    int m_returnSize{0};
    bool m_returnSizeHasBeenSet = false;

    int m_totalSize{0};
    bool m_totalSizeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
