/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A summary that describes the suppressed email address.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestinationSummary">AWS
   * API Reference</a></p>
   */
  class SuppressedDestinationSummary
  {
  public:
    AWS_SESV2_API SuppressedDestinationSummary();
    AWS_SESV2_API SuppressedDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressedDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline SuppressedDestinationSummary& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline SuppressedDestinationSummary& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that's on the suppression list for your account.</p>
     */
    inline SuppressedDestinationSummary& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


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
    inline SuppressedDestinationSummary& WithReason(const SuppressionListReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline SuppressedDestinationSummary& WithReason(SuppressionListReason&& value) { SetReason(std::move(value)); return *this;}


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
    inline SuppressedDestinationSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline SuppressedDestinationSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    SuppressionListReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
