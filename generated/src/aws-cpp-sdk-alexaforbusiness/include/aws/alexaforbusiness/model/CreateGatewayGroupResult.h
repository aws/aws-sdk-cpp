﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class CreateGatewayGroupResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateGatewayGroupResult();
    AWS_ALEXAFORBUSINESS_API CreateGatewayGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API CreateGatewayGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArn = value; }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArn.assign(value); }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGatewayGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGatewayGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGatewayGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_gatewayGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
