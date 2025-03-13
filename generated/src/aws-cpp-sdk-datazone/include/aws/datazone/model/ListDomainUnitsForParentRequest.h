/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListDomainUnitsForParentRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListDomainUnitsForParentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainUnitsForParent"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the domain in which you want to list domain units for a parent
     * domain unit.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListDomainUnitsForParentRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of domain units to return in a single call to
     * ListDomainUnitsForParent. When the number of domain units to be listed is
     * greater than the value of MaxResults, the response contains a NextToken value
     * that you can use in a subsequent call to ListDomainUnitsForParent to list the
     * next set of domain units.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDomainUnitsForParentRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of domain units is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of domain units, the response includes a pagination
     * token named NextToken. You can specify this NextToken value in a subsequent call
     * to ListDomainUnitsForParent to list the next set of domain units.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainUnitsForParentRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent domain unit.</p>
     */
    inline const Aws::String& GetParentDomainUnitIdentifier() const { return m_parentDomainUnitIdentifier; }
    inline bool ParentDomainUnitIdentifierHasBeenSet() const { return m_parentDomainUnitIdentifierHasBeenSet; }
    template<typename ParentDomainUnitIdentifierT = Aws::String>
    void SetParentDomainUnitIdentifier(ParentDomainUnitIdentifierT&& value) { m_parentDomainUnitIdentifierHasBeenSet = true; m_parentDomainUnitIdentifier = std::forward<ParentDomainUnitIdentifierT>(value); }
    template<typename ParentDomainUnitIdentifierT = Aws::String>
    ListDomainUnitsForParentRequest& WithParentDomainUnitIdentifier(ParentDomainUnitIdentifierT&& value) { SetParentDomainUnitIdentifier(std::forward<ParentDomainUnitIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_parentDomainUnitIdentifier;
    bool m_parentDomainUnitIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
