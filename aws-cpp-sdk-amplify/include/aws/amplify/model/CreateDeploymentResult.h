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
   * <p> Result structure for create a new deployment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeploymentResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API CreateDeploymentResult
  {
  public:
    CreateDeploymentResult();
    CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline CreateDeploymentResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline CreateDeploymentResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The jobId for this deployment, will supply to start deployment api. </p>
     */
    inline CreateDeploymentResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFileUploadUrls() const{ return m_fileUploadUrls; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline void SetFileUploadUrls(const Aws::Map<Aws::String, Aws::String>& value) { m_fileUploadUrls = value; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline void SetFileUploadUrls(Aws::Map<Aws::String, Aws::String>&& value) { m_fileUploadUrls = std::move(value); }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& WithFileUploadUrls(const Aws::Map<Aws::String, Aws::String>& value) { SetFileUploadUrls(value); return *this;}

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& WithFileUploadUrls(Aws::Map<Aws::String, Aws::String>&& value) { SetFileUploadUrls(std::move(value)); return *this;}

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(const Aws::String& key, const Aws::String& value) { m_fileUploadUrls.emplace(key, value); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, const Aws::String& value) { m_fileUploadUrls.emplace(std::move(key), value); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(const Aws::String& key, Aws::String&& value) { m_fileUploadUrls.emplace(key, std::move(value)); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, Aws::String&& value) { m_fileUploadUrls.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(const char* key, Aws::String&& value) { m_fileUploadUrls.emplace(key, std::move(value)); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(Aws::String&& key, const char* value) { m_fileUploadUrls.emplace(std::move(key), value); return *this; }

    /**
     * <p> When the fileMap argument is provided in the request, the fileUploadUrls
     * will contain a map of file names to upload url. </p>
     */
    inline CreateDeploymentResult& AddFileUploadUrls(const char* key, const char* value) { m_fileUploadUrls.emplace(key, value); return *this; }


    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline const Aws::String& GetZipUploadUrl() const{ return m_zipUploadUrl; }

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline void SetZipUploadUrl(const Aws::String& value) { m_zipUploadUrl = value; }

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline void SetZipUploadUrl(Aws::String&& value) { m_zipUploadUrl = std::move(value); }

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline void SetZipUploadUrl(const char* value) { m_zipUploadUrl.assign(value); }

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline CreateDeploymentResult& WithZipUploadUrl(const Aws::String& value) { SetZipUploadUrl(value); return *this;}

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline CreateDeploymentResult& WithZipUploadUrl(Aws::String&& value) { SetZipUploadUrl(std::move(value)); return *this;}

    /**
     * <p> When the fileMap argument is NOT provided. This zipUploadUrl will be
     * returned. </p>
     */
    inline CreateDeploymentResult& WithZipUploadUrl(const char* value) { SetZipUploadUrl(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::Map<Aws::String, Aws::String> m_fileUploadUrls;

    Aws::String m_zipUploadUrl;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
