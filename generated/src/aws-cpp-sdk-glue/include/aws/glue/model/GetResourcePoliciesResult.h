/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/GluePolicy.h>
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
  class GetResourcePoliciesResult
  {
  public:
    AWS_GLUE_API GetResourcePoliciesResult();
    AWS_GLUE_API GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline const Aws::Vector<GluePolicy>& GetGetResourcePoliciesResponseList() const{ return m_getResourcePoliciesResponseList; }

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline void SetGetResourcePoliciesResponseList(const Aws::Vector<GluePolicy>& value) { m_getResourcePoliciesResponseList = value; }

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline void SetGetResourcePoliciesResponseList(Aws::Vector<GluePolicy>&& value) { m_getResourcePoliciesResponseList = std::move(value); }

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline GetResourcePoliciesResult& WithGetResourcePoliciesResponseList(const Aws::Vector<GluePolicy>& value) { SetGetResourcePoliciesResponseList(value); return *this;}

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline GetResourcePoliciesResult& WithGetResourcePoliciesResponseList(Aws::Vector<GluePolicy>&& value) { SetGetResourcePoliciesResponseList(std::move(value)); return *this;}

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline GetResourcePoliciesResult& AddGetResourcePoliciesResponseList(const GluePolicy& value) { m_getResourcePoliciesResponseList.push_back(value); return *this; }

    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline GetResourcePoliciesResult& AddGetResourcePoliciesResponseList(GluePolicy&& value) { m_getResourcePoliciesResponseList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GluePolicy> m_getResourcePoliciesResponseList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
