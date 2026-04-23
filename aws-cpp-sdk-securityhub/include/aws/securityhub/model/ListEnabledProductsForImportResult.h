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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API ListEnabledProductsForImportResult
  {
  public:
    ListEnabledProductsForImportResult();
    ListEnabledProductsForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEnabledProductsForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProductSubscriptions() const{ return m_productSubscriptions; }

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline void SetProductSubscriptions(const Aws::Vector<Aws::String>& value) { m_productSubscriptions = value; }

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline void SetProductSubscriptions(Aws::Vector<Aws::String>&& value) { m_productSubscriptions = std::move(value); }

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& WithProductSubscriptions(const Aws::Vector<Aws::String>& value) { SetProductSubscriptions(value); return *this;}

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& WithProductSubscriptions(Aws::Vector<Aws::String>&& value) { SetProductSubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(const Aws::String& value) { m_productSubscriptions.push_back(value); return *this; }

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(Aws::String&& value) { m_productSubscriptions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs for the resources that represent your subscriptions to
     * products. </p>
     */
    inline ListEnabledProductsForImportResult& AddProductSubscriptions(const char* value) { m_productSubscriptions.push_back(value); return *this; }


    /**
     * <p>The token that is required for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListEnabledProductsForImportResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_productSubscriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
