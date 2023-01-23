/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/DirectoryConfig.h>
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
    AWS_APPSTREAM_API CreateDirectoryConfigResult();
    AWS_APPSTREAM_API CreateDirectoryConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateDirectoryConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the directory configuration.</p>
     */
    inline const DirectoryConfig& GetDirectoryConfig() const{ return m_directoryConfig; }

    /**
     * <p>Information about the directory configuration.</p>
     */
    inline void SetDirectoryConfig(const DirectoryConfig& value) { m_directoryConfig = value; }

    /**
     * <p>Information about the directory configuration.</p>
     */
    inline void SetDirectoryConfig(DirectoryConfig&& value) { m_directoryConfig = std::move(value); }

    /**
     * <p>Information about the directory configuration.</p>
     */
    inline CreateDirectoryConfigResult& WithDirectoryConfig(const DirectoryConfig& value) { SetDirectoryConfig(value); return *this;}

    /**
     * <p>Information about the directory configuration.</p>
     */
    inline CreateDirectoryConfigResult& WithDirectoryConfig(DirectoryConfig&& value) { SetDirectoryConfig(std::move(value)); return *this;}

  private:

    DirectoryConfig m_directoryConfig;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
