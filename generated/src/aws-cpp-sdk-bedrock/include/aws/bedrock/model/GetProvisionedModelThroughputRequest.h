/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class GetProvisionedModelThroughputRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetProvisionedModelThroughputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelId() const { return m_provisionedModelId; }
    inline bool ProvisionedModelIdHasBeenSet() const { return m_provisionedModelIdHasBeenSet; }
    template<typename ProvisionedModelIdT = Aws::String>
    void SetProvisionedModelId(ProvisionedModelIdT&& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = std::forward<ProvisionedModelIdT>(value); }
    template<typename ProvisionedModelIdT = Aws::String>
    GetProvisionedModelThroughputRequest& WithProvisionedModelId(ProvisionedModelIdT&& value) { SetProvisionedModelId(std::forward<ProvisionedModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedModelId;
    bool m_provisionedModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
