/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/SuppressedDestinationAttributes.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about an email address that is on the
   * suppression list for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestination">AWS
   * API Reference</a></p>
   */
  class SuppressedDestination
  {
  public:
    AWS_SESV2_API SuppressedDestination();
    AWS_SESV2_API SuppressedDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressedDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline SuppressedDestination& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline SuppressedDestination& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline SuppressedDestination& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline const SuppressionListReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline void SetReason(const SuppressionListReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline void SetReason(SuppressionListReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline SuppressedDestination& WithReason(const SuppressionListReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline SuppressedDestination& WithReason(SuppressionListReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline SuppressedDestination& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline SuppressedDestination& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline const SuppressedDestinationAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline void SetAttributes(const SuppressedDestinationAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline void SetAttributes(SuppressedDestinationAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline SuppressedDestination& WithAttributes(const SuppressedDestinationAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline SuppressedDestination& WithAttributes(SuppressedDestinationAttributes&& value) { SetAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    SuppressionListReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    SuppressedDestinationAttributes m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
