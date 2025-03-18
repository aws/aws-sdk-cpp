/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/IdentityPoolUsage.h>
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
   * Response to a successful DescribeIdentityPoolUsage request.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsageResponse">AWS
   * API Reference</a></p>
   */
  class DescribeIdentityPoolUsageResult
  {
  public:
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult() = default;
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API DescribeIdentityPoolUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Information about the usage of the identity pool.
     */
    inline const IdentityPoolUsage& GetIdentityPoolUsage() const { return m_identityPoolUsage; }
    template<typename IdentityPoolUsageT = IdentityPoolUsage>
    void SetIdentityPoolUsage(IdentityPoolUsageT&& value) { m_identityPoolUsageHasBeenSet = true; m_identityPoolUsage = std::forward<IdentityPoolUsageT>(value); }
    template<typename IdentityPoolUsageT = IdentityPoolUsage>
    DescribeIdentityPoolUsageResult& WithIdentityPoolUsage(IdentityPoolUsageT&& value) { SetIdentityPoolUsage(std::forward<IdentityPoolUsageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIdentityPoolUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityPoolUsage m_identityPoolUsage;
    bool m_identityPoolUsageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
