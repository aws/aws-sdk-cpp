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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Upload.h>

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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the response from the server after AWS Device Farm makes a request
   * to install to a remote access session.</p>
   */
  class AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult
  {
  public:
    InstallToRemoteAccessSessionResult();
    InstallToRemoteAccessSessionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InstallToRemoteAccessSessionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Upload& GetAppUpload() const{ return m_appUpload; }

    
    inline void SetAppUpload(const Upload& value) { m_appUpload = value; }

    
    inline void SetAppUpload(Upload&& value) { m_appUpload = value; }

    
    inline InstallToRemoteAccessSessionResult& WithAppUpload(const Upload& value) { SetAppUpload(value); return *this;}

    
    inline InstallToRemoteAccessSessionResult& WithAppUpload(Upload&& value) { SetAppUpload(value); return *this;}

  private:
    Upload m_appUpload;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
