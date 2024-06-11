﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Upload.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the response from the server after AWS Device Farm makes a request
   * to install to a remote access session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSessionResult">AWS
   * API Reference</a></p>
   */
  class InstallToRemoteAccessSessionResult
  {
  public:
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult();
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Upload& GetAppUpload() const{ return m_appUpload; }
    inline void SetAppUpload(const Upload& value) { m_appUpload = value; }
    inline void SetAppUpload(Upload&& value) { m_appUpload = std::move(value); }
    inline InstallToRemoteAccessSessionResult& WithAppUpload(const Upload& value) { SetAppUpload(value); return *this;}
    inline InstallToRemoteAccessSessionResult& WithAppUpload(Upload&& value) { SetAppUpload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InstallToRemoteAccessSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InstallToRemoteAccessSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InstallToRemoteAccessSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Upload m_appUpload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
