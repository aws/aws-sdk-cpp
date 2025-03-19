/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/SharedDirectory.h>
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
  class AcceptSharedDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult() = default;
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline const SharedDirectory& GetSharedDirectory() const { return m_sharedDirectory; }
    template<typename SharedDirectoryT = SharedDirectory>
    void SetSharedDirectory(SharedDirectoryT&& value) { m_sharedDirectoryHasBeenSet = true; m_sharedDirectory = std::forward<SharedDirectoryT>(value); }
    template<typename SharedDirectoryT = SharedDirectory>
    AcceptSharedDirectoryResult& WithSharedDirectory(SharedDirectoryT&& value) { SetSharedDirectory(std::forward<SharedDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AcceptSharedDirectoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SharedDirectory m_sharedDirectory;
    bool m_sharedDirectoryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
