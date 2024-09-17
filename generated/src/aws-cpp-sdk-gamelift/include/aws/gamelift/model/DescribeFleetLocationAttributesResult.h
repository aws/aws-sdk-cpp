/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/LocationAttributes.h>
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
  class DescribeFleetLocationAttributesResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetLocationAttributesResult();
    AWS_GAMELIFT_API DescribeFleetLocationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetLocationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the fleet that location attributes were requested
     * for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline DescribeFleetLocationAttributesResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline DescribeFleetLocationAttributesResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline DescribeFleetLocationAttributesResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
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
    inline DescribeFleetLocationAttributesResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline DescribeFleetLocationAttributesResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline DescribeFleetLocationAttributesResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Location-specific information on the requested fleet's remote locations.</p>
     */
    inline const Aws::Vector<LocationAttributes>& GetLocationAttributes() const{ return m_locationAttributes; }
    inline void SetLocationAttributes(const Aws::Vector<LocationAttributes>& value) { m_locationAttributes = value; }
    inline void SetLocationAttributes(Aws::Vector<LocationAttributes>&& value) { m_locationAttributes = std::move(value); }
    inline DescribeFleetLocationAttributesResult& WithLocationAttributes(const Aws::Vector<LocationAttributes>& value) { SetLocationAttributes(value); return *this;}
    inline DescribeFleetLocationAttributesResult& WithLocationAttributes(Aws::Vector<LocationAttributes>&& value) { SetLocationAttributes(std::move(value)); return *this;}
    inline DescribeFleetLocationAttributesResult& AddLocationAttributes(const LocationAttributes& value) { m_locationAttributes.push_back(value); return *this; }
    inline DescribeFleetLocationAttributesResult& AddLocationAttributes(LocationAttributes&& value) { m_locationAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFleetLocationAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFleetLocationAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFleetLocationAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetLocationAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetLocationAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetLocationAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::Vector<LocationAttributes> m_locationAttributes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
