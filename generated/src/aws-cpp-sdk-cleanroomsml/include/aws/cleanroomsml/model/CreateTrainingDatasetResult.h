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
  class CreateTrainingDatasetResult
  {
  public:
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult() = default;
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const { return m_trainingDatasetArn; }
    template<typename TrainingDatasetArnT = Aws::String>
    void SetTrainingDatasetArn(TrainingDatasetArnT&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::forward<TrainingDatasetArnT>(value); }
    template<typename TrainingDatasetArnT = Aws::String>
    CreateTrainingDatasetResult& WithTrainingDatasetArn(TrainingDatasetArnT&& value) { SetTrainingDatasetArn(std::forward<TrainingDatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTrainingDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
