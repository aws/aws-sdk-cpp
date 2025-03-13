/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Invitation.h>
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
  class GetMasterAccountResult
  {
  public:
    AWS_MACIE2_API GetMasterAccountResult() = default;
    AWS_MACIE2_API GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. If the accounts are associated by a Macie membership invitation, this
     * object also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline const Invitation& GetMaster() const { return m_master; }
    template<typename MasterT = Invitation>
    void SetMaster(MasterT&& value) { m_masterHasBeenSet = true; m_master = std::forward<MasterT>(value); }
    template<typename MasterT = Invitation>
    GetMasterAccountResult& WithMaster(MasterT&& value) { SetMaster(std::forward<MasterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMasterAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Invitation m_master;
    bool m_masterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
