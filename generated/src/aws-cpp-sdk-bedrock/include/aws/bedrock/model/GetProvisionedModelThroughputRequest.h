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
    AWS_BEDROCK_API GetProvisionedModelThroughputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelId() const{ return m_provisionedModelId; }

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline bool ProvisionedModelIdHasBeenSet() const { return m_provisionedModelIdHasBeenSet; }

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelId(const Aws::String& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = value; }

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelId(Aws::String&& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = std::move(value); }

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelId(const char* value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId.assign(value); }

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline GetProvisionedModelThroughputRequest& WithProvisionedModelId(const Aws::String& value) { SetProvisionedModelId(value); return *this;}

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline GetProvisionedModelThroughputRequest& WithProvisionedModelId(Aws::String&& value) { SetProvisionedModelId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the provisioned throughput.</p>
     */
    inline GetProvisionedModelThroughputRequest& WithProvisionedModelId(const char* value) { SetProvisionedModelId(value); return *this;}

  private:

    Aws::String m_provisionedModelId;
    bool m_provisionedModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
