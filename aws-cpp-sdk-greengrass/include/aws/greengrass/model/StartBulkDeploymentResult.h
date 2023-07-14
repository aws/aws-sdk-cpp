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
  class AWS_GREENGRASS_API StartBulkDeploymentResult
  {
  public:
    StartBulkDeploymentResult();
    StartBulkDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartBulkDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const{ return m_bulkDeploymentArn; }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(const Aws::String& value) { m_bulkDeploymentArn = value; }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(Aws::String&& value) { m_bulkDeploymentArn = std::move(value); }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(const char* value) { m_bulkDeploymentArn.assign(value); }

    /**
     * The ARN of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(const Aws::String& value) { SetBulkDeploymentArn(value); return *this;}

    /**
     * The ARN of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(Aws::String&& value) { SetBulkDeploymentArn(std::move(value)); return *this;}

    /**
     * The ARN of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentArn(const char* value) { SetBulkDeploymentArn(value); return *this;}


    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const{ return m_bulkDeploymentId; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const Aws::String& value) { m_bulkDeploymentId = value; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(Aws::String&& value) { m_bulkDeploymentId = std::move(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const char* value) { m_bulkDeploymentId.assign(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentId(const Aws::String& value) { SetBulkDeploymentId(value); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentId(Aws::String&& value) { SetBulkDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline StartBulkDeploymentResult& WithBulkDeploymentId(const char* value) { SetBulkDeploymentId(value); return *this;}

  private:

    Aws::String m_bulkDeploymentArn;

    Aws::String m_bulkDeploymentId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
