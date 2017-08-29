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
#include <aws/workdocs/model/ResourcePath.h>
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
  class AWS_WORKDOCS_API GetFolderPathResult
  {
  public:
    GetFolderPathResult();
    GetFolderPathResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFolderPathResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The path information.</p>
     */
    inline const ResourcePath& GetPath() const{ return m_path; }

    /**
     * <p>The path information.</p>
     */
    inline void SetPath(const ResourcePath& value) { m_path = value; }

    /**
     * <p>The path information.</p>
     */
    inline void SetPath(ResourcePath&& value) { m_path = std::move(value); }

    /**
     * <p>The path information.</p>
     */
    inline GetFolderPathResult& WithPath(const ResourcePath& value) { SetPath(value); return *this;}

    /**
     * <p>The path information.</p>
     */
    inline GetFolderPathResult& WithPath(ResourcePath&& value) { SetPath(std::move(value)); return *this;}

  private:

    ResourcePath m_path;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
