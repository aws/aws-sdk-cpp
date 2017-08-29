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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API GetFolderResult
  {
  public:
    GetFolderResult();
    GetFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata of the folder.</p>
     */
    inline const FolderMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline void SetMetadata(const FolderMetadata& value) { m_metadata = value; }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline void SetMetadata(FolderMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline GetFolderResult& WithMetadata(const FolderMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the folder.</p>
     */
    inline GetFolderResult& WithMetadata(FolderMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const{ return m_customMetadata; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline void SetCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_customMetadata = value; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline void SetCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_customMetadata = std::move(value); }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& WithCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomMetadata(value); return *this;}

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& WithCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomMetadata(std::move(value)); return *this;}

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(const Aws::String& key, const Aws::String& value) { m_customMetadata.emplace(key, value); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(Aws::String&& key, const Aws::String& value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(const Aws::String& key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(Aws::String&& key, Aws::String&& value) { m_customMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(const char* key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(Aws::String&& key, const char* value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the folder.</p>
     */
    inline GetFolderResult& AddCustomMetadata(const char* key, const char* value) { m_customMetadata.emplace(key, value); return *this; }

  private:

    FolderMetadata m_metadata;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
