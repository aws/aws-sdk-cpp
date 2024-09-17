/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityTargetTable.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class GetDataQualityRulesetResult
  {
  public:
    AWS_GLUE_API GetDataQualityRulesetResult();
    AWS_GLUE_API GetDataQualityRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDataQualityRulesetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataQualityRulesetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataQualityRulesetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataQualityRulesetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline const Aws::String& GetRuleset() const{ return m_ruleset; }
    inline void SetRuleset(const Aws::String& value) { m_ruleset = value; }
    inline void SetRuleset(Aws::String&& value) { m_ruleset = std::move(value); }
    inline void SetRuleset(const char* value) { m_ruleset.assign(value); }
    inline GetDataQualityRulesetResult& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}
    inline GetDataQualityRulesetResult& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithRuleset(const char* value) { SetRuleset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and database name of the target table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const{ return m_targetTable; }
    inline void SetTargetTable(const DataQualityTargetTable& value) { m_targetTable = value; }
    inline void SetTargetTable(DataQualityTargetTable&& value) { m_targetTable = std::move(value); }
    inline GetDataQualityRulesetResult& WithTargetTable(const DataQualityTargetTable& value) { SetTargetTable(value); return *this;}
    inline GetDataQualityRulesetResult& WithTargetTable(DataQualityTargetTable&& value) { SetTargetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The time and date that this data quality ruleset was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOn = std::move(value); }
    inline GetDataQualityRulesetResult& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline GetDataQualityRulesetResult& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this data quality ruleset was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }
    inline GetDataQualityRulesetResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline GetDataQualityRulesetResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a ruleset was created from a recommendation run, this run ID is
     * generated to link the two together.</p>
     */
    inline const Aws::String& GetRecommendationRunId() const{ return m_recommendationRunId; }
    inline void SetRecommendationRunId(const Aws::String& value) { m_recommendationRunId = value; }
    inline void SetRecommendationRunId(Aws::String&& value) { m_recommendationRunId = std::move(value); }
    inline void SetRecommendationRunId(const char* value) { m_recommendationRunId.assign(value); }
    inline GetDataQualityRulesetResult& WithRecommendationRunId(const Aws::String& value) { SetRecommendationRunId(value); return *this;}
    inline GetDataQualityRulesetResult& WithRecommendationRunId(Aws::String&& value) { SetRecommendationRunId(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithRecommendationRunId(const char* value) { SetRecommendationRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const{ return m_dataQualitySecurityConfiguration; }
    inline void SetDataQualitySecurityConfiguration(const Aws::String& value) { m_dataQualitySecurityConfiguration = value; }
    inline void SetDataQualitySecurityConfiguration(Aws::String&& value) { m_dataQualitySecurityConfiguration = std::move(value); }
    inline void SetDataQualitySecurityConfiguration(const char* value) { m_dataQualitySecurityConfiguration.assign(value); }
    inline GetDataQualityRulesetResult& WithDataQualitySecurityConfiguration(const Aws::String& value) { SetDataQualitySecurityConfiguration(value); return *this;}
    inline GetDataQualityRulesetResult& WithDataQualitySecurityConfiguration(Aws::String&& value) { SetDataQualitySecurityConfiguration(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithDataQualitySecurityConfiguration(const char* value) { SetDataQualitySecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataQualityRulesetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataQualityRulesetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataQualityRulesetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_ruleset;

    DataQualityTargetTable m_targetTable;

    Aws::Utils::DateTime m_createdOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::String m_recommendationRunId;

    Aws::String m_dataQualitySecurityConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
