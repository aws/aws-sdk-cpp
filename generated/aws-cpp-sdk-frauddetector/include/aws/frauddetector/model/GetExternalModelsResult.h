﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ExternalModel.h>
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
  class AWS_FRAUDDETECTOR_API GetExternalModelsResult
  {
  public:
    GetExternalModelsResult();
    GetExternalModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExternalModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline const Aws::Vector<ExternalModel>& GetExternalModels() const{ return m_externalModels; }

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline void SetExternalModels(const Aws::Vector<ExternalModel>& value) { m_externalModels = value; }

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline void SetExternalModels(Aws::Vector<ExternalModel>&& value) { m_externalModels = std::move(value); }

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline GetExternalModelsResult& WithExternalModels(const Aws::Vector<ExternalModel>& value) { SetExternalModels(value); return *this;}

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline GetExternalModelsResult& WithExternalModels(Aws::Vector<ExternalModel>&& value) { SetExternalModels(std::move(value)); return *this;}

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline GetExternalModelsResult& AddExternalModels(const ExternalModel& value) { m_externalModels.push_back(value); return *this; }

    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline GetExternalModelsResult& AddExternalModels(ExternalModel&& value) { m_externalModels.push_back(std::move(value)); return *this; }


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
    inline GetExternalModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetExternalModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetExternalModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExternalModel> m_externalModels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
