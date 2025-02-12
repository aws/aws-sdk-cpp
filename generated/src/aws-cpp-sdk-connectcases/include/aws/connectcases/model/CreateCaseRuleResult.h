/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateCaseRuleResult
  {
  public:
    AWS_CONNECTCASES_API CreateCaseRuleResult();
    AWS_CONNECTCASES_API CreateCaseRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateCaseRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleArn() const{ return m_caseRuleArn; }
    inline void SetCaseRuleArn(const Aws::String& value) { m_caseRuleArn = value; }
    inline void SetCaseRuleArn(Aws::String&& value) { m_caseRuleArn = std::move(value); }
    inline void SetCaseRuleArn(const char* value) { m_caseRuleArn.assign(value); }
    inline CreateCaseRuleResult& WithCaseRuleArn(const Aws::String& value) { SetCaseRuleArn(value); return *this;}
    inline CreateCaseRuleResult& WithCaseRuleArn(Aws::String&& value) { SetCaseRuleArn(std::move(value)); return *this;}
    inline CreateCaseRuleResult& WithCaseRuleArn(const char* value) { SetCaseRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleId.assign(value); }
    inline CreateCaseRuleResult& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline CreateCaseRuleResult& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline CreateCaseRuleResult& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCaseRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCaseRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCaseRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleArn;

    Aws::String m_caseRuleId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
