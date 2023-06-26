/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/ActiveDirectoryErrorType.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>An Active Directory error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ActiveDirectoryError">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryError
  {
  public:
    AWS_FSX_API ActiveDirectoryError();
    AWS_FSX_API ActiveDirectoryError(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ActiveDirectoryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const{ return m_activeDirectoryId; }

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline void SetActiveDirectoryId(const Aws::String& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = value; }

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline void SetActiveDirectoryId(Aws::String&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::move(value); }

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline void SetActiveDirectoryId(const char* value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId.assign(value); }

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline ActiveDirectoryError& WithActiveDirectoryId(const Aws::String& value) { SetActiveDirectoryId(value); return *this;}

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline ActiveDirectoryError& WithActiveDirectoryId(Aws::String&& value) { SetActiveDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID of the directory that an error pertains to.</p>
     */
    inline ActiveDirectoryError& WithActiveDirectoryId(const char* value) { SetActiveDirectoryId(value); return *this;}


    /**
     * <p>The type of Active Directory error.</p>
     */
    inline const ActiveDirectoryErrorType& GetType() const{ return m_type; }

    /**
     * <p>The type of Active Directory error.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of Active Directory error.</p>
     */
    inline void SetType(const ActiveDirectoryErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of Active Directory error.</p>
     */
    inline void SetType(ActiveDirectoryErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of Active Directory error.</p>
     */
    inline ActiveDirectoryError& WithType(const ActiveDirectoryErrorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of Active Directory error.</p>
     */
    inline ActiveDirectoryError& WithType(ActiveDirectoryErrorType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ActiveDirectoryError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ActiveDirectoryError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ActiveDirectoryError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet = false;

    ActiveDirectoryErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
