/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSTREAM_API UserStackAssociationError
  {
  public:
    UserStackAssociationError();
    UserStackAssociationError(Aws::Utils::Json::JsonView jsonValue);
    UserStackAssociationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline const UserStackAssociation& GetUserStackAssociation() const{ return m_userStackAssociation; }

    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline bool UserStackAssociationHasBeenSet() const { return m_userStackAssociationHasBeenSet; }

    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline void SetUserStackAssociation(const UserStackAssociation& value) { m_userStackAssociationHasBeenSet = true; m_userStackAssociation = value; }

    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline void SetUserStackAssociation(UserStackAssociation&& value) { m_userStackAssociationHasBeenSet = true; m_userStackAssociation = std::move(value); }

    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline UserStackAssociationError& WithUserStackAssociation(const UserStackAssociation& value) { SetUserStackAssociation(value); return *this;}

    /**
     * <p>Information about the user and associated stack.</p>
     */
    inline UserStackAssociationError& WithUserStackAssociation(UserStackAssociation&& value) { SetUserStackAssociation(std::move(value)); return *this;}


    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline const UserStackAssociationErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline void SetErrorCode(const UserStackAssociationErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline void SetErrorCode(UserStackAssociationErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline UserStackAssociationError& WithErrorCode(const UserStackAssociationErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the error that is returned when a user can’t be associated
     * with or disassociated from a stack.</p>
     */
    inline UserStackAssociationError& WithErrorCode(UserStackAssociationErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline UserStackAssociationError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline UserStackAssociationError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for the error that is returned when a user can’t be
     * associated with or disassociated from a stack.</p>
     */
    inline UserStackAssociationError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    UserStackAssociation m_userStackAssociation;
    bool m_userStackAssociationHasBeenSet;

    UserStackAssociationErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
