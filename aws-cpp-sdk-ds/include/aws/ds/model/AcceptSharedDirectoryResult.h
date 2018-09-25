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
#include <aws/ds/model/SharedDirectory.h>
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
  class AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult
  {
  public:
    AcceptSharedDirectoryResult();
    AcceptSharedDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcceptSharedDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline const SharedDirectory& GetSharedDirectory() const{ return m_sharedDirectory; }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline void SetSharedDirectory(const SharedDirectory& value) { m_sharedDirectory = value; }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline void SetSharedDirectory(SharedDirectory&& value) { m_sharedDirectory = std::move(value); }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline AcceptSharedDirectoryResult& WithSharedDirectory(const SharedDirectory& value) { SetSharedDirectory(value); return *this;}

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline AcceptSharedDirectoryResult& WithSharedDirectory(SharedDirectory&& value) { SetSharedDirectory(std::move(value)); return *this;}

  private:

    SharedDirectory m_sharedDirectory;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
