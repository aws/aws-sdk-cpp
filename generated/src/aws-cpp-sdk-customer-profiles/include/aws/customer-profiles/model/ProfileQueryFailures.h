/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that holds failures for membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ProfileQueryFailures">AWS
   * API Reference</a></p>
   */
  class ProfileQueryFailures
  {
  public:
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures() = default;
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile id the failure belongs to.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    ProfileQueryFailures& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the failure.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ProfileQueryFailures& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status describing the failure.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProfileQueryFailures& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
