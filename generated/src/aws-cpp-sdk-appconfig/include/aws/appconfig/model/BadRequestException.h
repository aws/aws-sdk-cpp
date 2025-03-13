/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/BadRequestReason.h>
#include <aws/appconfig/model/BadRequestDetails.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by an Amazon Web
   * Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_APPCONFIG_API BadRequestException() = default;
    AWS_APPCONFIG_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    
    inline const BadRequestDetails& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = BadRequestDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = BadRequestDetails>
    BadRequestException& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    BadRequestReason m_reason{BadRequestReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    BadRequestDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
