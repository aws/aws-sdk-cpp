/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagExpression.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListLFTagExpressionsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult();
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Logical expressions composed of one more LF-Tag key-value pairs.</p>
     */
    inline const Aws::Vector<LFTagExpression>& GetLFTagExpressions() const{ return m_lFTagExpressions; }
    inline void SetLFTagExpressions(const Aws::Vector<LFTagExpression>& value) { m_lFTagExpressions = value; }
    inline void SetLFTagExpressions(Aws::Vector<LFTagExpression>&& value) { m_lFTagExpressions = std::move(value); }
    inline ListLFTagExpressionsResult& WithLFTagExpressions(const Aws::Vector<LFTagExpression>& value) { SetLFTagExpressions(value); return *this;}
    inline ListLFTagExpressionsResult& WithLFTagExpressions(Aws::Vector<LFTagExpression>&& value) { SetLFTagExpressions(std::move(value)); return *this;}
    inline ListLFTagExpressionsResult& AddLFTagExpressions(const LFTagExpression& value) { m_lFTagExpressions.push_back(value); return *this; }
    inline ListLFTagExpressionsResult& AddLFTagExpressions(LFTagExpression&& value) { m_lFTagExpressions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLFTagExpressionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLFTagExpressionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLFTagExpressionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLFTagExpressionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLFTagExpressionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLFTagExpressionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LFTagExpression> m_lFTagExpressions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
