/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Model.h>
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
  class GetModelsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetModelsResult();
    AWS_FRAUDDETECTOR_API GetModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The array of models.</p>
     */
    inline const Aws::Vector<Model>& GetModels() const{ return m_models; }

    /**
     * <p>The array of models.</p>
     */
    inline void SetModels(const Aws::Vector<Model>& value) { m_models = value; }

    /**
     * <p>The array of models.</p>
     */
    inline void SetModels(Aws::Vector<Model>&& value) { m_models = std::move(value); }

    /**
     * <p>The array of models.</p>
     */
    inline GetModelsResult& WithModels(const Aws::Vector<Model>& value) { SetModels(value); return *this;}

    /**
     * <p>The array of models.</p>
     */
    inline GetModelsResult& WithModels(Aws::Vector<Model>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>The array of models.</p>
     */
    inline GetModelsResult& AddModels(const Model& value) { m_models.push_back(value); return *this; }

    /**
     * <p>The array of models.</p>
     */
    inline GetModelsResult& AddModels(Model&& value) { m_models.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Model> m_models;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
