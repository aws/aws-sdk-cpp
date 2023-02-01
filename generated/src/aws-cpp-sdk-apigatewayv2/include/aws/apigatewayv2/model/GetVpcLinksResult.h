/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/VpcLink.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class GetVpcLinksResult
  {
  public:
    AWS_APIGATEWAYV2_API GetVpcLinksResult();
    AWS_APIGATEWAYV2_API GetVpcLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetVpcLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of VPC links.</p>
     */
    inline const Aws::Vector<VpcLink>& GetItems() const{ return m_items; }

    /**
     * <p>A collection of VPC links.</p>
     */
    inline void SetItems(const Aws::Vector<VpcLink>& value) { m_items = value; }

    /**
     * <p>A collection of VPC links.</p>
     */
    inline void SetItems(Aws::Vector<VpcLink>&& value) { m_items = std::move(value); }

    /**
     * <p>A collection of VPC links.</p>
     */
    inline GetVpcLinksResult& WithItems(const Aws::Vector<VpcLink>& value) { SetItems(value); return *this;}

    /**
     * <p>A collection of VPC links.</p>
     */
    inline GetVpcLinksResult& WithItems(Aws::Vector<VpcLink>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A collection of VPC links.</p>
     */
    inline GetVpcLinksResult& AddItems(const VpcLink& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A collection of VPC links.</p>
     */
    inline GetVpcLinksResult& AddItems(VpcLink&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetVpcLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetVpcLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetVpcLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VpcLink> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
