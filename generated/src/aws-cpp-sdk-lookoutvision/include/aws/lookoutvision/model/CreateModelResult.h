/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class CreateModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateModelResult() = default;
    AWS_LOOKOUTFORVISION_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline const ModelMetadata& GetModelMetadata() const { return m_modelMetadata; }
    template<typename ModelMetadataT = ModelMetadata>
    void SetModelMetadata(ModelMetadataT&& value) { m_modelMetadataHasBeenSet = true; m_modelMetadata = std::forward<ModelMetadataT>(value); }
    template<typename ModelMetadataT = ModelMetadata>
    CreateModelResult& WithModelMetadata(ModelMetadataT&& value) { SetModelMetadata(std::forward<ModelMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ModelMetadata m_modelMetadata;
    bool m_modelMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
