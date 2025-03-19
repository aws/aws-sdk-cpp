/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/IdentityUsage.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * The response to a successful DescribeIdentityUsage request.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsageResponse">AWS
   * API Reference</a></p>
   */
  class DescribeIdentityUsageResult
  {
  public:
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult() = default;
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API DescribeIdentityUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Usage information for the identity.
     */
    inline const IdentityUsage& GetIdentityUsage() const { return m_identityUsage; }
    template<typename IdentityUsageT = IdentityUsage>
    void SetIdentityUsage(IdentityUsageT&& value) { m_identityUsageHasBeenSet = true; m_identityUsage = std::forward<IdentityUsageT>(value); }
    template<typename IdentityUsageT = IdentityUsage>
    DescribeIdentityUsageResult& WithIdentityUsage(IdentityUsageT&& value) { SetIdentityUsage(std::forward<IdentityUsageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIdentityUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityUsage m_identityUsage;
    bool m_identityUsageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
