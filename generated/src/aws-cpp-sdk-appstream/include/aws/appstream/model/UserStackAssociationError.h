/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/UserStackAssociation.h>
#include <aws/appstream/model/UserStackAssociationErrorCode.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the error that is returned when a user can’t be associated with or
   * disassociated from a stack. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UserStackAssociationError">AWS
   * API Reference</a></p>
   */
  class UserStackAssociationError
  {
  public:
    AWS_APPSTREAM_API UserStackAssociationError() = default;
    AWS_APPSTREAM_API UserStackAssociationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UserStackAssociationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline const UserStackAssociation& GetUserStackAssociation() const { return m_userStackAssociation; }
    inline bool UserStackAssociationHasBeenSet() const { return m_userStackAssociationHasBeenSet; }
    template<typename UserStackAssociationT = UserStackAssociation>
    void SetUserStackAssociation(UserStackAssociationT&& value) { m_userStackAssociationHasBeenSet = true; m_userStackAssociation = std::forward<UserStackAssociationT>(value); }
    template<typename UserStackAssociationT = UserStackAssociation>
    UserStackAssociationError& WithUserStackAssociation(UserStackAssociationT&& value) { SetUserStackAssociation(std::forward<UserStackAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline UserStackAssociationErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(UserStackAssociationErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline UserStackAssociationError& WithErrorCode(UserStackAssociationErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UserStackAssociationError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    UserStackAssociation m_userStackAssociation;
    bool m_userStackAssociationHasBeenSet = false;

    UserStackAssociationErrorCode m_errorCode{UserStackAssociationErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
