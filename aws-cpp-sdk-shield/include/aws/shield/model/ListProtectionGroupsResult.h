/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectionGroup.h>
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
  class AWS_SHIELD_API ListProtectionGroupsResult
  {
  public:
    ListProtectionGroupsResult();
    ListProtectionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProtectionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<ProtectionGroup>& GetProtectionGroups() const{ return m_protectionGroups; }

    /**
     * <p/>
     */
    inline void SetProtectionGroups(const Aws::Vector<ProtectionGroup>& value) { m_protectionGroups = value; }

    /**
     * <p/>
     */
    inline void SetProtectionGroups(Aws::Vector<ProtectionGroup>&& value) { m_protectionGroups = std::move(value); }

    /**
     * <p/>
     */
    inline ListProtectionGroupsResult& WithProtectionGroups(const Aws::Vector<ProtectionGroup>& value) { SetProtectionGroups(value); return *this;}

    /**
     * <p/>
     */
    inline ListProtectionGroupsResult& WithProtectionGroups(Aws::Vector<ProtectionGroup>&& value) { SetProtectionGroups(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListProtectionGroupsResult& AddProtectionGroups(const ProtectionGroup& value) { m_protectionGroups.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListProtectionGroupsResult& AddProtectionGroups(ProtectionGroup&& value) { m_protectionGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline ListProtectionGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline ListProtectionGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * protection groups than the value of MaxResults, AWS Shield Advanced returns this
     * token that you can use in your next request, to get the next batch of objects.
     * </p>
     */
    inline ListProtectionGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProtectionGroup> m_protectionGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
