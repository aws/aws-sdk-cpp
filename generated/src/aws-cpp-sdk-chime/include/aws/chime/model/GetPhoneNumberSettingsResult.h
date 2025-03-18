/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class GetPhoneNumberSettingsResult
  {
  public:
    AWS_CHIME_API GetPhoneNumberSettingsResult() = default;
    AWS_CHIME_API GetPhoneNumberSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetPhoneNumberSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline const Aws::String& GetCallingName() const { return m_callingName; }
    template<typename CallingNameT = Aws::String>
    void SetCallingName(CallingNameT&& value) { m_callingNameHasBeenSet = true; m_callingName = std::forward<CallingNameT>(value); }
    template<typename CallingNameT = Aws::String>
    GetPhoneNumberSettingsResult& WithCallingName(CallingNameT&& value) { SetCallingName(std::forward<CallingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated outbound calling name timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCallingNameUpdatedTimestamp() const { return m_callingNameUpdatedTimestamp; }
    template<typename CallingNameUpdatedTimestampT = Aws::Utils::DateTime>
    void SetCallingNameUpdatedTimestamp(CallingNameUpdatedTimestampT&& value) { m_callingNameUpdatedTimestampHasBeenSet = true; m_callingNameUpdatedTimestamp = std::forward<CallingNameUpdatedTimestampT>(value); }
    template<typename CallingNameUpdatedTimestampT = Aws::Utils::DateTime>
    GetPhoneNumberSettingsResult& WithCallingNameUpdatedTimestamp(CallingNameUpdatedTimestampT&& value) { SetCallingNameUpdatedTimestamp(std::forward<CallingNameUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPhoneNumberSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;

    Aws::Utils::DateTime m_callingNameUpdatedTimestamp{};
    bool m_callingNameUpdatedTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
