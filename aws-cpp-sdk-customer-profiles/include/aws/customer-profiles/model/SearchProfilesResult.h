﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Profile.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class AWS_CUSTOMERPROFILES_API SearchProfilesResult
  {
  public:
    SearchProfilesResult();
    SearchProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline const Aws::Vector<Profile>& GetItems() const{ return m_items; }

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline void SetItems(const Aws::Vector<Profile>& value) { m_items = value; }

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline void SetItems(Aws::Vector<Profile>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline SearchProfilesResult& WithItems(const Aws::Vector<Profile>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline SearchProfilesResult& WithItems(Aws::Vector<Profile>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline SearchProfilesResult& AddItems(const Profile& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of SearchProfiles instances.</p>
     */
    inline SearchProfilesResult& AddItems(Profile&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous SearchProfiles API call.</p>
     */
    inline SearchProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Profile> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
