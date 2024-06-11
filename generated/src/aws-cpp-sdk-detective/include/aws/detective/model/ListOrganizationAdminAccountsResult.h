﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/Administrator.h>
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
namespace Detective
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_DETECTIVE_API ListOrganizationAdminAccountsResult();
    AWS_DETECTIVE_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Detective administrator accounts.</p>
     */
    inline const Aws::Vector<Administrator>& GetAdministrators() const{ return m_administrators; }
    inline void SetAdministrators(const Aws::Vector<Administrator>& value) { m_administrators = value; }
    inline void SetAdministrators(Aws::Vector<Administrator>&& value) { m_administrators = std::move(value); }
    inline ListOrganizationAdminAccountsResult& WithAdministrators(const Aws::Vector<Administrator>& value) { SetAdministrators(value); return *this;}
    inline ListOrganizationAdminAccountsResult& WithAdministrators(Aws::Vector<Administrator>&& value) { SetAdministrators(std::move(value)); return *this;}
    inline ListOrganizationAdminAccountsResult& AddAdministrators(const Administrator& value) { m_administrators.push_back(value); return *this; }
    inline ListOrganizationAdminAccountsResult& AddAdministrators(Administrator&& value) { m_administrators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more accounts remaining in the results, then this is the
     * pagination token to use to request the next page of accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOrganizationAdminAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOrganizationAdminAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOrganizationAdminAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOrganizationAdminAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOrganizationAdminAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOrganizationAdminAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Administrator> m_administrators;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
