/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/DirectoryConfig.h>
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
namespace AppStream
{
namespace Model
{
  class CreateDirectoryConfigResult
  {
  public:
    AWS_APPSTREAM_API CreateDirectoryConfigResult() = default;
    AWS_APPSTREAM_API CreateDirectoryConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateDirectoryConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the directory configuration.</p>
     */
    inline const DirectoryConfig& GetDirectoryConfig() const { return m_directoryConfig; }
    template<typename DirectoryConfigT = DirectoryConfig>
    void SetDirectoryConfig(DirectoryConfigT&& value) { m_directoryConfigHasBeenSet = true; m_directoryConfig = std::forward<DirectoryConfigT>(value); }
    template<typename DirectoryConfigT = DirectoryConfig>
    CreateDirectoryConfigResult& WithDirectoryConfig(DirectoryConfigT&& value) { SetDirectoryConfig(std::forward<DirectoryConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectoryConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectoryConfig m_directoryConfig;
    bool m_directoryConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
