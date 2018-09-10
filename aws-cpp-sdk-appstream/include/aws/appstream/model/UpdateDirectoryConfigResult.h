/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSTREAM_API UpdateDirectoryConfigResult
  {
  public:
    UpdateDirectoryConfigResult();
    UpdateDirectoryConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDirectoryConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline const DirectoryConfig& GetDirectoryConfig() const{ return m_directoryConfig; }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline void SetDirectoryConfig(const DirectoryConfig& value) { m_directoryConfig = value; }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline void SetDirectoryConfig(DirectoryConfig&& value) { m_directoryConfig = std::move(value); }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline UpdateDirectoryConfigResult& WithDirectoryConfig(const DirectoryConfig& value) { SetDirectoryConfig(value); return *this;}

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline UpdateDirectoryConfigResult& WithDirectoryConfig(DirectoryConfig&& value) { SetDirectoryConfig(std::move(value)); return *this;}

  private:

    DirectoryConfig m_directoryConfig;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
