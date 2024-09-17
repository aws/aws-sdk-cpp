/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataZoneEntityType.h>
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
  class ListEntityOwnersRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListEntityOwnersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntityOwners"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the domain where you want to list entity owners.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListEntityOwnersRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListEntityOwnersRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListEntityOwnersRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity that you want to list.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }
    inline ListEntityOwnersRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline ListEntityOwnersRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline ListEntityOwnersRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity that you want to list.</p>
     */
    inline const DataZoneEntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const DataZoneEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(DataZoneEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline ListEntityOwnersRequest& WithEntityType(const DataZoneEntityType& value) { SetEntityType(value); return *this;}
    inline ListEntityOwnersRequest& WithEntityType(DataZoneEntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of entities to return in a single call to
     * <code>ListEntityOwners</code>. When the number of entities to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEntityOwners</code> to list the next set of entities.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEntityOwnersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of entities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of entities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListEntityOwners</code> to list the next set of entities.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEntityOwnersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntityOwnersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntityOwnersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    DataZoneEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
