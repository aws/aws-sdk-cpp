/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityEvaluationRunAdditionalRunOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StartDataQualityRulesetEvaluationRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartDataQualityRulesetEvaluationRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataQualityRulesetEvaluationRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    StartDataQualityRulesetEvaluationRunRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    StartDataQualityRulesetEvaluationRunRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline StartDataQualityRulesetEvaluationRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline StartDataQualityRulesetEvaluationRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartDataQualityRulesetEvaluationRunRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline const DataQualityEvaluationRunAdditionalRunOptions& GetAdditionalRunOptions() const { return m_additionalRunOptions; }
    inline bool AdditionalRunOptionsHasBeenSet() const { return m_additionalRunOptionsHasBeenSet; }
    template<typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
    void SetAdditionalRunOptions(AdditionalRunOptionsT&& value) { m_additionalRunOptionsHasBeenSet = true; m_additionalRunOptions = std::forward<AdditionalRunOptionsT>(value); }
    template<typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
    StartDataQualityRulesetEvaluationRunRequest& WithAdditionalRunOptions(AdditionalRunOptionsT&& value) { SetAdditionalRunOptions(std::forward<AdditionalRunOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ruleset names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesetNames() const { return m_rulesetNames; }
    inline bool RulesetNamesHasBeenSet() const { return m_rulesetNamesHasBeenSet; }
    template<typename RulesetNamesT = Aws::Vector<Aws::String>>
    void SetRulesetNames(RulesetNamesT&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames = std::forward<RulesetNamesT>(value); }
    template<typename RulesetNamesT = Aws::Vector<Aws::String>>
    StartDataQualityRulesetEvaluationRunRequest& WithRulesetNames(RulesetNamesT&& value) { SetRulesetNames(std::forward<RulesetNamesT>(value)); return *this;}
    template<typename RulesetNamesT = Aws::String>
    StartDataQualityRulesetEvaluationRunRequest& AddRulesetNames(RulesetNamesT&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames.emplace_back(std::forward<RulesetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of reference strings to additional data sources you can specify for an
     * evaluation run.</p>
     */
    inline const Aws::Map<Aws::String, DataSource>& GetAdditionalDataSources() const { return m_additionalDataSources; }
    inline bool AdditionalDataSourcesHasBeenSet() const { return m_additionalDataSourcesHasBeenSet; }
    template<typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
    void SetAdditionalDataSources(AdditionalDataSourcesT&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources = std::forward<AdditionalDataSourcesT>(value); }
    template<typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
    StartDataQualityRulesetEvaluationRunRequest& WithAdditionalDataSources(AdditionalDataSourcesT&& value) { SetAdditionalDataSources(std::forward<AdditionalDataSourcesT>(value)); return *this;}
    template<typename AdditionalDataSourcesKeyT = Aws::String, typename AdditionalDataSourcesValueT = DataSource>
    StartDataQualityRulesetEvaluationRunRequest& AddAdditionalDataSources(AdditionalDataSourcesKeyT&& key, AdditionalDataSourcesValueT&& value) {
      m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(std::forward<AdditionalDataSourcesKeyT>(key), std::forward<AdditionalDataSourcesValueT>(value)); return *this;
    }
    ///@}
  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataQualityEvaluationRunAdditionalRunOptions m_additionalRunOptions;
    bool m_additionalRunOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesetNames;
    bool m_rulesetNamesHasBeenSet = false;

    Aws::Map<Aws::String, DataSource> m_additionalDataSources;
    bool m_additionalDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
