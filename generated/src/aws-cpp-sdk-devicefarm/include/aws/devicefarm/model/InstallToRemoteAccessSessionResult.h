/**
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
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult() = default;
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Upload& GetAppUpload() const { return m_appUpload; }
    template<typename AppUploadT = Upload>
    void SetAppUpload(AppUploadT&& value) { m_appUploadHasBeenSet = true; m_appUpload = std::forward<AppUploadT>(value); }
    template<typename AppUploadT = Upload>
    InstallToRemoteAccessSessionResult& WithAppUpload(AppUploadT&& value) { SetAppUpload(std::forward<AppUploadT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InstallToRemoteAccessSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Upload m_appUpload;
    bool m_appUploadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
