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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisionedProductDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/CloudWatchDashboard.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeProvisionedProductResult
  {
  public:
    DescribeProvisionedProductResult();
    DescribeProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the provisioned product.</p>
     */
    inline const ProvisionedProductDetail& GetProvisionedProductDetail() const{ return m_provisionedProductDetail; }

    /**
     * <p>Information about the provisioned product.</p>
     */
    inline void SetProvisionedProductDetail(const ProvisionedProductDetail& value) { m_provisionedProductDetail = value; }

    /**
     * <p>Information about the provisioned product.</p>
     */
    inline void SetProvisionedProductDetail(ProvisionedProductDetail&& value) { m_provisionedProductDetail = std::move(value); }

    /**
     * <p>Information about the provisioned product.</p>
     */
    inline DescribeProvisionedProductResult& WithProvisionedProductDetail(const ProvisionedProductDetail& value) { SetProvisionedProductDetail(value); return *this;}

    /**
     * <p>Information about the provisioned product.</p>
     */
    inline DescribeProvisionedProductResult& WithProvisionedProductDetail(ProvisionedProductDetail&& value) { SetProvisionedProductDetail(std::move(value)); return *this;}


    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline const Aws::Vector<CloudWatchDashboard>& GetCloudWatchDashboards() const{ return m_cloudWatchDashboards; }

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline void SetCloudWatchDashboards(const Aws::Vector<CloudWatchDashboard>& value) { m_cloudWatchDashboards = value; }

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline void SetCloudWatchDashboards(Aws::Vector<CloudWatchDashboard>&& value) { m_cloudWatchDashboards = std::move(value); }

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline DescribeProvisionedProductResult& WithCloudWatchDashboards(const Aws::Vector<CloudWatchDashboard>& value) { SetCloudWatchDashboards(value); return *this;}

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline DescribeProvisionedProductResult& WithCloudWatchDashboards(Aws::Vector<CloudWatchDashboard>&& value) { SetCloudWatchDashboards(std::move(value)); return *this;}

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline DescribeProvisionedProductResult& AddCloudWatchDashboards(const CloudWatchDashboard& value) { m_cloudWatchDashboards.push_back(value); return *this; }

    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline DescribeProvisionedProductResult& AddCloudWatchDashboards(CloudWatchDashboard&& value) { m_cloudWatchDashboards.push_back(std::move(value)); return *this; }

  private:

    ProvisionedProductDetail m_provisionedProductDetail;

    Aws::Vector<CloudWatchDashboard> m_cloudWatchDashboards;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
