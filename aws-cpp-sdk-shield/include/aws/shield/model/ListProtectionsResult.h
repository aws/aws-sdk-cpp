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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/Protection.h>
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
  class AWS_SHIELD_API ListProtectionsResult
  {
  public:
    ListProtectionsResult();
    ListProtectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProtectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline const Aws::Vector<Protection>& GetProtections() const{ return m_protections; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline void SetProtections(const Aws::Vector<Protection>& value) { m_protections = value; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline void SetProtections(Aws::Vector<Protection>&& value) { m_protections = std::move(value); }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& WithProtections(const Aws::Vector<Protection>& value) { SetProtections(value); return *this;}

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& WithProtections(Aws::Vector<Protection>&& value) { SetProtections(std::move(value)); return *this;}

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& AddProtections(const Protection& value) { m_protections.push_back(value); return *this; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& AddProtections(Protection&& value) { m_protections.push_back(std::move(value)); return *this; }


    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListProtectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListProtectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * Protections than the value of MaxResults, AWS Shield Advanced returns a
     * NextToken value in the response that allows you to list another group of
     * Protections. For the second and subsequent ListProtections requests, specify the
     * value of NextToken from the previous response to get information about another
     * batch of Protections.</p> <p>AWS WAF might return the list of <a>Protection</a>
     * objects in batches smaller than the number specified by MaxResults. If there are
     * more <a>Protection</a> objects to return, AWS WAF will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListProtectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Protection> m_protections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
