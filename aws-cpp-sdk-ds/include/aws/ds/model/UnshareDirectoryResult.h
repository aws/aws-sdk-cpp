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
  class AWS_DIRECTORYSERVICE_API UnshareDirectoryResult
  {
  public:
    UnshareDirectoryResult();
    UnshareDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UnshareDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryId = value; }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryId.assign(value); }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}

  private:

    Aws::String m_sharedDirectoryId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
