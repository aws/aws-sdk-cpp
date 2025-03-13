/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateLicenseEndpointResult
  {
  public:
    AWS_DEADLINE_API CreateLicenseEndpointResult() = default;
    AWS_DEADLINE_API CreateLicenseEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateLicenseEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The license endpoint ID.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const { return m_licenseEndpointId; }
    template<typename LicenseEndpointIdT = Aws::String>
    void SetLicenseEndpointId(LicenseEndpointIdT&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::forward<LicenseEndpointIdT>(value); }
    template<typename LicenseEndpointIdT = Aws::String>
    CreateLicenseEndpointResult& WithLicenseEndpointId(LicenseEndpointIdT&& value) { SetLicenseEndpointId(std::forward<LicenseEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLicenseEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
