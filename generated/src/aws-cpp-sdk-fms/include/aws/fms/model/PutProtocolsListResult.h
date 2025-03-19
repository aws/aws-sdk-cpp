/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ProtocolsListData.h>
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
namespace FMS
{
namespace Model
{
  class PutProtocolsListResult
  {
  public:
    AWS_FMS_API PutProtocolsListResult() = default;
    AWS_FMS_API PutProtocolsListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API PutProtocolsListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Firewall Manager protocols list.</p>
     */
    inline const ProtocolsListData& GetProtocolsList() const { return m_protocolsList; }
    template<typename ProtocolsListT = ProtocolsListData>
    void SetProtocolsList(ProtocolsListT&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::forward<ProtocolsListT>(value); }
    template<typename ProtocolsListT = ProtocolsListData>
    PutProtocolsListResult& WithProtocolsList(ProtocolsListT&& value) { SetProtocolsList(std::forward<ProtocolsListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protocols list.</p>
     */
    inline const Aws::String& GetProtocolsListArn() const { return m_protocolsListArn; }
    template<typename ProtocolsListArnT = Aws::String>
    void SetProtocolsListArn(ProtocolsListArnT&& value) { m_protocolsListArnHasBeenSet = true; m_protocolsListArn = std::forward<ProtocolsListArnT>(value); }
    template<typename ProtocolsListArnT = Aws::String>
    PutProtocolsListResult& WithProtocolsListArn(ProtocolsListArnT&& value) { SetProtocolsListArn(std::forward<ProtocolsListArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutProtocolsListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProtocolsListData m_protocolsList;
    bool m_protocolsListHasBeenSet = false;

    Aws::String m_protocolsListArn;
    bool m_protocolsListArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
