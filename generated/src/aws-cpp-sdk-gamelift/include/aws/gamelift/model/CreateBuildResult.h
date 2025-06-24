/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Build.h>
#include <aws/gamelift/model/AwsCredentials.h>
#include <aws/gamelift/model/S3Location.h>
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
namespace GameLift
{
namespace Model
{
  class CreateBuildResult
  {
  public:
    AWS_GAMELIFT_API CreateBuildResult() = default;
    AWS_GAMELIFT_API CreateBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created build resource, including a unique build IDs and status.
     * </p>
     */
    inline const Build& GetBuild() const { return m_build; }
    template<typename BuildT = Build>
    void SetBuild(BuildT&& value) { m_buildHasBeenSet = true; m_build = std::forward<BuildT>(value); }
    template<typename BuildT = Build>
    CreateBuildResult& WithBuild(BuildT&& value) { SetBuild(std::forward<BuildT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This element is returned only when the operation is called without a storage
     * location. It contains credentials to use when you are uploading a build file to
     * an Amazon S3 bucket that is owned by Amazon GameLift Servers. Credentials have a
     * limited life span. To refresh these credentials, call <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_RequestUploadCredentials.html">RequestUploadCredentials</a>.
     * </p>
     */
    inline const AwsCredentials& GetUploadCredentials() const { return m_uploadCredentials; }
    template<typename UploadCredentialsT = AwsCredentials>
    void SetUploadCredentials(UploadCredentialsT&& value) { m_uploadCredentialsHasBeenSet = true; m_uploadCredentials = std::forward<UploadCredentialsT>(value); }
    template<typename UploadCredentialsT = AwsCredentials>
    CreateBuildResult& WithUploadCredentials(UploadCredentialsT&& value) { SetUploadCredentials(std::forward<UploadCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 location for your game build file, including bucket name and
     * key.</p>
     */
    inline const S3Location& GetStorageLocation() const { return m_storageLocation; }
    template<typename StorageLocationT = S3Location>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = S3Location>
    CreateBuildResult& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBuildResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Build m_build;
    bool m_buildHasBeenSet = false;

    AwsCredentials m_uploadCredentials;
    bool m_uploadCredentialsHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
