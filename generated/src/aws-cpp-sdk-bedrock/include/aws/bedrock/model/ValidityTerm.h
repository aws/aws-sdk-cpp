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
   * <p>Describes the validity terms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ValidityTerm">AWS
   * API Reference</a></p>
   */
  class ValidityTerm
  {
  public:
    AWS_BEDROCK_API ValidityTerm() = default;
    AWS_BEDROCK_API ValidityTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ValidityTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the agreement duration.</p>
     */
    inline const Aws::String& GetAgreementDuration() const { return m_agreementDuration; }
    inline bool AgreementDurationHasBeenSet() const { return m_agreementDurationHasBeenSet; }
    template<typename AgreementDurationT = Aws::String>
    void SetAgreementDuration(AgreementDurationT&& value) { m_agreementDurationHasBeenSet = true; m_agreementDuration = std::forward<AgreementDurationT>(value); }
    template<typename AgreementDurationT = Aws::String>
    ValidityTerm& WithAgreementDuration(AgreementDurationT&& value) { SetAgreementDuration(std::forward<AgreementDurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementDuration;
    bool m_agreementDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
