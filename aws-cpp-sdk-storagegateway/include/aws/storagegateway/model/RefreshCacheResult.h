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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API RefreshCacheResult
  {
  public:
    RefreshCacheResult();
    RefreshCacheResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RefreshCacheResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARN = value; }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARN.assign(value); }

    
    inline RefreshCacheResult& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline RefreshCacheResult& WithFileShareARN(Aws::String&& value) { SetFileShareARN(value); return *this;}

    
    inline RefreshCacheResult& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}

  private:
    Aws::String m_fileShareARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
