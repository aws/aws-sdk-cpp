/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/Rule.h>
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
namespace FraudDetector
{
namespace Model
{
  class UpdateRuleVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult();
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new rule version that was created.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline UpdateRuleVersionResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The new rule version that was created.</p>
     */
    inline UpdateRuleVersionResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateRuleVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateRuleVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateRuleVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Rule m_rule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
