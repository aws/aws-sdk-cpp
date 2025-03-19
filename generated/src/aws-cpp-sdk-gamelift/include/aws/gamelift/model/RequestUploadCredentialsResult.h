/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class RequestUploadCredentialsResult
  {
  public:
    AWS_GAMELIFT_API RequestUploadCredentialsResult() = default;
    AWS_GAMELIFT_API RequestUploadCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API RequestUploadCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline const AwsCredentials& GetUploadCredentials() const { return m_uploadCredentials; }
    template<typename UploadCredentialsT = AwsCredentials>
    void SetUploadCredentials(UploadCredentialsT&& value) { m_uploadCredentialsHasBeenSet = true; m_uploadCredentials = std::forward<UploadCredentialsT>(value); }
    template<typename UploadCredentialsT = AwsCredentials>
    RequestUploadCredentialsResult& WithUploadCredentials(UploadCredentialsT&& value) { SetUploadCredentials(std::forward<UploadCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline const S3Location& GetStorageLocation() const { return m_storageLocation; }
    template<typename StorageLocationT = S3Location>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = S3Location>
    RequestUploadCredentialsResult& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RequestUploadCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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
