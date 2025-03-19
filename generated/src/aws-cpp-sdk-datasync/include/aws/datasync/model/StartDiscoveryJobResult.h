/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{
  class StartDiscoveryJobResult
  {
  public:
    AWS_DATASYNC_API StartDiscoveryJobResult() = default;
    AWS_DATASYNC_API StartDiscoveryJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API StartDiscoveryJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    StartDiscoveryJobResult& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDiscoveryJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
