/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTag.h>
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
  class GetLFTagExpressionResult
  {
  public:
    AWS_LAKEFORMATION_API GetLFTagExpressionResult();
    AWS_LAKEFORMATION_API GetLFTagExpressionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetLFTagExpressionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the LF-Tag expression. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetLFTagExpressionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetLFTagExpressionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetLFTagExpressionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description with information about the LF-Tag expression.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetLFTagExpressionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetLFTagExpressionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetLFTagExpressionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID in which the
     * LF-Tag expression is saved.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogId.assign(value); }
    inline GetLFTagExpressionResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetLFTagExpressionResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetLFTagExpressionResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the LF-Tag expression. It is composed of one or more LF-Tag
     * key-value pairs.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const{ return m_expression; }
    inline void SetExpression(const Aws::Vector<LFTag>& value) { m_expression = value; }
    inline void SetExpression(Aws::Vector<LFTag>&& value) { m_expression = std::move(value); }
    inline GetLFTagExpressionResult& WithExpression(const Aws::Vector<LFTag>& value) { SetExpression(value); return *this;}
    inline GetLFTagExpressionResult& WithExpression(Aws::Vector<LFTag>&& value) { SetExpression(std::move(value)); return *this;}
    inline GetLFTagExpressionResult& AddExpression(const LFTag& value) { m_expression.push_back(value); return *this; }
    inline GetLFTagExpressionResult& AddExpression(LFTag&& value) { m_expression.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLFTagExpressionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLFTagExpressionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLFTagExpressionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_catalogId;

    Aws::Vector<LFTag> m_expression;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
