/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{
  class UpdateComputeEnvironmentResult
  {
  public:
    AWS_BATCH_API UpdateComputeEnvironmentResult() = default;
    AWS_BATCH_API UpdateComputeEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API UpdateComputeEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const { return m_computeEnvironmentName; }
    template<typename ComputeEnvironmentNameT = Aws::String>
    void SetComputeEnvironmentName(ComputeEnvironmentNameT&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::forward<ComputeEnvironmentNameT>(value); }
    template<typename ComputeEnvironmentNameT = Aws::String>
    UpdateComputeEnvironmentResult& WithComputeEnvironmentName(ComputeEnvironmentNameT&& value) { SetComputeEnvironmentName(std::forward<ComputeEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironmentArn() const { return m_computeEnvironmentArn; }
    template<typename ComputeEnvironmentArnT = Aws::String>
    void SetComputeEnvironmentArn(ComputeEnvironmentArnT&& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = std::forward<ComputeEnvironmentArnT>(value); }
    template<typename ComputeEnvironmentArnT = Aws::String>
    UpdateComputeEnvironmentResult& WithComputeEnvironmentArn(ComputeEnvironmentArnT&& value) { SetComputeEnvironmentArn(std::forward<ComputeEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateComputeEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet = false;

    Aws::String m_computeEnvironmentArn;
    bool m_computeEnvironmentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
