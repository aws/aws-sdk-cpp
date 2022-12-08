/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/DomainAssociation.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the list domain association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociationsResult">AWS
   * API Reference</a></p>
   */
  class ListDomainAssociationsResult
  {
  public:
    AWS_AMPLIFY_API ListDomainAssociationsResult();
    AWS_AMPLIFY_API ListDomainAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListDomainAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of domain associations. </p>
     */
    inline const Aws::Vector<DomainAssociation>& GetDomainAssociations() const{ return m_domainAssociations; }

    /**
     * <p> A list of domain associations. </p>
     */
    inline void SetDomainAssociations(const Aws::Vector<DomainAssociation>& value) { m_domainAssociations = value; }

    /**
     * <p> A list of domain associations. </p>
     */
    inline void SetDomainAssociations(Aws::Vector<DomainAssociation>&& value) { m_domainAssociations = std::move(value); }

    /**
     * <p> A list of domain associations. </p>
     */
    inline ListDomainAssociationsResult& WithDomainAssociations(const Aws::Vector<DomainAssociation>& value) { SetDomainAssociations(value); return *this;}

    /**
     * <p> A list of domain associations. </p>
     */
    inline ListDomainAssociationsResult& WithDomainAssociations(Aws::Vector<DomainAssociation>&& value) { SetDomainAssociations(std::move(value)); return *this;}

    /**
     * <p> A list of domain associations. </p>
     */
    inline ListDomainAssociationsResult& AddDomainAssociations(const DomainAssociation& value) { m_domainAssociations.push_back(value); return *this; }

    /**
     * <p> A list of domain associations. </p>
     */
    inline ListDomainAssociationsResult& AddDomainAssociations(DomainAssociation&& value) { m_domainAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline ListDomainAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline ListDomainAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline ListDomainAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainAssociation> m_domainAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
