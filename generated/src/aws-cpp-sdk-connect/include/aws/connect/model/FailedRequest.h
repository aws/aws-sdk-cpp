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
    AWS_CONNECT_API FailedRequest();
    AWS_CONNECT_API FailedRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API FailedRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = value; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::move(value); }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier.assign(value); }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline FailedRequest& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline FailedRequest& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline FailedRequest& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}


    /**
     * <p>Reason code for the failure.</p>
     */
    inline const FailureReasonCode& GetFailureReasonCode() const{ return m_failureReasonCode; }

    /**
     * <p>Reason code for the failure.</p>
     */
    inline bool FailureReasonCodeHasBeenSet() const { return m_failureReasonCodeHasBeenSet; }

    /**
     * <p>Reason code for the failure.</p>
     */
    inline void SetFailureReasonCode(const FailureReasonCode& value) { m_failureReasonCodeHasBeenSet = true; m_failureReasonCode = value; }

    /**
     * <p>Reason code for the failure.</p>
     */
    inline void SetFailureReasonCode(FailureReasonCode&& value) { m_failureReasonCodeHasBeenSet = true; m_failureReasonCode = std::move(value); }

    /**
     * <p>Reason code for the failure.</p>
     */
    inline FailedRequest& WithFailureReasonCode(const FailureReasonCode& value) { SetFailureReasonCode(value); return *this;}

    /**
     * <p>Reason code for the failure.</p>
     */
    inline FailedRequest& WithFailureReasonCode(FailureReasonCode&& value) { SetFailureReasonCode(std::move(value)); return *this;}


    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline const Aws::String& GetFailureReasonMessage() const{ return m_failureReasonMessage; }

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline bool FailureReasonMessageHasBeenSet() const { return m_failureReasonMessageHasBeenSet; }

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline void SetFailureReasonMessage(const Aws::String& value) { m_failureReasonMessageHasBeenSet = true; m_failureReasonMessage = value; }

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline void SetFailureReasonMessage(Aws::String&& value) { m_failureReasonMessageHasBeenSet = true; m_failureReasonMessage = std::move(value); }

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline void SetFailureReasonMessage(const char* value) { m_failureReasonMessageHasBeenSet = true; m_failureReasonMessage.assign(value); }

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline FailedRequest& WithFailureReasonMessage(const Aws::String& value) { SetFailureReasonMessage(value); return *this;}

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline FailedRequest& WithFailureReasonMessage(Aws::String&& value) { SetFailureReasonMessage(std::move(value)); return *this;}

    /**
     * <p>Why the request to create a contact failed.</p>
     */
    inline FailedRequest& WithFailureReasonMessage(const char* value) { SetFailureReasonMessage(value); return *this;}

  private:

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    FailureReasonCode m_failureReasonCode;
    bool m_failureReasonCodeHasBeenSet = false;

    Aws::String m_failureReasonMessage;
    bool m_failureReasonMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
