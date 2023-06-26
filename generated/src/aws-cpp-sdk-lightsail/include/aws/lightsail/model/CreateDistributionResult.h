﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LightsailDistribution.h>
#include <aws/lightsail/model/Operation.h>
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
namespace Lightsail
{
namespace Model
{
  class CreateDistributionResult
  {
  public:
    AWS_LIGHTSAIL_API CreateDistributionResult();
    AWS_LIGHTSAIL_API CreateDistributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateDistributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline const LightsailDistribution& GetDistribution() const{ return m_distribution; }

    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline void SetDistribution(const LightsailDistribution& value) { m_distribution = value; }

    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline void SetDistribution(LightsailDistribution&& value) { m_distribution = std::move(value); }

    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline CreateDistributionResult& WithDistribution(const LightsailDistribution& value) { SetDistribution(value); return *this;}

    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline CreateDistributionResult& WithDistribution(LightsailDistribution&& value) { SetDistribution(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateDistributionResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateDistributionResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDistributionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDistributionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDistributionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LightsailDistribution m_distribution;

    Operation m_operation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
