/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDnsRecordCreationStateCode.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>An object that describes the state of the canonical name (CNAME) records that
   * are automatically added by Lightsail to the DNS of the domain to validate domain
   * ownership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateDnsRecordCreationState">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificateDnsRecordCreationState
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDnsRecordCreationState();
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDnsRecordCreationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDnsRecordCreationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added.</p> </li> <li> <p> <code>STARTED</code> - The
     * automatic DNS record creation has started.</p> </li> <li> <p>
     * <code>FAILED</code> - The validation record addition failed.</p> </li> </ul>
     */
    inline const LoadBalancerTlsCertificateDnsRecordCreationStateCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const LoadBalancerTlsCertificateDnsRecordCreationStateCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(LoadBalancerTlsCertificateDnsRecordCreationStateCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline LoadBalancerTlsCertificateDnsRecordCreationState& WithCode(const LoadBalancerTlsCertificateDnsRecordCreationStateCode& value) { SetCode(value); return *this;}
    inline LoadBalancerTlsCertificateDnsRecordCreationState& WithCode(LoadBalancerTlsCertificateDnsRecordCreationStateCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline LoadBalancerTlsCertificateDnsRecordCreationState& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline LoadBalancerTlsCertificateDnsRecordCreationState& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline LoadBalancerTlsCertificateDnsRecordCreationState& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    LoadBalancerTlsCertificateDnsRecordCreationStateCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
