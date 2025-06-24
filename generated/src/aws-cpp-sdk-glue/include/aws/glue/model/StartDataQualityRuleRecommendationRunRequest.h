/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   * <p>The request of the Data Quality rule recommendation request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartDataQualityRuleRecommendationRunRequest">AWS
   * API Reference</a></p>
   */
  class StartDataQualityRuleRecommendationRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartDataQualityRuleRecommendationRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataQualityRuleRecommendationRun"; }

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
    StartDataQualityRuleRecommendationRunRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
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
    StartDataQualityRuleRecommendationRunRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline StartDataQualityRuleRecommendationRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
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
    inline StartDataQualityRuleRecommendationRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the ruleset.</p>
     */
    inline const Aws::String& GetCreatedRulesetName() const { return m_createdRulesetName; }
    inline bool CreatedRulesetNameHasBeenSet() const { return m_createdRulesetNameHasBeenSet; }
    template<typename CreatedRulesetNameT = Aws::String>
    void SetCreatedRulesetName(CreatedRulesetNameT&& value) { m_createdRulesetNameHasBeenSet = true; m_createdRulesetName = std::forward<CreatedRulesetNameT>(value); }
    template<typename CreatedRulesetNameT = Aws::String>
    StartDataQualityRuleRecommendationRunRequest& WithCreatedRulesetName(CreatedRulesetNameT&& value) { SetCreatedRulesetName(std::forward<CreatedRulesetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const { return m_dataQualitySecurityConfiguration; }
    inline bool DataQualitySecurityConfigurationHasBeenSet() const { return m_dataQualitySecurityConfigurationHasBeenSet; }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    void SetDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = std::forward<DataQualitySecurityConfigurationT>(value); }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    StartDataQualityRuleRecommendationRunRequest& WithDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { SetDataQualitySecurityConfiguration(std::forward<DataQualitySecurityConfigurationT>(value)); return *this;}
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
    StartDataQualityRuleRecommendationRunRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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

    Aws::String m_createdRulesetName;
    bool m_createdRulesetNameHasBeenSet = false;

    Aws::String m_dataQualitySecurityConfiguration;
    bool m_dataQualitySecurityConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
