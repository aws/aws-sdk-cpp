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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Build.h>
#include <aws/gamelift/model/AwsCredentials.h>
#include <aws/gamelift/model/S3Location.h>

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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API CreateBuildResult
  {
  public:
    CreateBuildResult();
    CreateBuildResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBuildResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Set of properties for the newly created build.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>Set of properties for the newly created build.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>Set of properties for the newly created build.</p>
     */
    inline void SetBuild(Build&& value) { m_build = value; }

    /**
     * <p>Set of properties for the newly created build.</p>
     */
    inline CreateBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>Set of properties for the newly created build.</p>
     */
    inline CreateBuildResult& WithBuild(Build&& value) { SetBuild(value); return *this;}

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for. If you need to get fresh credentials, call <code>
     * <a>RequestUploadCredentials</a> </code>.</p>
     */
    inline const AwsCredentials& GetUploadCredentials() const{ return m_uploadCredentials; }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for. If you need to get fresh credentials, call <code>
     * <a>RequestUploadCredentials</a> </code>.</p>
     */
    inline void SetUploadCredentials(const AwsCredentials& value) { m_uploadCredentials = value; }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for. If you need to get fresh credentials, call <code>
     * <a>RequestUploadCredentials</a> </code>.</p>
     */
    inline void SetUploadCredentials(AwsCredentials&& value) { m_uploadCredentials = value; }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for. If you need to get fresh credentials, call <code>
     * <a>RequestUploadCredentials</a> </code>.</p>
     */
    inline CreateBuildResult& WithUploadCredentials(const AwsCredentials& value) { SetUploadCredentials(value); return *this;}

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for. If you need to get fresh credentials, call <code>
     * <a>RequestUploadCredentials</a> </code>.</p>
     */
    inline CreateBuildResult& WithUploadCredentials(AwsCredentials&& value) { SetUploadCredentials(value); return *this;}

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline void SetStorageLocation(const S3Location& value) { m_storageLocation = value; }

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline void SetStorageLocation(S3Location&& value) { m_storageLocation = value; }

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline CreateBuildResult& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline CreateBuildResult& WithStorageLocation(S3Location&& value) { SetStorageLocation(value); return *this;}

  private:
    Build m_build;
    AwsCredentials m_uploadCredentials;
    S3Location m_storageLocation;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
