/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/DependencyConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/MetricSourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class ListServiceLevelObjectivesRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceLevelObjectives"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONSIGNALS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>You can use this optional field to specify which services you want to
     * retrieve SLO information for.</p> <p>This is a string-to-string map. It can
     * include the following fields.</p> <ul> <li> <p> <code>Type</code> designates the
     * type of object this is.</p> </li> <li> <p> <code>ResourceType</code> specifies
     * the type of the resource. This field is used only when the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
     * name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ListServiceLevelObjectivesRequest& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    template<typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
    ListServiceLevelObjectivesRequest& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
      m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the operation that this SLO is associated with.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    ListServiceLevelObjectivesRequest& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the dependency using the <code>DependencyKeyAttributes</code> and
     * <code>DependencyOperationName</code>. </p>
     */
    inline const DependencyConfig& GetDependencyConfig() const { return m_dependencyConfig; }
    inline bool DependencyConfigHasBeenSet() const { return m_dependencyConfigHasBeenSet; }
    template<typename DependencyConfigT = DependencyConfig>
    void SetDependencyConfig(DependencyConfigT&& value) { m_dependencyConfigHasBeenSet = true; m_dependencyConfig = std::forward<DependencyConfigT>(value); }
    template<typename DependencyConfigT = DependencyConfig>
    ListServiceLevelObjectivesRequest& WithDependencyConfig(DependencyConfigT&& value) { SetDependencyConfig(std::forward<DependencyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in one operation. If you omit this
     * parameter, the default of 50 is used.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceLevelObjectivesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of service level objectives.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceLevelObjectivesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this optional field to only include SLOs with the specified metric source
     * types in the output. Supported types are:</p> <ul> <li> <p>Service operation</p>
     * </li> <li> <p>Service dependency</p> </li> <li> <p>CloudWatch metric</p> </li>
     * </ul>
     */
    inline const Aws::Vector<MetricSourceType>& GetMetricSourceTypes() const { return m_metricSourceTypes; }
    inline bool MetricSourceTypesHasBeenSet() const { return m_metricSourceTypesHasBeenSet; }
    template<typename MetricSourceTypesT = Aws::Vector<MetricSourceType>>
    void SetMetricSourceTypes(MetricSourceTypesT&& value) { m_metricSourceTypesHasBeenSet = true; m_metricSourceTypes = std::forward<MetricSourceTypesT>(value); }
    template<typename MetricSourceTypesT = Aws::Vector<MetricSourceType>>
    ListServiceLevelObjectivesRequest& WithMetricSourceTypes(MetricSourceTypesT&& value) { SetMetricSourceTypes(std::forward<MetricSourceTypesT>(value)); return *this;}
    inline ListServiceLevelObjectivesRequest& AddMetricSourceTypes(MetricSourceType value) { m_metricSourceTypesHasBeenSet = true; m_metricSourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you are using this operation in a monitoring account, specify
     * <code>true</code> to include SLO from source accounts in the returned data.
     * <pre><code> &lt;/p&gt; &lt;p&gt;When you are monitoring an account, you can use
     * Amazon Web Services account ID in &lt;code&gt;KeyAttribute&lt;/code&gt; filter
     * for service source account and &lt;code&gt;SloOwnerawsaccountID&lt;/code&gt; for
     * SLO source account with &lt;code&gt;IncludeLinkedAccounts&lt;/code&gt; to filter
     * the returned data to only a single source account. &lt;/p&gt; </code></pre>
     */
    inline bool GetIncludeLinkedAccounts() const { return m_includeLinkedAccounts; }
    inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }
    inline void SetIncludeLinkedAccounts(bool value) { m_includeLinkedAccountsHasBeenSet = true; m_includeLinkedAccounts = value; }
    inline ListServiceLevelObjectivesRequest& WithIncludeLinkedAccounts(bool value) { SetIncludeLinkedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>SLO's Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetSloOwnerAwsAccountId() const { return m_sloOwnerAwsAccountId; }
    inline bool SloOwnerAwsAccountIdHasBeenSet() const { return m_sloOwnerAwsAccountIdHasBeenSet; }
    template<typename SloOwnerAwsAccountIdT = Aws::String>
    void SetSloOwnerAwsAccountId(SloOwnerAwsAccountIdT&& value) { m_sloOwnerAwsAccountIdHasBeenSet = true; m_sloOwnerAwsAccountId = std::forward<SloOwnerAwsAccountIdT>(value); }
    template<typename SloOwnerAwsAccountIdT = Aws::String>
    ListServiceLevelObjectivesRequest& WithSloOwnerAwsAccountId(SloOwnerAwsAccountIdT&& value) { SetSloOwnerAwsAccountId(std::forward<SloOwnerAwsAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    DependencyConfig m_dependencyConfig;
    bool m_dependencyConfigHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MetricSourceType> m_metricSourceTypes;
    bool m_metricSourceTypesHasBeenSet = false;

    bool m_includeLinkedAccounts{false};
    bool m_includeLinkedAccountsHasBeenSet = false;

    Aws::String m_sloOwnerAwsAccountId;
    bool m_sloOwnerAwsAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
