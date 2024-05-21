/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration();
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPointPasswordConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousSmtpPasswordExpiryTimestamp() const{ return m_previousSmtpPasswordExpiryTimestamp; }

    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline bool PreviousSmtpPasswordExpiryTimestampHasBeenSet() const { return m_previousSmtpPasswordExpiryTimestampHasBeenSet; }

    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline void SetPreviousSmtpPasswordExpiryTimestamp(const Aws::Utils::DateTime& value) { m_previousSmtpPasswordExpiryTimestampHasBeenSet = true; m_previousSmtpPasswordExpiryTimestamp = value; }

    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline void SetPreviousSmtpPasswordExpiryTimestamp(Aws::Utils::DateTime&& value) { m_previousSmtpPasswordExpiryTimestampHasBeenSet = true; m_previousSmtpPasswordExpiryTimestamp = std::move(value); }

    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithPreviousSmtpPasswordExpiryTimestamp(const Aws::Utils::DateTime& value) { SetPreviousSmtpPasswordExpiryTimestamp(value); return *this;}

    /**
     * <p>The previous password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithPreviousSmtpPasswordExpiryTimestamp(Aws::Utils::DateTime&& value) { SetPreviousSmtpPasswordExpiryTimestamp(std::move(value)); return *this;}


    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetPreviousSmtpPasswordVersion() const{ return m_previousSmtpPasswordVersion; }

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline bool PreviousSmtpPasswordVersionHasBeenSet() const { return m_previousSmtpPasswordVersionHasBeenSet; }

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline void SetPreviousSmtpPasswordVersion(const Aws::String& value) { m_previousSmtpPasswordVersionHasBeenSet = true; m_previousSmtpPasswordVersion = value; }

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline void SetPreviousSmtpPasswordVersion(Aws::String&& value) { m_previousSmtpPasswordVersionHasBeenSet = true; m_previousSmtpPasswordVersion = std::move(value); }

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline void SetPreviousSmtpPasswordVersion(const char* value) { m_previousSmtpPasswordVersionHasBeenSet = true; m_previousSmtpPasswordVersion.assign(value); }

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithPreviousSmtpPasswordVersion(const Aws::String& value) { SetPreviousSmtpPasswordVersion(value); return *this;}

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithPreviousSmtpPasswordVersion(Aws::String&& value) { SetPreviousSmtpPasswordVersion(std::move(value)); return *this;}

    /**
     * <p>The previous password version of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithPreviousSmtpPasswordVersion(const char* value) { SetPreviousSmtpPasswordVersion(value); return *this;}


    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSmtpPasswordVersion() const{ return m_smtpPasswordVersion; }

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline bool SmtpPasswordVersionHasBeenSet() const { return m_smtpPasswordVersionHasBeenSet; }

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline void SetSmtpPasswordVersion(const Aws::String& value) { m_smtpPasswordVersionHasBeenSet = true; m_smtpPasswordVersion = value; }

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline void SetSmtpPasswordVersion(Aws::String&& value) { m_smtpPasswordVersionHasBeenSet = true; m_smtpPasswordVersion = std::move(value); }

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline void SetSmtpPasswordVersion(const char* value) { m_smtpPasswordVersionHasBeenSet = true; m_smtpPasswordVersion.assign(value); }

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithSmtpPasswordVersion(const Aws::String& value) { SetSmtpPasswordVersion(value); return *this;}

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithSmtpPasswordVersion(Aws::String&& value) { SetSmtpPasswordVersion(std::move(value)); return *this;}

    /**
     * <p>The current password expiry timestamp of the ingress endpoint resource.</p>
     */
    inline IngressPointPasswordConfiguration& WithSmtpPasswordVersion(const char* value) { SetSmtpPasswordVersion(value); return *this;}

  private:

    Aws::Utils::DateTime m_previousSmtpPasswordExpiryTimestamp;
    bool m_previousSmtpPasswordExpiryTimestampHasBeenSet = false;

    Aws::String m_previousSmtpPasswordVersion;
    bool m_previousSmtpPasswordVersionHasBeenSet = false;

    Aws::String m_smtpPasswordVersion;
    bool m_smtpPasswordVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
