/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateDataQualityRulesetResult
  {
  public:
    AWS_GLUE_API UpdateDataQualityRulesetResult();
    AWS_GLUE_API UpdateDataQualityRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateDataQualityRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateDataQualityRulesetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataQualityRulesetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateDataQualityRulesetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataQualityRulesetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline UpdateDataQualityRulesetResult& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}
    inline UpdateDataQualityRulesetResult& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetResult& WithRuleset(const char* value) { SetRuleset(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataQualityRulesetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataQualityRulesetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_ruleset;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
