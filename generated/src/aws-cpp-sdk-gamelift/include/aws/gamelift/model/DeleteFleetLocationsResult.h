/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/LocationState.h>
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
  class DeleteFleetLocationsResult
  {
  public:
    AWS_GAMELIFT_API DeleteFleetLocationsResult();
    AWS_GAMELIFT_API DeleteFleetLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DeleteFleetLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline DeleteFleetLocationsResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline DeleteFleetLocationsResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that location attributes are being deleted
     * for.</p>
     */
    inline DeleteFleetLocationsResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


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
    inline DeleteFleetLocationsResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline DeleteFleetLocationsResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline DeleteFleetLocationsResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline const Aws::Vector<LocationState>& GetLocationStates() const{ return m_locationStates; }

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline void SetLocationStates(const Aws::Vector<LocationState>& value) { m_locationStates = value; }

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline void SetLocationStates(Aws::Vector<LocationState>&& value) { m_locationStates = std::move(value); }

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline DeleteFleetLocationsResult& WithLocationStates(const Aws::Vector<LocationState>& value) { SetLocationStates(value); return *this;}

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline DeleteFleetLocationsResult& WithLocationStates(Aws::Vector<LocationState>&& value) { SetLocationStates(std::move(value)); return *this;}

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline DeleteFleetLocationsResult& AddLocationStates(const LocationState& value) { m_locationStates.push_back(value); return *this; }

    /**
     * <p>The remote locations that are being deleted, with each location status set to
     * <code>DELETING</code>.</p>
     */
    inline DeleteFleetLocationsResult& AddLocationStates(LocationState&& value) { m_locationStates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteFleetLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteFleetLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteFleetLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::Vector<LocationState> m_locationStates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
