﻿/**
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
  class ListEnvironmentProfilesRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListEnvironmentProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironmentProfiles"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account where you want to list
     * environment profiles.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline ListEnvironmentProfilesRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where you want to list environment
     * profiles.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = value; }
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::move(value); }
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion.assign(value); }
    inline ListEnvironmentProfilesRequest& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListEnvironmentProfilesRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the blueprint that was used to create the environment
     * profiles that you want to list.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }
    inline ListEnvironmentProfilesRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of environment profiles to return in a single call to
     * <code>ListEnvironmentProfiles</code>. When the number of environment profiles to
     * be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentProfiles</code> to list the next set of environment
     * profiles.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListEnvironmentProfilesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of environment profiles is greater than the default value for
     * the <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of environment profiles,
     * the response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListEnvironmentProfiles</code> to list the next set of environment
     * profiles.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEnvironmentProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }
    inline ListEnvironmentProfilesRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}
    inline ListEnvironmentProfilesRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}
    inline ListEnvironmentProfilesRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
