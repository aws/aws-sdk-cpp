/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{
  class CreateProvisionedModelThroughputResult
  {
  public:
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult();
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateProvisionedModelThroughputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const{ return m_provisionedModelArn; }

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(const Aws::String& value) { m_provisionedModelArn = value; }

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(Aws::String&& value) { m_provisionedModelArn = std::move(value); }

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(const char* value) { m_provisionedModelArn.assign(value); }

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputResult& WithProvisionedModelArn(const Aws::String& value) { SetProvisionedModelArn(value); return *this;}

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputResult& WithProvisionedModelArn(Aws::String&& value) { SetProvisionedModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputResult& WithProvisionedModelArn(const char* value) { SetProvisionedModelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProvisionedModelThroughputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProvisionedModelThroughputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProvisionedModelThroughputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_provisionedModelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
