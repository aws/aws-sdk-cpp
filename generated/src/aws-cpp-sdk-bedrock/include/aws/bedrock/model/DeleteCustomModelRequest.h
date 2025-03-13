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
  class DeleteCustomModelRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API DeleteCustomModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomModel"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the model to delete.</p>
     */
    inline const Aws::String& GetModelIdentifier() const { return m_modelIdentifier; }
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }
    template<typename ModelIdentifierT = Aws::String>
    void SetModelIdentifier(ModelIdentifierT&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::forward<ModelIdentifierT>(value); }
    template<typename ModelIdentifierT = Aws::String>
    DeleteCustomModelRequest& WithModelIdentifier(ModelIdentifierT&& value) { SetModelIdentifier(std::forward<ModelIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
