/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServiceType.h>
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
namespace FMS
{
namespace Model
{
  class GetProtectionStatusResult
  {
  public:
    AWS_FMS_API GetProtectionStatusResult() = default;
    AWS_FMS_API GetProtectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetProtectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Firewall Manager administrator account for this policy.</p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    GetProtectionStatusResult& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline SecurityServiceType GetServiceType() const { return m_serviceType; }
    inline void SetServiceType(SecurityServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline GetProtectionStatusResult& WithServiceType(SecurityServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. </p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    GetProtectionStatusResult& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>Amazon Web Services SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetProtectionStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProtectionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    SecurityServiceType m_serviceType{SecurityServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
