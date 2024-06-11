﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class StartBulkDeploymentResult
  {
  public:
    AWS_GREENGRASS_API StartBulkDeploymentResult();
    AWS_GREENGRASS_API StartBulkDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API StartBulkDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const{ return m_bulkDeploymentArn; }
    inline void SetBulkDeploymentArn(const Aws::String& value) { m_bulkDeploymentArn = value; }
    inline void SetBulkDeploymentArn(Aws::String&& value) { m_bulkDeploymentArn = std::move(value); }
    inline void SetBulkDeploymentArn(const char* value) { m_bulkDeploymentArn.assign(value); }
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(const Aws::String& value) { SetBulkDeploymentArn(value); return *this;}
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(Aws::String&& value) { SetBulkDeploymentArn(std::move(value)); return *this;}
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(const char* value) { SetBulkDeploymentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const{ return m_bulkDeploymentId; }
    inline void SetBulkDeploymentId(const Aws::String& value) { m_bulkDeploymentId = value; }
    inline void SetBulkDeploymentId(Aws::String&& value) { m_bulkDeploymentId = std::move(value); }
    inline void SetBulkDeploymentId(const char* value) { m_bulkDeploymentId.assign(value); }
    inline StartBulkDeploymentResult& WithBulkDeploymentId(const Aws::String& value) { SetBulkDeploymentId(value); return *this;}
    inline StartBulkDeploymentResult& WithBulkDeploymentId(Aws::String&& value) { SetBulkDeploymentId(std::move(value)); return *this;}
    inline StartBulkDeploymentResult& WithBulkDeploymentId(const char* value) { SetBulkDeploymentId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartBulkDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartBulkDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartBulkDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_bulkDeploymentArn;

    Aws::String m_bulkDeploymentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
