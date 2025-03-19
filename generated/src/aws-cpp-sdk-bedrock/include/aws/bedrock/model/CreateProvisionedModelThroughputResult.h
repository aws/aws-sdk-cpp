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
  class CreateProvisionedModelThroughputResult
  {
  public:
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult() = default;
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const { return m_provisionedModelArn; }
    template<typename ProvisionedModelArnT = Aws::String>
    void SetProvisionedModelArn(ProvisionedModelArnT&& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = std::forward<ProvisionedModelArnT>(value); }
    template<typename ProvisionedModelArnT = Aws::String>
    CreateProvisionedModelThroughputResult& WithProvisionedModelArn(ProvisionedModelArnT&& value) { SetProvisionedModelArn(std::forward<ProvisionedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProvisionedModelThroughputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedModelArn;
    bool m_provisionedModelArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
