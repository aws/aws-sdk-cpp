/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API ListResourcesInProtectionGroupResult
  {
  public:
    ListResourcesInProtectionGroupResult();
    ListResourcesInProtectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourcesInProtectionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline ListResourcesInProtectionGroupResult& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline ListResourcesInProtectionGroupResult& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline ListResourcesInProtectionGroupResult& AddResourceArns(const Aws::String& value) { m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline ListResourcesInProtectionGroupResult& AddResourceArns(Aws::String&& value) { m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources that are included in the
     * protection group.</p>
     */
    inline ListResourcesInProtectionGroupResult& AddResourceArns(const char* value) { m_resourceArns.push_back(value); return *this; }


    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline ListResourcesInProtectionGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline ListResourcesInProtectionGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * resources in the protection group than the value of MaxResults, AWS Shield
     * Advanced returns this token that you can use in your next request, to get the
     * next batch of objects. </p>
     */
    inline ListResourcesInProtectionGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
