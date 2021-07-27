/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult
  {
  public:
    ListCrossAccountAuthorizationsResult();
    ListCrossAccountAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCrossAccountAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of CrossAccountAuthorizations
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountAuthorizations() const{ return m_crossAccountAuthorizations; }

    /**
     * A list of CrossAccountAuthorizations
     */
    inline void SetCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { m_crossAccountAuthorizations = value; }

    /**
     * A list of CrossAccountAuthorizations
     */
    inline void SetCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { m_crossAccountAuthorizations = std::move(value); }

    /**
     * A list of CrossAccountAuthorizations
     */
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { SetCrossAccountAuthorizations(value); return *this;}

    /**
     * A list of CrossAccountAuthorizations
     */
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { SetCrossAccountAuthorizations(std::move(value)); return *this;}

    /**
     * A list of CrossAccountAuthorizations
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const Aws::String& value) { m_crossAccountAuthorizations.push_back(value); return *this; }

    /**
     * A list of CrossAccountAuthorizations
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(Aws::String&& value) { m_crossAccountAuthorizations.push_back(std::move(value)); return *this; }

    /**
     * A list of CrossAccountAuthorizations
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const char* value) { m_crossAccountAuthorizations.push_back(value); return *this; }


    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_crossAccountAuthorizations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
