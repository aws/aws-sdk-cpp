/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PrivacyImpact.h>
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
namespace CleanRooms
{
namespace Model
{
  class PreviewPrivacyImpactResult
  {
  public:
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult() = default;
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline const PrivacyImpact& GetPrivacyImpact() const { return m_privacyImpact; }
    template<typename PrivacyImpactT = PrivacyImpact>
    void SetPrivacyImpact(PrivacyImpactT&& value) { m_privacyImpactHasBeenSet = true; m_privacyImpact = std::forward<PrivacyImpactT>(value); }
    template<typename PrivacyImpactT = PrivacyImpact>
    PreviewPrivacyImpactResult& WithPrivacyImpact(PrivacyImpactT&& value) { SetPrivacyImpact(std::forward<PrivacyImpactT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PreviewPrivacyImpactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PrivacyImpact m_privacyImpact;
    bool m_privacyImpactHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
