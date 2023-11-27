/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{
  class CreateLandingZoneResult
  {
  public:
    AWS_CONTROLTOWER_API CreateLandingZoneResult();
    AWS_CONTROLTOWER_API CreateLandingZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API CreateLandingZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline CreateLandingZoneResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline CreateLandingZoneResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline CreateLandingZoneResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifier = value; }

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifier.assign(value); }

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline CreateLandingZoneResult& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline CreateLandingZoneResult& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline CreateLandingZoneResult& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLandingZoneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLandingZoneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLandingZoneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_operationIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
