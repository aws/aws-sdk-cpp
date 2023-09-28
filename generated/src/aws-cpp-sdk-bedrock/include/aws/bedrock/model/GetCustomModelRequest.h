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
  class GetCustomModelRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetCustomModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCustomModel"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline const Aws::String& GetModelIdentifier() const{ return m_modelIdentifier; }

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline void SetModelIdentifier(const Aws::String& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = value; }

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline void SetModelIdentifier(Aws::String&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::move(value); }

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline void SetModelIdentifier(const char* value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier.assign(value); }

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline GetCustomModelRequest& WithModelIdentifier(const Aws::String& value) { SetModelIdentifier(value); return *this;}

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline GetCustomModelRequest& WithModelIdentifier(Aws::String&& value) { SetModelIdentifier(std::move(value)); return *this;}

    /**
     * <p>Name or ARN of the custom model.</p>
     */
    inline GetCustomModelRequest& WithModelIdentifier(const char* value) { SetModelIdentifier(value); return *this;}

  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
