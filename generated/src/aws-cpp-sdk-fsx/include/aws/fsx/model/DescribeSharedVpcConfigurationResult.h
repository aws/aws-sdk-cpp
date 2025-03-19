/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{
  class DescribeSharedVpcConfigurationResult
  {
  public:
    AWS_FSX_API DescribeSharedVpcConfigurationResult() = default;
    AWS_FSX_API DescribeSharedVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeSharedVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline const Aws::String& GetEnableFsxRouteTableUpdatesFromParticipantAccounts() const { return m_enableFsxRouteTableUpdatesFromParticipantAccounts; }
    template<typename EnableFsxRouteTableUpdatesFromParticipantAccountsT = Aws::String>
    void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(EnableFsxRouteTableUpdatesFromParticipantAccountsT&& value) { m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = true; m_enableFsxRouteTableUpdatesFromParticipantAccounts = std::forward<EnableFsxRouteTableUpdatesFromParticipantAccountsT>(value); }
    template<typename EnableFsxRouteTableUpdatesFromParticipantAccountsT = Aws::String>
    DescribeSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(EnableFsxRouteTableUpdatesFromParticipantAccountsT&& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(std::forward<EnableFsxRouteTableUpdatesFromParticipantAccountsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSharedVpcConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_enableFsxRouteTableUpdatesFromParticipantAccounts;
    bool m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
