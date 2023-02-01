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
    AWS_GLUE_API StartDataQualityRulesetEvaluationRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataQualityRulesetEvaluationRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source (Glue table) associated with this run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline const DataQualityEvaluationRunAdditionalRunOptions& GetAdditionalRunOptions() const{ return m_additionalRunOptions; }

    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline bool AdditionalRunOptionsHasBeenSet() const { return m_additionalRunOptionsHasBeenSet; }

    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline void SetAdditionalRunOptions(const DataQualityEvaluationRunAdditionalRunOptions& value) { m_additionalRunOptionsHasBeenSet = true; m_additionalRunOptions = value; }

    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline void SetAdditionalRunOptions(DataQualityEvaluationRunAdditionalRunOptions&& value) { m_additionalRunOptionsHasBeenSet = true; m_additionalRunOptions = std::move(value); }

    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithAdditionalRunOptions(const DataQualityEvaluationRunAdditionalRunOptions& value) { SetAdditionalRunOptions(value); return *this;}

    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithAdditionalRunOptions(DataQualityEvaluationRunAdditionalRunOptions&& value) { SetAdditionalRunOptions(std::move(value)); return *this;}


    /**
     * <p>A list of ruleset names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesetNames() const{ return m_rulesetNames; }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline bool RulesetNamesHasBeenSet() const { return m_rulesetNamesHasBeenSet; }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline void SetRulesetNames(const Aws::Vector<Aws::String>& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames = value; }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline void SetRulesetNames(Aws::Vector<Aws::String>&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames = std::move(value); }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithRulesetNames(const Aws::Vector<Aws::String>& value) { SetRulesetNames(value); return *this;}

    /**
     * <p>A list of ruleset names.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& WithRulesetNames(Aws::Vector<Aws::String>&& value) { SetRulesetNames(std::move(value)); return *this;}

    /**
     * <p>A list of ruleset names.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& AddRulesetNames(const Aws::String& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames.push_back(value); return *this; }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& AddRulesetNames(Aws::String&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ruleset names.</p>
     */
    inline StartDataQualityRulesetEvaluationRunRequest& AddRulesetNames(const char* value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames.push_back(value); return *this; }

  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataQualityEvaluationRunAdditionalRunOptions m_additionalRunOptions;
    bool m_additionalRunOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesetNames;
    bool m_rulesetNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
