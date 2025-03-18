/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of an <code>CreateRealtimeEndpoint</code>
   * operation.</p> <p>The result contains the <code>MLModelId</code> and the
   * endpoint information for the <code>MLModel</code>.</p> <p> <b>Note:</b> The
   * endpoint information includes the URI of the <code>MLModel</code>; that is, the
   * location to send online prediction requests for the specified
   * <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateRealtimeEndpointOutput">AWS
   * API Reference</a></p>
   */
  class CreateRealtimeEndpointResult
  {
  public:
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult() = default;
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    CreateRealtimeEndpointResult& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline const RealtimeEndpointInfo& GetRealtimeEndpointInfo() const { return m_realtimeEndpointInfo; }
    template<typename RealtimeEndpointInfoT = RealtimeEndpointInfo>
    void SetRealtimeEndpointInfo(RealtimeEndpointInfoT&& value) { m_realtimeEndpointInfoHasBeenSet = true; m_realtimeEndpointInfo = std::forward<RealtimeEndpointInfoT>(value); }
    template<typename RealtimeEndpointInfoT = RealtimeEndpointInfo>
    CreateRealtimeEndpointResult& WithRealtimeEndpointInfo(RealtimeEndpointInfoT&& value) { SetRealtimeEndpointInfo(std::forward<RealtimeEndpointInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRealtimeEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    RealtimeEndpointInfo m_realtimeEndpointInfo;
    bool m_realtimeEndpointInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
