﻿/**
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
    AWS_AMPLIFY_API CreateDeploymentResult();
    AWS_AMPLIFY_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The job ID for this deployment. will supply to start deployment api. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline CreateDeploymentResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline CreateDeploymentResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> When the <code>fileMap</code> argument is provided in the request,
     * <code>fileUploadUrls</code> will contain a map of file names to upload URLs.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFileUploadUrls() const{ return m_fileUploadUrls; }
    inline void SetFileUploadUrls(const Aws::Map<Aws::String, Aws::String>& value) { m_fileUploadUrls = value; }
    inline void SetFileUploadUrls(Aws::Map<Aws::String, Aws::String>&& value) { m_fileUploadUrls = std::move(value); }
    inline CreateDeploymentResult& WithFileUploadUrls(const Aws::Map<Aws::String, Aws::String>& value) { SetFileUploadUrls(value); return *this;}
    inline CreateDeploymentResult& WithFileUploadUrls(Aws::Map<Aws::String, Aws::String>&& value) { SetFileUploadUrls(std::move(value)); return *this;}
    inline CreateDeploymentResult& AddFileUploadUrls(const Aws::String& key, const Aws::String& value) { m_fileUploadUrls.emplace(key, value); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, const Aws::String& value) { m_fileUploadUrls.emplace(std::move(key), value); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(const Aws::String& key, Aws::String&& value) { m_fileUploadUrls.emplace(key, std::move(value)); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, Aws::String&& value) { m_fileUploadUrls.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(const char* key, Aws::String&& value) { m_fileUploadUrls.emplace(key, std::move(value)); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, const char* value) { m_fileUploadUrls.emplace(std::move(key), value); return *this; }
    inline CreateDeploymentResult& AddFileUploadUrls(const char* key, const char* value) { m_fileUploadUrls.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> When the <code>fileMap</code> argument is not provided in the request, this
     * <code>zipUploadUrl</code> is returned. </p>
     */
    inline const Aws::String& GetZipUploadUrl() const{ return m_zipUploadUrl; }
    inline void SetZipUploadUrl(const Aws::String& value) { m_zipUploadUrl = value; }
    inline void SetZipUploadUrl(Aws::String&& value) { m_zipUploadUrl = std::move(value); }
    inline void SetZipUploadUrl(const char* value) { m_zipUploadUrl.assign(value); }
    inline CreateDeploymentResult& WithZipUploadUrl(const Aws::String& value) { SetZipUploadUrl(value); return *this;}
    inline CreateDeploymentResult& WithZipUploadUrl(Aws::String&& value) { SetZipUploadUrl(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithZipUploadUrl(const char* value) { SetZipUploadUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::Map<Aws::String, Aws::String> m_fileUploadUrls;

    Aws::String m_zipUploadUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
