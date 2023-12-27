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
  class GetFoundationModelRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetFoundationModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFoundationModel"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>The model identifier. </p>
     */
    inline const Aws::String& GetModelIdentifier() const{ return m_modelIdentifier; }

    /**
     * <p>The model identifier. </p>
     */
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }

    /**
     * <p>The model identifier. </p>
     */
    inline void SetModelIdentifier(const Aws::String& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = value; }

    /**
     * <p>The model identifier. </p>
     */
    inline void SetModelIdentifier(Aws::String&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::move(value); }

    /**
     * <p>The model identifier. </p>
     */
    inline void SetModelIdentifier(const char* value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier.assign(value); }

    /**
     * <p>The model identifier. </p>
     */
    inline GetFoundationModelRequest& WithModelIdentifier(const Aws::String& value) { SetModelIdentifier(value); return *this;}

    /**
     * <p>The model identifier. </p>
     */
    inline GetFoundationModelRequest& WithModelIdentifier(Aws::String&& value) { SetModelIdentifier(std::move(value)); return *this;}

    /**
     * <p>The model identifier. </p>
     */
    inline GetFoundationModelRequest& WithModelIdentifier(const char* value) { SetModelIdentifier(value); return *this;}

  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
