/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/ModelSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListModelsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult();
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline const Aws::Vector<ModelSummary>& GetModelSummaries() const{ return m_modelSummaries; }

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline void SetModelSummaries(const Aws::Vector<ModelSummary>& value) { m_modelSummaries = value; }

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline void SetModelSummaries(Aws::Vector<ModelSummary>&& value) { m_modelSummaries = std::move(value); }

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline ListModelsResult& WithModelSummaries(const Aws::Vector<ModelSummary>& value) { SetModelSummaries(value); return *this;}

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline ListModelsResult& WithModelSummaries(Aws::Vector<ModelSummary>&& value) { SetModelSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline ListModelsResult& AddModelSummaries(const ModelSummary& value) { m_modelSummaries.push_back(value); return *this; }

    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline ListModelsResult& AddModelSummaries(ModelSummary&& value) { m_modelSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelSummary> m_modelSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
