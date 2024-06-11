/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class StartFleetActionsResult
  {
  public:
    AWS_GAMELIFT_API StartFleetActionsResult();
    AWS_GAMELIFT_API StartFleetActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API StartFleetActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the fleet to restart actions on.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline StartFleetActionsResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline StartFleetActionsResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline StartFleetActionsResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }
    inline StartFleetActionsResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline StartFleetActionsResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline StartFleetActionsResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartFleetActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartFleetActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartFleetActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
