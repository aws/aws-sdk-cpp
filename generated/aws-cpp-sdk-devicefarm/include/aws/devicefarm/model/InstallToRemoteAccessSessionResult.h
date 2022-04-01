﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Upload.h>
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
  class AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult
  {
  public:
    InstallToRemoteAccessSessionResult();
    InstallToRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InstallToRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Upload& GetAppUpload() const{ return m_appUpload; }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline void SetAppUpload(const Upload& value) { m_appUpload = value; }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline void SetAppUpload(Upload&& value) { m_appUpload = std::move(value); }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline InstallToRemoteAccessSessionResult& WithAppUpload(const Upload& value) { SetAppUpload(value); return *this;}

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline InstallToRemoteAccessSessionResult& WithAppUpload(Upload&& value) { SetAppUpload(std::move(value)); return *this;}

  private:

    Upload m_appUpload;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
