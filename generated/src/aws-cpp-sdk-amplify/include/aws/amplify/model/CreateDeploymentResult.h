/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the create a new deployment request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeploymentResult">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentResult
  {
  public:
    AWS_AMPLIFY_API CreateDeploymentResult() = default;
    AWS_AMPLIFY_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The job ID for this deployment. will supply to start deployment api. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    CreateDeploymentResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> When the <code>fileMap</code> argument is provided in the request,
     * <code>fileUploadUrls</code> will contain a map of file names to upload URLs.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFileUploadUrls() const { return m_fileUploadUrls; }
    template<typename FileUploadUrlsT = Aws::Map<Aws::String, Aws::String>>
    void SetFileUploadUrls(FileUploadUrlsT&& value) { m_fileUploadUrlsHasBeenSet = true; m_fileUploadUrls = std::forward<FileUploadUrlsT>(value); }
    template<typename FileUploadUrlsT = Aws::Map<Aws::String, Aws::String>>
    CreateDeploymentResult& WithFileUploadUrls(FileUploadUrlsT&& value) { SetFileUploadUrls(std::forward<FileUploadUrlsT>(value)); return *this;}
    template<typename FileUploadUrlsKeyT = Aws::String, typename FileUploadUrlsValueT = Aws::String>
    CreateDeploymentResult& AddFileUploadUrls(FileUploadUrlsKeyT&& key, FileUploadUrlsValueT&& value) {
      m_fileUploadUrlsHasBeenSet = true; m_fileUploadUrls.emplace(std::forward<FileUploadUrlsKeyT>(key), std::forward<FileUploadUrlsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> When the <code>fileMap</code> argument is not provided in the request, this
     * <code>zipUploadUrl</code> is returned. </p>
     */
    inline const Aws::String& GetZipUploadUrl() const { return m_zipUploadUrl; }
    template<typename ZipUploadUrlT = Aws::String>
    void SetZipUploadUrl(ZipUploadUrlT&& value) { m_zipUploadUrlHasBeenSet = true; m_zipUploadUrl = std::forward<ZipUploadUrlT>(value); }
    template<typename ZipUploadUrlT = Aws::String>
    CreateDeploymentResult& WithZipUploadUrl(ZipUploadUrlT&& value) { SetZipUploadUrl(std::forward<ZipUploadUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_fileUploadUrls;
    bool m_fileUploadUrlsHasBeenSet = false;

    Aws::String m_zipUploadUrl;
    bool m_zipUploadUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
