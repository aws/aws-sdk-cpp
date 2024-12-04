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
  class RegisterMarketplaceModelEndpointRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API RegisterMarketplaceModelEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterMarketplaceModelEndpoint"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the Amazon SageMaker endpoint you want to register with Amazon
     * Bedrock Marketplace.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }
    inline RegisterMarketplaceModelEndpointRequest& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}
    inline RegisterMarketplaceModelEndpointRequest& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}
    inline RegisterMarketplaceModelEndpointRequest& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model from Amazon Bedrock Marketplace that is deployed on the
     * endpoint.</p>
     */
    inline const Aws::String& GetModelSourceIdentifier() const{ return m_modelSourceIdentifier; }
    inline bool ModelSourceIdentifierHasBeenSet() const { return m_modelSourceIdentifierHasBeenSet; }
    inline void SetModelSourceIdentifier(const Aws::String& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = value; }
    inline void SetModelSourceIdentifier(Aws::String&& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = std::move(value); }
    inline void SetModelSourceIdentifier(const char* value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier.assign(value); }
    inline RegisterMarketplaceModelEndpointRequest& WithModelSourceIdentifier(const Aws::String& value) { SetModelSourceIdentifier(value); return *this;}
    inline RegisterMarketplaceModelEndpointRequest& WithModelSourceIdentifier(Aws::String&& value) { SetModelSourceIdentifier(std::move(value)); return *this;}
    inline RegisterMarketplaceModelEndpointRequest& WithModelSourceIdentifier(const char* value) { SetModelSourceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    Aws::String m_modelSourceIdentifier;
    bool m_modelSourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
