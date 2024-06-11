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
  class ResolveAliasResult
  {
  public:
    AWS_GAMELIFT_API ResolveAliasResult();
    AWS_GAMELIFT_API ResolveAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ResolveAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline ResolveAliasResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline ResolveAliasResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline ResolveAliasResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }
    inline ResolveAliasResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline ResolveAliasResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline ResolveAliasResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ResolveAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ResolveAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ResolveAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
