/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/BatchChannelMemberships.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/BatchCreateChannelMembershipError.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class BatchCreateChannelMembershipResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipResult() = default;
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline const BatchChannelMemberships& GetBatchChannelMemberships() const { return m_batchChannelMemberships; }
    template<typename BatchChannelMembershipsT = BatchChannelMemberships>
    void SetBatchChannelMemberships(BatchChannelMembershipsT&& value) { m_batchChannelMembershipsHasBeenSet = true; m_batchChannelMemberships = std::forward<BatchChannelMembershipsT>(value); }
    template<typename BatchChannelMembershipsT = BatchChannelMemberships>
    BatchCreateChannelMembershipResult& WithBatchChannelMemberships(BatchChannelMembershipsT&& value) { SetBatchChannelMemberships(std::forward<BatchChannelMembershipsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<BatchCreateChannelMembershipError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchCreateChannelMembershipError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchCreateChannelMembershipError>>
    BatchCreateChannelMembershipResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchCreateChannelMembershipError>
    BatchCreateChannelMembershipResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchCreateChannelMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchChannelMemberships m_batchChannelMemberships;
    bool m_batchChannelMembershipsHasBeenSet = false;

    Aws::Vector<BatchCreateChannelMembershipError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
