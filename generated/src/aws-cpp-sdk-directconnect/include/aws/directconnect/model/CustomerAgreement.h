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
    AWS_DIRECTCONNECT_API CustomerAgreement();
    AWS_DIRECTCONNECT_API CustomerAgreement(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API CustomerAgreement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the agreement.</p>
     */
    inline const Aws::String& GetAgreementName() const{ return m_agreementName; }
    inline bool AgreementNameHasBeenSet() const { return m_agreementNameHasBeenSet; }
    inline void SetAgreementName(const Aws::String& value) { m_agreementNameHasBeenSet = true; m_agreementName = value; }
    inline void SetAgreementName(Aws::String&& value) { m_agreementNameHasBeenSet = true; m_agreementName = std::move(value); }
    inline void SetAgreementName(const char* value) { m_agreementNameHasBeenSet = true; m_agreementName.assign(value); }
    inline CustomerAgreement& WithAgreementName(const Aws::String& value) { SetAgreementName(value); return *this;}
    inline CustomerAgreement& WithAgreementName(Aws::String&& value) { SetAgreementName(std::move(value)); return *this;}
    inline CustomerAgreement& WithAgreementName(const char* value) { SetAgreementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the customer agreement. This will be either <code>signed</code>
     * or <code>unsigned</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline CustomerAgreement& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CustomerAgreement& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CustomerAgreement& WithStatus(const char* value) { SetStatus(value); return *this;}
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
