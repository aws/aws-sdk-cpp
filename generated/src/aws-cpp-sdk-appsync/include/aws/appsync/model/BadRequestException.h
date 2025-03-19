/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/BadRequestReason.h>
#include <aws/appsync/model/BadRequestDetail.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The request is not well formed. For example, a value is invalid or a required
   * field is missing. Check the field values, and then try again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_APPSYNC_API BadRequestException() = default;
    AWS_APPSYNC_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BadRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BadRequestReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(BadRequestReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline BadRequestException& WithReason(BadRequestReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    
    inline const BadRequestDetail& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = BadRequestDetail>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = BadRequestDetail>
    BadRequestException& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    BadRequestReason m_reason{BadRequestReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    BadRequestDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
