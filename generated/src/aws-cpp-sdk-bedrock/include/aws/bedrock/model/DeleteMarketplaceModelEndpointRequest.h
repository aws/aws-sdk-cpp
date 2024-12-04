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
  class DeleteMarketplaceModelEndpointRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API DeleteMarketplaceModelEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMarketplaceModelEndpoint"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint you want to delete.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline DeleteMarketplaceModelEndpointRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline DeleteMarketplaceModelEndpointRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline DeleteMarketplaceModelEndpointRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
