/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Provides authorization for Amazon to bring a specific IP address range to a
   * specific AWS account using bring your own IP addresses (BYOIP). </p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
   * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CidrAuthorizationContext">AWS
   * API Reference</a></p>
   */
  class AWS_GLOBALACCELERATOR_API CidrAuthorizationContext
  {
  public:
    CidrAuthorizationContext();
    CidrAuthorizationContext(Aws::Utils::Json::JsonView jsonValue);
    CidrAuthorizationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The plain-text authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The signed authorization message for the prefix and account.</p>
     */
    inline CidrAuthorizationContext& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
