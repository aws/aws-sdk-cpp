/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class ReverseReplicationResult
  {
  public:
    AWS_DRS_API ReverseReplicationResult() = default;
    AWS_DRS_API ReverseReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ReverseReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const { return m_reversedDirectionSourceServerArn; }
    template<typename ReversedDirectionSourceServerArnT = Aws::String>
    void SetReversedDirectionSourceServerArn(ReversedDirectionSourceServerArnT&& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = std::forward<ReversedDirectionSourceServerArnT>(value); }
    template<typename ReversedDirectionSourceServerArnT = Aws::String>
    ReverseReplicationResult& WithReversedDirectionSourceServerArn(ReversedDirectionSourceServerArnT&& value) { SetReversedDirectionSourceServerArn(std::forward<ReversedDirectionSourceServerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReverseReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reversedDirectionSourceServerArn;
    bool m_reversedDirectionSourceServerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
