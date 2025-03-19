/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceAccessDetails.h>
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
namespace Lightsail
{
namespace Model
{
  class GetInstanceAccessDetailsResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult() = default;
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline const InstanceAccessDetails& GetAccessDetails() const { return m_accessDetails; }
    template<typename AccessDetailsT = InstanceAccessDetails>
    void SetAccessDetails(AccessDetailsT&& value) { m_accessDetailsHasBeenSet = true; m_accessDetails = std::forward<AccessDetailsT>(value); }
    template<typename AccessDetailsT = InstanceAccessDetails>
    GetInstanceAccessDetailsResult& WithAccessDetails(AccessDetailsT&& value) { SetAccessDetails(std::forward<AccessDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceAccessDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceAccessDetails m_accessDetails;
    bool m_accessDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
