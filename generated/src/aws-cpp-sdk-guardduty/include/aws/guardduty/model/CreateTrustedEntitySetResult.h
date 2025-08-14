/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreateTrustedEntitySetResult
  {
  public:
    AWS_GUARDDUTY_API CreateTrustedEntitySetResult() = default;
    AWS_GUARDDUTY_API CreateTrustedEntitySetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateTrustedEntitySetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID returned by GuardDuty after creation of the trusted entity set
     * resource.</p>
     */
    inline const Aws::String& GetTrustedEntitySetId() const { return m_trustedEntitySetId; }
    template<typename TrustedEntitySetIdT = Aws::String>
    void SetTrustedEntitySetId(TrustedEntitySetIdT&& value) { m_trustedEntitySetIdHasBeenSet = true; m_trustedEntitySetId = std::forward<TrustedEntitySetIdT>(value); }
    template<typename TrustedEntitySetIdT = Aws::String>
    CreateTrustedEntitySetResult& WithTrustedEntitySetId(TrustedEntitySetIdT&& value) { SetTrustedEntitySetId(std::forward<TrustedEntitySetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTrustedEntitySetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustedEntitySetId;
    bool m_trustedEntitySetIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
