/**
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
  class GetExternalModelsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetExternalModelsResult() = default;
    AWS_FRAUDDETECTOR_API GetExternalModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetExternalModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Gets the Amazon SageMaker models.</p>
     */
    inline const Aws::Vector<ExternalModel>& GetExternalModels() const { return m_externalModels; }
    template<typename ExternalModelsT = Aws::Vector<ExternalModel>>
    void SetExternalModels(ExternalModelsT&& value) { m_externalModelsHasBeenSet = true; m_externalModels = std::forward<ExternalModelsT>(value); }
    template<typename ExternalModelsT = Aws::Vector<ExternalModel>>
    GetExternalModelsResult& WithExternalModels(ExternalModelsT&& value) { SetExternalModels(std::forward<ExternalModelsT>(value)); return *this;}
    template<typename ExternalModelsT = ExternalModel>
    GetExternalModelsResult& AddExternalModels(ExternalModelsT&& value) { m_externalModelsHasBeenSet = true; m_externalModels.emplace_back(std::forward<ExternalModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetExternalModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExternalModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExternalModel> m_externalModels;
    bool m_externalModelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
