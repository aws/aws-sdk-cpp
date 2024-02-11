/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/AwsCredentials.h>
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
  class GetComputeAccessResult
  {
  public:
    AWS_GAMELIFT_API GetComputeAccessResult();
    AWS_GAMELIFT_API GetComputeAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetComputeAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline GetComputeAccessResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline GetComputeAccessResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the fleet that contains the compute resource to be accessed.</p>
     */
    inline GetComputeAccessResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeName = value; }

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeName = std::move(value); }

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline void SetComputeName(const char* value) { m_computeName.assign(value); }

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline GetComputeAccessResult& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline GetComputeAccessResult& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline GetComputeAccessResult& WithComputeName(const char* value) { SetComputeName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetComputeArn(const Aws::String& value) { m_computeArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetComputeArn(Aws::String&& value) { m_computeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetComputeArn(const char* value) { m_computeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift compute resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline GetComputeAccessResult& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}


    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline const AwsCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline void SetCredentials(const AwsCredentials& value) { m_credentials = value; }

    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline void SetCredentials(AwsCredentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline GetComputeAccessResult& WithCredentials(const AwsCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline GetComputeAccessResult& WithCredentials(AwsCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetComputeAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetComputeAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetComputeAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::String m_computeName;

    Aws::String m_computeArn;

    AwsCredentials m_credentials;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
