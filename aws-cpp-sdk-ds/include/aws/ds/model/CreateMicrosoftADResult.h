/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_DIRECTORYSERVICE_API CreateMicrosoftADResult
  {
  public:
    CreateMicrosoftADResult();
    CreateMicrosoftADResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMicrosoftADResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * The identifier of the directory that was created.
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * The identifier of the directory that was created.
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }

    /**
     * The identifier of the directory that was created.
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = value; }

    /**
     * The identifier of the directory that was created.
     */
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }

    /**
     * The identifier of the directory that was created.
     */
    inline CreateMicrosoftADResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * The identifier of the directory that was created.
     */
    inline CreateMicrosoftADResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * The identifier of the directory that was created.
     */
    inline CreateMicrosoftADResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

  private:
    Aws::String m_directoryId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
