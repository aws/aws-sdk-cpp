/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>When the certificate is valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CertificateValidity">AWS
   * API Reference</a></p>
   */
  class CertificateValidity
  {
  public:
    AWS_IOT_API CertificateValidity() = default;
    AWS_IOT_API CertificateValidity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CertificateValidity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    CertificateValidity& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    CertificateValidity& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
