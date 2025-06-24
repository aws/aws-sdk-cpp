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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Describes a support term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/SupportTerm">AWS
   * API Reference</a></p>
   */
  class SupportTerm
  {
  public:
    AWS_BEDROCK_API SupportTerm() = default;
    AWS_BEDROCK_API SupportTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API SupportTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the refund policy.</p>
     */
    inline const Aws::String& GetRefundPolicyDescription() const { return m_refundPolicyDescription; }
    inline bool RefundPolicyDescriptionHasBeenSet() const { return m_refundPolicyDescriptionHasBeenSet; }
    template<typename RefundPolicyDescriptionT = Aws::String>
    void SetRefundPolicyDescription(RefundPolicyDescriptionT&& value) { m_refundPolicyDescriptionHasBeenSet = true; m_refundPolicyDescription = std::forward<RefundPolicyDescriptionT>(value); }
    template<typename RefundPolicyDescriptionT = Aws::String>
    SupportTerm& WithRefundPolicyDescription(RefundPolicyDescriptionT&& value) { SetRefundPolicyDescription(std::forward<RefundPolicyDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_refundPolicyDescription;
    bool m_refundPolicyDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
