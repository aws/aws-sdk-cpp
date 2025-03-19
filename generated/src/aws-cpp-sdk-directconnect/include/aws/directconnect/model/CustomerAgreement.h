/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>The name and status of a customer agreement. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CustomerAgreement">AWS
   * API Reference</a></p>
   */
  class CustomerAgreement
  {
  public:
    AWS_DIRECTCONNECT_API CustomerAgreement() = default;
    AWS_DIRECTCONNECT_API CustomerAgreement(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API CustomerAgreement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the agreement.</p>
     */
    inline const Aws::String& GetAgreementName() const { return m_agreementName; }
    inline bool AgreementNameHasBeenSet() const { return m_agreementNameHasBeenSet; }
    template<typename AgreementNameT = Aws::String>
    void SetAgreementName(AgreementNameT&& value) { m_agreementNameHasBeenSet = true; m_agreementName = std::forward<AgreementNameT>(value); }
    template<typename AgreementNameT = Aws::String>
    CustomerAgreement& WithAgreementName(AgreementNameT&& value) { SetAgreementName(std::forward<AgreementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the customer agreement. This will be either <code>signed</code>
     * or <code>unsigned</code> </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CustomerAgreement& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementName;
    bool m_agreementNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
