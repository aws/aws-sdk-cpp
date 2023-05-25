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
    AWS_GAMELIFT_API RequestUploadCredentialsResult();
    AWS_GAMELIFT_API RequestUploadCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API RequestUploadCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline const AwsCredentials& GetUploadCredentials() const{ return m_uploadCredentials; }

    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline void SetUploadCredentials(const AwsCredentials& value) { m_uploadCredentials = value; }

    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline void SetUploadCredentials(AwsCredentials&& value) { m_uploadCredentials = std::move(value); }

    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline RequestUploadCredentialsResult& WithUploadCredentials(const AwsCredentials& value) { SetUploadCredentials(value); return *this;}

    /**
     * <p>Amazon Web Services credentials required when uploading a game build to the
     * storage location. These credentials have a limited lifespan and are valid only
     * for the build they were issued for.</p>
     */
    inline RequestUploadCredentialsResult& WithUploadCredentials(AwsCredentials&& value) { SetUploadCredentials(std::move(value)); return *this;}


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
    inline void SetStorageLocation(S3Location&& value) { m_storageLocation = std::move(value); }

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline RequestUploadCredentialsResult& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>Amazon S3 path and key, identifying where the game build files are
     * stored.</p>
     */
    inline RequestUploadCredentialsResult& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RequestUploadCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RequestUploadCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RequestUploadCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AwsCredentials m_uploadCredentials;

    S3Location m_storageLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
