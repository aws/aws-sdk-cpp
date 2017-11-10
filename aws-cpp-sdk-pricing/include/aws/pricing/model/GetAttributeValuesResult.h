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
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing/model/AttributeValue.h>
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
namespace Pricing
{
namespace Model
{
  class AWS_PRICING_API GetAttributeValuesResult
  {
  public:
    GetAttributeValuesResult();
    GetAttributeValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAttributeValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetAttributeValues() const{ return m_attributeValues; }

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline void SetAttributeValues(const Aws::Vector<AttributeValue>& value) { m_attributeValues = value; }

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline void SetAttributeValues(Aws::Vector<AttributeValue>&& value) { m_attributeValues = std::move(value); }

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline GetAttributeValuesResult& WithAttributeValues(const Aws::Vector<AttributeValue>& value) { SetAttributeValues(value); return *this;}

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline GetAttributeValuesResult& WithAttributeValues(Aws::Vector<AttributeValue>&& value) { SetAttributeValues(std::move(value)); return *this;}

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline GetAttributeValuesResult& AddAttributeValues(const AttributeValue& value) { m_attributeValues.push_back(value); return *this; }

    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline GetAttributeValuesResult& AddAttributeValues(AttributeValue&& value) { m_attributeValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetAttributeValuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetAttributeValuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetAttributeValuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttributeValue> m_attributeValues;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
