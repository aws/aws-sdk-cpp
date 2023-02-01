/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class ListModelsResult
  {
  public:
    AWS_LOOKOUTFORVISION_API ListModelsResult();
    AWS_LOOKOUTFORVISION_API ListModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline const Aws::Vector<ModelMetadata>& GetModels() const{ return m_models; }

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline void SetModels(const Aws::Vector<ModelMetadata>& value) { m_models = value; }

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline void SetModels(Aws::Vector<ModelMetadata>&& value) { m_models = std::move(value); }

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline ListModelsResult& WithModels(const Aws::Vector<ModelMetadata>& value) { SetModels(value); return *this;}

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline ListModelsResult& WithModels(Aws::Vector<ModelMetadata>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline ListModelsResult& AddModels(const ModelMetadata& value) { m_models.push_back(value); return *this; }

    /**
     * <p>A list of model versions in the specified project. </p>
     */
    inline ListModelsResult& AddModels(ModelMetadata&& value) { m_models.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline ListModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline ListModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set of models.
     * </p>
     */
    inline ListModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelMetadata> m_models;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
