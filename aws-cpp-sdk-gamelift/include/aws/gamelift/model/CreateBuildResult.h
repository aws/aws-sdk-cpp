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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuildOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateBuildResult
  {
  public:
    CreateBuildResult();
    CreateBuildResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBuildResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The newly created build record, including a unique build ID and status. </p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>The newly created build record, including a unique build ID and status. </p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>The newly created build record, including a unique build ID and status. </p>
     */
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    /**
     * <p>The newly created build record, including a unique build ID and status. </p>
     */
    inline CreateBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>The newly created build record, including a unique build ID and status. </p>
     */
    inline CreateBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}

    /**
     * <p>This element is not currently in use.</p>
     */
    inline const AwsCredentials& GetUploadCredentials() const{ return m_uploadCredentials; }

    /**
     * <p>This element is not currently in use.</p>
     */
    inline void SetUploadCredentials(const AwsCredentials& value) { m_uploadCredentials = value; }

    /**
     * <p>This element is not currently in use.</p>
     */
    inline void SetUploadCredentials(AwsCredentials&& value) { m_uploadCredentials = std::move(value); }

    /**
     * <p>This element is not currently in use.</p>
     */
    inline CreateBuildResult& WithUploadCredentials(const AwsCredentials& value) { SetUploadCredentials(value); return *this;}

    /**
     * <p>This element is not currently in use.</p>
     */
    inline CreateBuildResult& WithUploadCredentials(AwsCredentials&& value) { SetUploadCredentials(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 location specified in the request.</p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>Amazon S3 location specified in the request.</p>
     */
    inline void SetStorageLocation(const S3Location& value) { m_storageLocation = value; }

    /**
     * <p>Amazon S3 location specified in the request.</p>
     */
    inline void SetStorageLocation(S3Location&& value) { m_storageLocation = std::move(value); }

    /**
     * <p>Amazon S3 location specified in the request.</p>
     */
    inline CreateBuildResult& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>Amazon S3 location specified in the request.</p>
     */
    inline CreateBuildResult& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}

  private:
    Build m_build;
    AwsCredentials m_uploadCredentials;
    S3Location m_storageLocation;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
