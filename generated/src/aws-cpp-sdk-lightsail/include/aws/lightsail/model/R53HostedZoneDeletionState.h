﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/R53HostedZoneDeletionStateCode.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the deletion state of an Amazon Route 53 hosted zone for a domain
   * that is being automatically delegated to an Amazon Lightsail DNS
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/R53HostedZoneDeletionState">AWS
   * API Reference</a></p>
   */
  class R53HostedZoneDeletionState
  {
  public:
    AWS_LIGHTSAIL_API R53HostedZoneDeletionState() = default;
    AWS_LIGHTSAIL_API R53HostedZoneDeletionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API R53HostedZoneDeletionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the deletion state.</p> <p>Following are the possible
     * values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The hosted zone was
     * successfully deleted.</p> </li> <li> <p> <code>PENDING</code> - The hosted zone
     * deletion is in progress.</p> </li> <li> <p> <code>FAILED</code> - The hosted
     * zone deletion failed.</p> </li> <li> <p> <code>STARTED</code> - The hosted zone
     * deletion started.</p> </li> </ul>
     */
    inline R53HostedZoneDeletionStateCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(R53HostedZoneDeletionStateCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline R53HostedZoneDeletionState& WithCode(R53HostedZoneDeletionStateCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    R53HostedZoneDeletionState& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    R53HostedZoneDeletionStateCode m_code{R53HostedZoneDeletionStateCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
