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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/Directory.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API GetDirectoryResult
  {
  public:
    GetDirectoryResult();
    GetDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the directory.</p>
     */
    inline const Directory& GetDirectory() const{ return m_directory; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(const Directory& value) { m_directory = value; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(Directory&& value) { m_directory = std::move(value); }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(const Directory& value) { SetDirectory(value); return *this;}

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(Directory&& value) { SetDirectory(std::move(value)); return *this;}

  private:

    Directory m_directory;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
