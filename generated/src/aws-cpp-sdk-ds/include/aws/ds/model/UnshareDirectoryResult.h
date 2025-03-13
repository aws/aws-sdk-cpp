/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  class UnshareDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult() = default;
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const { return m_sharedDirectoryId; }
    template<typename SharedDirectoryIdT = Aws::String>
    void SetSharedDirectoryId(SharedDirectoryIdT&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::forward<SharedDirectoryIdT>(value); }
    template<typename SharedDirectoryIdT = Aws::String>
    UnshareDirectoryResult& WithSharedDirectoryId(SharedDirectoryIdT&& value) { SetSharedDirectoryId(std::forward<SharedDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UnshareDirectoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
