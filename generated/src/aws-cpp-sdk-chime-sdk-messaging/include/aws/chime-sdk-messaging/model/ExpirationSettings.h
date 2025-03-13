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
    AWS_CHIMESDKMESSAGING_API ExpirationSettings() = default;
    AWS_CHIMESDKMESSAGING_API ExpirationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ExpirationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The period in days after which the system automatically deletes a
     * channel.</p>
     */
    inline int GetExpirationDays() const { return m_expirationDays; }
    inline bool ExpirationDaysHasBeenSet() const { return m_expirationDaysHasBeenSet; }
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }
    inline ExpirationSettings& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions that must be met for a channel to expire.</p>
     */
    inline ExpirationCriterion GetExpirationCriterion() const { return m_expirationCriterion; }
    inline bool ExpirationCriterionHasBeenSet() const { return m_expirationCriterionHasBeenSet; }
    inline void SetExpirationCriterion(ExpirationCriterion value) { m_expirationCriterionHasBeenSet = true; m_expirationCriterion = value; }
    inline ExpirationSettings& WithExpirationCriterion(ExpirationCriterion value) { SetExpirationCriterion(value); return *this;}
    ///@}
  private:

    int m_expirationDays{0};
    bool m_expirationDaysHasBeenSet = false;

    ExpirationCriterion m_expirationCriterion{ExpirationCriterion::NOT_SET};
    bool m_expirationCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
