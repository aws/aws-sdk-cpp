/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetCalculatedAttributeForProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult() = default;
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const { return m_calculatedAttributeName; }
    template<typename CalculatedAttributeNameT = Aws::String>
    void SetCalculatedAttributeName(CalculatedAttributeNameT&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::forward<CalculatedAttributeNameT>(value); }
    template<typename CalculatedAttributeNameT = Aws::String>
    GetCalculatedAttributeForProfileResult& WithCalculatedAttributeName(CalculatedAttributeNameT&& value) { SetCalculatedAttributeName(std::forward<CalculatedAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetCalculatedAttributeForProfileResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline const Aws::String& GetIsDataPartial() const { return m_isDataPartial; }
    template<typename IsDataPartialT = Aws::String>
    void SetIsDataPartial(IsDataPartialT&& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = std::forward<IsDataPartialT>(value); }
    template<typename IsDataPartialT = Aws::String>
    GetCalculatedAttributeForProfileResult& WithIsDataPartial(IsDataPartialT&& value) { SetIsDataPartial(std::forward<IsDataPartialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    GetCalculatedAttributeForProfileResult& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the newest object included in the calculated attribute
     * calculation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastObjectTimestamp() const { return m_lastObjectTimestamp; }
    template<typename LastObjectTimestampT = Aws::Utils::DateTime>
    void SetLastObjectTimestamp(LastObjectTimestampT&& value) { m_lastObjectTimestampHasBeenSet = true; m_lastObjectTimestamp = std::forward<LastObjectTimestampT>(value); }
    template<typename LastObjectTimestampT = Aws::Utils::DateTime>
    GetCalculatedAttributeForProfileResult& WithLastObjectTimestamp(LastObjectTimestampT&& value) { SetLastObjectTimestamp(std::forward<LastObjectTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCalculatedAttributeForProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_isDataPartial;
    bool m_isDataPartialHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_lastObjectTimestamp{};
    bool m_lastObjectTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
