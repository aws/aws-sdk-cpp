/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>This exception is thrown when the client submits a malformed
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_DATASYNC_API InvalidRequestException() = default;
    AWS_DATASYNC_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    InvalidRequestException& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatasyncErrorCode() const { return m_datasyncErrorCode; }
    inline bool DatasyncErrorCodeHasBeenSet() const { return m_datasyncErrorCodeHasBeenSet; }
    template<typename DatasyncErrorCodeT = Aws::String>
    void SetDatasyncErrorCode(DatasyncErrorCodeT&& value) { m_datasyncErrorCodeHasBeenSet = true; m_datasyncErrorCode = std::forward<DatasyncErrorCodeT>(value); }
    template<typename DatasyncErrorCodeT = Aws::String>
    InvalidRequestException& WithDatasyncErrorCode(DatasyncErrorCodeT&& value) { SetDatasyncErrorCode(std::forward<DatasyncErrorCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_datasyncErrorCode;
    bool m_datasyncErrorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
