﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetComputeAuthTokenResult
  {
  public:
    AWS_GAMELIFT_API GetComputeAuthTokenResult();
    AWS_GAMELIFT_API GetComputeAuthTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetComputeAuthTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAuthTokenResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeName = value; }

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeName = std::move(value); }

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline void SetComputeName(const char* value) { m_computeName.assign(value); }

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline GetComputeAuthTokenResult& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline GetComputeAuthTokenResult& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute resource you are requesting the authorization token
     * for.</p>
     */
    inline GetComputeAuthTokenResult& WithComputeName(const char* value) { SetComputeName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline void SetComputeArn(const Aws::String& value) { m_computeArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline void SetComputeArn(Aws::String&& value) { m_computeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline void SetComputeArn(const char* value) { m_computeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline GetComputeAuthTokenResult& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline GetComputeAuthTokenResult& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift compute resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>
     * </p>
     */
    inline GetComputeAuthTokenResult& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}


    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline void SetAuthToken(const Aws::String& value) { m_authToken = value; }

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline void SetAuthToken(Aws::String&& value) { m_authToken = std::move(value); }

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline void SetAuthToken(const char* value) { m_authToken.assign(value); }

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline GetComputeAuthTokenResult& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline GetComputeAuthTokenResult& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}

    /**
     * <p>The authorization token that your game server uses to authenticate with
     * GameLift.</p>
     */
    inline GetComputeAuthTokenResult& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}


    /**
     * <p>The amount of time until the authorization token is no longer valid. To
     * continue using the compute resource for game server hosting, renew the
     * authorization token by using this operation again.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }

    /**
     * <p>The amount of time until the authorization token is no longer valid. To
     * continue using the compute resource for game server hosting, renew the
     * authorization token by using this operation again.</p>
     */
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestamp = value; }

    /**
     * <p>The amount of time until the authorization token is no longer valid. To
     * continue using the compute resource for game server hosting, renew the
     * authorization token by using this operation again.</p>
     */
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestamp = std::move(value); }

    /**
     * <p>The amount of time until the authorization token is no longer valid. To
     * continue using the compute resource for game server hosting, renew the
     * authorization token by using this operation again.</p>
     */
    inline GetComputeAuthTokenResult& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}

    /**
     * <p>The amount of time until the authorization token is no longer valid. To
     * continue using the compute resource for game server hosting, renew the
     * authorization token by using this operation again.</p>
     */
    inline GetComputeAuthTokenResult& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetComputeAuthTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetComputeAuthTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetComputeAuthTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::String m_computeName;

    Aws::String m_computeArn;

    Aws::String m_authToken;

    Aws::Utils::DateTime m_expirationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
