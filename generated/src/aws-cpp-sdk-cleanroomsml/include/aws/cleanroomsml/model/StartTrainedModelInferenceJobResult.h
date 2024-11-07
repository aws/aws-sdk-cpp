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
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult();
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const{ return m_trainedModelInferenceJobArn; }
    inline void SetTrainedModelInferenceJobArn(const Aws::String& value) { m_trainedModelInferenceJobArn = value; }
    inline void SetTrainedModelInferenceJobArn(Aws::String&& value) { m_trainedModelInferenceJobArn = std::move(value); }
    inline void SetTrainedModelInferenceJobArn(const char* value) { m_trainedModelInferenceJobArn.assign(value); }
    inline StartTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(const Aws::String& value) { SetTrainedModelInferenceJobArn(value); return *this;}
    inline StartTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(Aws::String&& value) { SetTrainedModelInferenceJobArn(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(const char* value) { SetTrainedModelInferenceJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartTrainedModelInferenceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartTrainedModelInferenceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trainedModelInferenceJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
