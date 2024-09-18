/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directory-service-data/model/DirectoryUnavailableReason.h>
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
   * <p> The request could not be completed due to a problem in the configuration or
   * current state of the specified directory. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DirectoryUnavailableException">AWS
   * API Reference</a></p>
   */
  class DirectoryUnavailableException
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API DirectoryUnavailableException();
    AWS_DIRECTORYSERVICEDATA_API DirectoryUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API DirectoryUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DirectoryUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DirectoryUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DirectoryUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Reason the request failed for the specified directory. </p>
     */
    inline const DirectoryUnavailableReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const DirectoryUnavailableReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(DirectoryUnavailableReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline DirectoryUnavailableException& WithReason(const DirectoryUnavailableReason& value) { SetReason(value); return *this;}
    inline DirectoryUnavailableException& WithReason(DirectoryUnavailableReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    DirectoryUnavailableReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
