/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The password configuration of the ingress endpoint resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressPointPasswordConfiguration">AWS
   * API Reference</a></p>
   */
  class IngressPointPasswordConfiguration
  {
  public:
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration() = default;
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSmtpPasswordVersion() const { return m_smtpPasswordVersion; }
    inline bool SmtpPasswordVersionHasBeenSet() const { return m_smtpPasswordVersionHasBeenSet; }
    template<typename SmtpPasswordVersionT = Aws::String>
    void SetSmtpPasswordVersion(SmtpPasswordVersionT&& value) { m_smtpPasswordVersionHasBeenSet = true; m_smtpPasswordVersion = std::forward<SmtpPasswordVersionT>(value); }
    template<typename SmtpPasswordVersionT = Aws::String>
    IngressPointPasswordConfiguration& WithSmtpPasswordVersion(SmtpPasswordVersionT&& value) { SetSmtpPasswordVersion(std::forward<SmtpPasswordVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetPreviousSmtpPasswordVersion() const { return m_previousSmtpPasswordVersion; }
    inline bool PreviousSmtpPasswordVersionHasBeenSet() const { return m_previousSmtpPasswordVersionHasBeenSet; }
    template<typename PreviousSmtpPasswordVersionT = Aws::String>
    void SetPreviousSmtpPasswordVersion(PreviousSmtpPasswordVersionT&& value) { m_previousSmtpPasswordVersionHasBeenSet = true; m_previousSmtpPasswordVersion = std::forward<PreviousSmtpPasswordVersionT>(value); }
    template<typename PreviousSmtpPasswordVersionT = Aws::String>
    IngressPointPasswordConfiguration& WithPreviousSmtpPasswordVersion(PreviousSmtpPasswordVersionT&& value) { SetPreviousSmtpPasswordVersion(std::forward<PreviousSmtpPasswordVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousSmtpPasswordExpiryTimestamp() const { return m_previousSmtpPasswordExpiryTimestamp; }
    inline bool PreviousSmtpPasswordExpiryTimestampHasBeenSet() const { return m_previousSmtpPasswordExpiryTimestampHasBeenSet; }
    template<typename PreviousSmtpPasswordExpiryTimestampT = Aws::Utils::DateTime>
    void SetPreviousSmtpPasswordExpiryTimestamp(PreviousSmtpPasswordExpiryTimestampT&& value) { m_previousSmtpPasswordExpiryTimestampHasBeenSet = true; m_previousSmtpPasswordExpiryTimestamp = std::forward<PreviousSmtpPasswordExpiryTimestampT>(value); }
    template<typename PreviousSmtpPasswordExpiryTimestampT = Aws::Utils::DateTime>
    IngressPointPasswordConfiguration& WithPreviousSmtpPasswordExpiryTimestamp(PreviousSmtpPasswordExpiryTimestampT&& value) { SetPreviousSmtpPasswordExpiryTimestamp(std::forward<PreviousSmtpPasswordExpiryTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_smtpPasswordVersion;
    bool m_smtpPasswordVersionHasBeenSet = false;

    Aws::String m_previousSmtpPasswordVersion;
    bool m_previousSmtpPasswordVersionHasBeenSet = false;

    Aws::Utils::DateTime m_previousSmtpPasswordExpiryTimestamp{};
    bool m_previousSmtpPasswordExpiryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
