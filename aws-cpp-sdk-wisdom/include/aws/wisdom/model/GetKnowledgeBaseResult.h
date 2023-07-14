﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/KnowledgeBaseData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class AWS_CONNECTWISDOMSERVICE_API GetKnowledgeBaseResult
  {
  public:
    GetKnowledgeBaseResult();
    GetKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The knowledge base.</p>
     */
    inline const KnowledgeBaseData& GetKnowledgeBase() const{ return m_knowledgeBase; }

    /**
     * <p>The knowledge base.</p>
     */
    inline void SetKnowledgeBase(const KnowledgeBaseData& value) { m_knowledgeBase = value; }

    /**
     * <p>The knowledge base.</p>
     */
    inline void SetKnowledgeBase(KnowledgeBaseData&& value) { m_knowledgeBase = std::move(value); }

    /**
     * <p>The knowledge base.</p>
     */
    inline GetKnowledgeBaseResult& WithKnowledgeBase(const KnowledgeBaseData& value) { SetKnowledgeBase(value); return *this;}

    /**
     * <p>The knowledge base.</p>
     */
    inline GetKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseData&& value) { SetKnowledgeBase(std::move(value)); return *this;}

  private:

    KnowledgeBaseData m_knowledgeBase;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
