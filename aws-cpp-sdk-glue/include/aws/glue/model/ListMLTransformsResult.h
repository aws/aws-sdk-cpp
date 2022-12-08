/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class ListMLTransformsResult
  {
  public:
    AWS_GLUE_API ListMLTransformsResult();
    AWS_GLUE_API ListMLTransformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListMLTransformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransformIds() const{ return m_transformIds; }

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline void SetTransformIds(const Aws::Vector<Aws::String>& value) { m_transformIds = value; }

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline void SetTransformIds(Aws::Vector<Aws::String>&& value) { m_transformIds = std::move(value); }

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline ListMLTransformsResult& WithTransformIds(const Aws::Vector<Aws::String>& value) { SetTransformIds(value); return *this;}

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline ListMLTransformsResult& WithTransformIds(Aws::Vector<Aws::String>&& value) { SetTransformIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline ListMLTransformsResult& AddTransformIds(const Aws::String& value) { m_transformIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline ListMLTransformsResult& AddTransformIds(Aws::String&& value) { m_transformIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline ListMLTransformsResult& AddTransformIds(const char* value) { m_transformIds.push_back(value); return *this; }


    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListMLTransformsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListMLTransformsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListMLTransformsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_transformIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
