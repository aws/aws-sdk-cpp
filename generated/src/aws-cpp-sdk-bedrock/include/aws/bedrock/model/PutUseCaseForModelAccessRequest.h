/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class PutUseCaseForModelAccessRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API PutUseCaseForModelAccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutUseCaseForModelAccess"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Put customer profile Request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFormData() const { return m_formData; }
    inline bool FormDataHasBeenSet() const { return m_formDataHasBeenSet; }
    template<typename FormDataT = Aws::Utils::ByteBuffer>
    void SetFormData(FormDataT&& value) { m_formDataHasBeenSet = true; m_formData = std::forward<FormDataT>(value); }
    template<typename FormDataT = Aws::Utils::ByteBuffer>
    PutUseCaseForModelAccessRequest& WithFormData(FormDataT&& value) { SetFormData(std::forward<FormDataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_formData{};
    bool m_formDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
