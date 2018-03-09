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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductAttribute.h>
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
  class AWS_SERVICECATALOG_API SearchProvisionedProductsResult
  {
  public:
    SearchProvisionedProductsResult();
    SearchProvisionedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchProvisionedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the provisioned products.</p>
     */
    inline const Aws::Vector<ProvisionedProductAttribute>& GetProvisionedProducts() const{ return m_provisionedProducts; }

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline void SetProvisionedProducts(const Aws::Vector<ProvisionedProductAttribute>& value) { m_provisionedProducts = value; }

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline void SetProvisionedProducts(Aws::Vector<ProvisionedProductAttribute>&& value) { m_provisionedProducts = std::move(value); }

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline SearchProvisionedProductsResult& WithProvisionedProducts(const Aws::Vector<ProvisionedProductAttribute>& value) { SetProvisionedProducts(value); return *this;}

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline SearchProvisionedProductsResult& WithProvisionedProducts(Aws::Vector<ProvisionedProductAttribute>&& value) { SetProvisionedProducts(std::move(value)); return *this;}

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline SearchProvisionedProductsResult& AddProvisionedProducts(const ProvisionedProductAttribute& value) { m_provisionedProducts.push_back(value); return *this; }

    /**
     * <p>Information about the provisioned products.</p>
     */
    inline SearchProvisionedProductsResult& AddProvisionedProducts(ProvisionedProductAttribute&& value) { m_provisionedProducts.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of provisioned products found.</p>
     */
    inline int GetTotalResultsCount() const{ return m_totalResultsCount; }

    /**
     * <p>The number of provisioned products found.</p>
     */
    inline void SetTotalResultsCount(int value) { m_totalResultsCount = value; }

    /**
     * <p>The number of provisioned products found.</p>
     */
    inline SearchProvisionedProductsResult& WithTotalResultsCount(int value) { SetTotalResultsCount(value); return *this;}


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProvisionedProductsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProvisionedProductsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProvisionedProductsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProvisionedProductAttribute> m_provisionedProducts;

    int m_totalResultsCount;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
