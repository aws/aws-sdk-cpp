﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{
  class AWS_SSOADMIN_API ListPermissionSetsResult
  {
  public:
    ListPermissionSetsResult();
    ListPermissionSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPermissionSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissionSets() const{ return m_permissionSets; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline void SetPermissionSets(const Aws::Vector<Aws::String>& value) { m_permissionSets = value; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline void SetPermissionSets(Aws::Vector<Aws::String>&& value) { m_permissionSets = std::move(value); }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline ListPermissionSetsResult& WithPermissionSets(const Aws::Vector<Aws::String>& value) { SetPermissionSets(value); return *this;}

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline ListPermissionSetsResult& WithPermissionSets(Aws::Vector<Aws::String>&& value) { SetPermissionSets(std::move(value)); return *this;}

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline ListPermissionSetsResult& AddPermissionSets(const Aws::String& value) { m_permissionSets.push_back(value); return *this; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline ListPermissionSetsResult& AddPermissionSets(Aws::String&& value) { m_permissionSets.push_back(std::move(value)); return *this; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline ListPermissionSetsResult& AddPermissionSets(const char* value) { m_permissionSets.push_back(value); return *this; }


    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_permissionSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
