/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FailureReasonCode.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Request for which contact failed to be generated.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FailedRequest">AWS
   * API Reference</a></p>
   */
  class FailedRequest
  {
  public:
    AWS_CONNECT_API FailedRequest() = default;
    AWS_CONNECT_API FailedRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API FailedRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    FailedRequest& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason code for the failure.</p>
     */
    inline FailureReasonCode GetFailureReasonCode() const { return m_failureReasonCode; }
    inline bool FailureReasonCodeHasBeenSet() const { return m_failureReasonCodeHasBeenSet; }
    inline void SetFailureReasonCode(FailureReasonCode value) { m_failureReasonCodeHasBeenSet = true; m_failureReasonCode = value; }
    inline FailedRequest& WithFailureReasonCode(FailureReasonCode value) { SetFailureReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline const Aws::String& GetFailureReasonMessage() const { return m_failureReasonMessage; }
    inline bool FailureReasonMessageHasBeenSet() const { return m_failureReasonMessageHasBeenSet; }
    template<typename FailureReasonMessageT = Aws::String>
    void SetFailureReasonMessage(FailureReasonMessageT&& value) { m_failureReasonMessageHasBeenSet = true; m_failureReasonMessage = std::forward<FailureReasonMessageT>(value); }
    template<typename FailureReasonMessageT = Aws::String>
    FailedRequest& WithFailureReasonMessage(FailureReasonMessageT&& value) { SetFailureReasonMessage(std::forward<FailureReasonMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    FailureReasonCode m_failureReasonCode{FailureReasonCode::NOT_SET};
    bool m_failureReasonCodeHasBeenSet = false;

    Aws::String m_failureReasonMessage;
    bool m_failureReasonMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
