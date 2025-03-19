/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Macie2
{
namespace Model
{
  class CreateCustomDataIdentifierResult
  {
  public:
    AWS_MACIE2_API CreateCustomDataIdentifierResult() = default;
    AWS_MACIE2_API CreateCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API CreateCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline const Aws::String& GetCustomDataIdentifierId() const { return m_customDataIdentifierId; }
    template<typename CustomDataIdentifierIdT = Aws::String>
    void SetCustomDataIdentifierId(CustomDataIdentifierIdT&& value) { m_customDataIdentifierIdHasBeenSet = true; m_customDataIdentifierId = std::forward<CustomDataIdentifierIdT>(value); }
    template<typename CustomDataIdentifierIdT = Aws::String>
    CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(CustomDataIdentifierIdT&& value) { SetCustomDataIdentifierId(std::forward<CustomDataIdentifierIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCustomDataIdentifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customDataIdentifierId;
    bool m_customDataIdentifierIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
