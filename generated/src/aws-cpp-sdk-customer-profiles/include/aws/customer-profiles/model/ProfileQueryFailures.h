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
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures();
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileQueryFailures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile id the failure belongs to.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ProfileQueryFailures& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ProfileQueryFailures& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ProfileQueryFailures& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ProfileQueryFailures& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ProfileQueryFailures& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ProfileQueryFailures& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status describing the failure.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProfileQueryFailures& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
