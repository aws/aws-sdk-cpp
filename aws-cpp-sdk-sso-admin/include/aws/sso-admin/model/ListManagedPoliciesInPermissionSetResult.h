/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AttachedManagedPolicy.h>
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
  class ListManagedPoliciesInPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult();
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline const Aws::Vector<AttachedManagedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AttachedManagedPolicy>& value) { m_attachedManagedPolicies = value; }

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AttachedManagedPolicy>&& value) { m_attachedManagedPolicies = std::move(value); }

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& WithAttachedManagedPolicies(const Aws::Vector<AttachedManagedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& WithAttachedManagedPolicies(Aws::Vector<AttachedManagedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& AddAttachedManagedPolicies(const AttachedManagedPolicy& value) { m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& AddAttachedManagedPolicies(AttachedManagedPolicy&& value) { m_attachedManagedPolicies.push_back(std::move(value)); return *this; }


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
    inline ListManagedPoliciesInPermissionSetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListManagedPoliciesInPermissionSetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttachedManagedPolicy> m_attachedManagedPolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
