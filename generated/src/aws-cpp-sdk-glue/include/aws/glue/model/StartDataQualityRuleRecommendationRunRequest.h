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
   */
  class StartDataQualityRuleRecommendationRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartDataQualityRuleRecommendationRunRequest();

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
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline StartDataQualityRuleRecommendationRunRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline StartDataQualityRuleRecommendationRunRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
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
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline StartDataQualityRuleRecommendationRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the ruleset.</p>
     */
    inline const Aws::String& GetCreatedRulesetName() const{ return m_createdRulesetName; }
    inline bool CreatedRulesetNameHasBeenSet() const { return m_createdRulesetNameHasBeenSet; }
    inline void SetCreatedRulesetName(const Aws::String& value) { m_createdRulesetNameHasBeenSet = true; m_createdRulesetName = value; }
    inline void SetCreatedRulesetName(Aws::String&& value) { m_createdRulesetNameHasBeenSet = true; m_createdRulesetName = std::move(value); }
    inline void SetCreatedRulesetName(const char* value) { m_createdRulesetNameHasBeenSet = true; m_createdRulesetName.assign(value); }
    inline StartDataQualityRuleRecommendationRunRequest& WithCreatedRulesetName(const Aws::String& value) { SetCreatedRulesetName(value); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithCreatedRulesetName(Aws::String&& value) { SetCreatedRulesetName(std::move(value)); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithCreatedRulesetName(const char* value) { SetCreatedRulesetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const{ return m_dataQualitySecurityConfiguration; }
    inline bool DataQualitySecurityConfigurationHasBeenSet() const { return m_dataQualitySecurityConfigurationHasBeenSet; }
    inline void SetDataQualitySecurityConfiguration(const Aws::String& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = value; }
    inline void SetDataQualitySecurityConfiguration(Aws::String&& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = std::move(value); }
    inline void SetDataQualitySecurityConfiguration(const char* value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration.assign(value); }
    inline StartDataQualityRuleRecommendationRunRequest& WithDataQualitySecurityConfiguration(const Aws::String& value) { SetDataQualitySecurityConfiguration(value); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithDataQualitySecurityConfiguration(Aws::String&& value) { SetDataQualitySecurityConfiguration(std::move(value)); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithDataQualitySecurityConfiguration(const char* value) { SetDataQualitySecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartDataQualityRuleRecommendationRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartDataQualityRuleRecommendationRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout;
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
