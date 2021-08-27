/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API RequestUploadCredentialsResult
  {
  public:
    RequestUploadCredentialsResult();
    RequestUploadCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RequestUploadCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for.</p>
     */
    inline const AwsCredentials& GetUploadCredentials() const{ return m_uploadCredentials; }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for.</p>
     */
    inline void SetUploadCredentials(const AwsCredentials& value) { m_uploadCredentials = value; }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for.</p>
     */
    inline void SetUploadCredentials(AwsCredentials&& value) { m_uploadCredentials = std::move(value); }

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for.</p>
     */
    inline RequestUploadCredentialsResult& WithUploadCredentials(const AwsCredentials& value) { SetUploadCredentials(value); return *this;}

    /**
     * <p>AWS credentials required when uploading a game build to the storage location.
     * These credentials have a limited lifespan and are valid only for the build they
     * were issued for.</p>
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

  private:

    AwsCredentials m_uploadCredentials;

    S3Location m_storageLocation;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
