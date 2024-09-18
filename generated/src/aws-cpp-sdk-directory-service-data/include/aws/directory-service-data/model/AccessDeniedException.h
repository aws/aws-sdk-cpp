/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directory-service-data/model/AccessDeniedReason.h>
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
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p> You don't have permission to perform the request or access the directory. It
   * can also occur when the <code>DirectoryId</code> doesn't exist or the user,
   * member, or group might be outside of your organizational unit (OU). </p> <p>
   * Make sure that you have the authentication and authorization to perform the
   * action. Review the directory information in the request, and make sure that the
   * object isn't outside of your OU. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API AccessDeniedException();
    AWS_DIRECTORYSERVICEDATA_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Reason the request was unauthorized. </p>
     */
    inline const AccessDeniedReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const AccessDeniedReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(AccessDeniedReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline AccessDeniedException& WithReason(const AccessDeniedReason& value) { SetReason(value); return *this;}
    inline AccessDeniedException& WithReason(AccessDeniedReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AccessDeniedReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
