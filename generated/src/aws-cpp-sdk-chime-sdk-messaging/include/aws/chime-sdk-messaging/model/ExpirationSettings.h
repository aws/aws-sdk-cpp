/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ExpirationCriterion.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Settings that control the interval after which a channel is
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ExpirationSettings">AWS
   * API Reference</a></p>
   */
  class ExpirationSettings
  {
  public:
    AWS_CHIMESDKMESSAGING_API ExpirationSettings();
    AWS_CHIMESDKMESSAGING_API ExpirationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ExpirationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period in days after which the system automatically deletes a
     * channel.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }

    /**
     * <p>The period in days after which the system automatically deletes a
     * channel.</p>
     */
    inline bool ExpirationDaysHasBeenSet() const { return m_expirationDaysHasBeenSet; }

    /**
     * <p>The period in days after which the system automatically deletes a
     * channel.</p>
     */
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }

    /**
     * <p>The period in days after which the system automatically deletes a
     * channel.</p>
     */
    inline ExpirationSettings& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}


    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline const ExpirationCriterion& GetExpirationCriterion() const{ return m_expirationCriterion; }

    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline bool ExpirationCriterionHasBeenSet() const { return m_expirationCriterionHasBeenSet; }

    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline void SetExpirationCriterion(const ExpirationCriterion& value) { m_expirationCriterionHasBeenSet = true; m_expirationCriterion = value; }

    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline void SetExpirationCriterion(ExpirationCriterion&& value) { m_expirationCriterionHasBeenSet = true; m_expirationCriterion = std::move(value); }

    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline ExpirationSettings& WithExpirationCriterion(const ExpirationCriterion& value) { SetExpirationCriterion(value); return *this;}

    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline ExpirationSettings& WithExpirationCriterion(ExpirationCriterion&& value) { SetExpirationCriterion(std::move(value)); return *this;}

  private:

    int m_expirationDays;
    bool m_expirationDaysHasBeenSet = false;

    ExpirationCriterion m_expirationCriterion;
    bool m_expirationCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
