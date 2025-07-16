/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{
  class CreateCustomModelDeploymentResult
  {
  public:
    AWS_BEDROCK_API CreateCustomModelDeploymentResult() = default;
    AWS_BEDROCK_API CreateCustomModelDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateCustomModelDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model deployment. Use this ARN
     * as the <code>modelId</code> parameter when invoking the model with the
     * <code>InvokeModel</code> or <code>Converse</code> operations.</p>
     */
    inline const Aws::String& GetCustomModelDeploymentArn() const { return m_customModelDeploymentArn; }
    template<typename CustomModelDeploymentArnT = Aws::String>
    void SetCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { m_customModelDeploymentArnHasBeenSet = true; m_customModelDeploymentArn = std::forward<CustomModelDeploymentArnT>(value); }
    template<typename CustomModelDeploymentArnT = Aws::String>
    CreateCustomModelDeploymentResult& WithCustomModelDeploymentArn(CustomModelDeploymentArnT&& value) { SetCustomModelDeploymentArn(std::forward<CustomModelDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCustomModelDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customModelDeploymentArn;
    bool m_customModelDeploymentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
