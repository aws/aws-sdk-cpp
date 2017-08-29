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
     * <p>Detailed provisioned product information.</p>
     */
    inline const ProvisionedProductDetail& GetProvisionedProductDetail() const{ return m_provisionedProductDetail; }

    /**
     * <p>Detailed provisioned product information.</p>
     */
    inline void SetProvisionedProductDetail(const ProvisionedProductDetail& value) { m_provisionedProductDetail = value; }

    /**
     * <p>Detailed provisioned product information.</p>
     */
    inline void SetProvisionedProductDetail(ProvisionedProductDetail&& value) { m_provisionedProductDetail = std::move(value); }

    /**
     * <p>Detailed provisioned product information.</p>
     */
    inline DescribeProvisionedProductResult& WithProvisionedProductDetail(const ProvisionedProductDetail& value) { SetProvisionedProductDetail(value); return *this;}

    /**
     * <p>Detailed provisioned product information.</p>
     */
    inline DescribeProvisionedProductResult& WithProvisionedProductDetail(ProvisionedProductDetail&& value) { SetProvisionedProductDetail(std::move(value)); return *this;}

  private:

    ProvisionedProductDetail m_provisionedProductDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
