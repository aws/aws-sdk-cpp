/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class StartTrainedModelInferenceJobResult
  {
  public:
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult() = default;
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const { return m_trainedModelInferenceJobArn; }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    void SetTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::forward<TrainedModelInferenceJobArnT>(value); }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    StartTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { SetTrainedModelInferenceJobArn(std::forward<TrainedModelInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTrainedModelInferenceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainedModelInferenceJobArn;
    bool m_trainedModelInferenceJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
