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
  class ListEnvironmentBlueprintsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListEnvironmentBlueprintsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironmentBlueprints"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>Specifies whether the environment blueprint is managed by Amazon
     * DataZone.</p>
     */
    inline bool GetManaged() const{ return m_managed; }

    /**
     * <p>Specifies whether the environment blueprint is managed by Amazon
     * DataZone.</p>
     */
    inline bool ManagedHasBeenSet() const { return m_managedHasBeenSet; }

    /**
     * <p>Specifies whether the environment blueprint is managed by Amazon
     * DataZone.</p>
     */
    inline void SetManaged(bool value) { m_managedHasBeenSet = true; m_managed = value; }

    /**
     * <p>Specifies whether the environment blueprint is managed by Amazon
     * DataZone.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithManaged(bool value) { SetManaged(value); return *this;}


    /**
     * <p>The maximum number of blueprints to return in a single call to
     * <code>ListEnvironmentBlueprints</code>. When the number of blueprints to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentBlueprints</code> to list the next set of blueprints.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of blueprints to return in a single call to
     * <code>ListEnvironmentBlueprints</code>. When the number of blueprints to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentBlueprints</code> to list the next set of blueprints.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of blueprints to return in a single call to
     * <code>ListEnvironmentBlueprints</code>. When the number of blueprints to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentBlueprints</code> to list the next set of blueprints.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of blueprints to return in a single call to
     * <code>ListEnvironmentBlueprints</code>. When the number of blueprints to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentBlueprints</code> to list the next set of blueprints.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of blueprints in the environment is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of blueprints in
     * the environment, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListEnvironmentBlueprints</code>to list the next set of
     * blueprints.</p>
     */
    inline ListEnvironmentBlueprintsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    bool m_managed;
    bool m_managedHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
