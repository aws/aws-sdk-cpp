/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnvironmentStatus.h>
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
  class ListEnvironmentsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironments"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account where you want to list
     * environments.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    ListEnvironmentsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where you want to list environments.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const { return m_awsAccountRegion; }
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }
    template<typename AwsAccountRegionT = Aws::String>
    void SetAwsAccountRegion(AwsAccountRegionT&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::forward<AwsAccountRegionT>(value); }
    template<typename AwsAccountRegionT = Aws::String>
    ListEnvironmentsRequest& WithAwsAccountRegion(AwsAccountRegionT&& value) { SetAwsAccountRegion(std::forward<AwsAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListEnvironmentsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const { return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    void SetEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::forward<EnvironmentBlueprintIdentifierT>(value); }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    ListEnvironmentsRequest& WithEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { SetEnvironmentBlueprintIdentifier(std::forward<EnvironmentBlueprintIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline const Aws::String& GetEnvironmentProfileIdentifier() const { return m_environmentProfileIdentifier; }
    inline bool EnvironmentProfileIdentifierHasBeenSet() const { return m_environmentProfileIdentifierHasBeenSet; }
    template<typename EnvironmentProfileIdentifierT = Aws::String>
    void SetEnvironmentProfileIdentifier(EnvironmentProfileIdentifierT&& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = std::forward<EnvironmentProfileIdentifierT>(value); }
    template<typename EnvironmentProfileIdentifierT = Aws::String>
    ListEnvironmentsRequest& WithEnvironmentProfileIdentifier(EnvironmentProfileIdentifierT&& value) { SetEnvironmentProfileIdentifier(std::forward<EnvironmentProfileIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of environments to return in a single call to
     * <code>ListEnvironments</code>. When the number of environments to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironments</code> to list the next set of environments.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListEnvironmentsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of environments is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of environments, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListEnvironments</code> to list the next set of environments.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    ListEnvironmentsRequest& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the environment.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    ListEnvironmentsRequest& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the environments that you want to list.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListEnvironmentsRequest& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
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

    Aws::String m_environmentProfileIdentifier;
    bool m_environmentProfileIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
