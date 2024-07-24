/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRule.h>
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
namespace CleanRooms
{
namespace Model
{
  class UpdateConfiguredTableAssociationAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationAnalysisRuleResult();
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The updated analysis rule for the conﬁgured table association. In the
     * console, the <code>ConfiguredTableAssociationAnalysisRule</code> is referred to
     * as the <i>collaboration analysis rule</i>.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRule& GetAnalysisRule() const{ return m_analysisRule; }
    inline void SetAnalysisRule(const ConfiguredTableAssociationAnalysisRule& value) { m_analysisRule = value; }
    inline void SetAnalysisRule(ConfiguredTableAssociationAnalysisRule&& value) { m_analysisRule = std::move(value); }
    inline UpdateConfiguredTableAssociationAnalysisRuleResult& WithAnalysisRule(const ConfiguredTableAssociationAnalysisRule& value) { SetAnalysisRule(value); return *this;}
    inline UpdateConfiguredTableAssociationAnalysisRuleResult& WithAnalysisRule(ConfiguredTableAssociationAnalysisRule&& value) { SetAnalysisRule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConfiguredTableAssociationAnalysisRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConfiguredTableAssociationAnalysisRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConfiguredTableAssociationAnalysisRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConfiguredTableAssociationAnalysisRule m_analysisRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
