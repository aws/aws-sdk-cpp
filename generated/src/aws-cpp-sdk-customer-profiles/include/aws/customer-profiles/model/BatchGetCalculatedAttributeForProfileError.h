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
   * <p>Error object describing why a specific profile and calculated attribute
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/BatchGetCalculatedAttributeForProfileError">AWS
   * API Reference</a></p>
   */
  class BatchGetCalculatedAttributeForProfileError
  {
  public:
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileError();
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status code for why a specific profile and calculated attribute failed.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BatchGetCalculatedAttributeForProfileError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing why a specific profile and calculated attribute
     * failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchGetCalculatedAttributeForProfileError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile id that failed.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline BatchGetCalculatedAttributeForProfileError& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileError& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
