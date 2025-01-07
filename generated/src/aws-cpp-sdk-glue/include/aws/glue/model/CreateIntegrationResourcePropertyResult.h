/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceProcessingProperties.h>
#include <aws/glue/model/TargetProcessingProperties.h>
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
namespace Glue
{
namespace Model
{
  class CreateIntegrationResourcePropertyResult
  {
  public:
    AWS_GLUE_API CreateIntegrationResourcePropertyResult();
    AWS_GLUE_API CreateIntegrationResourcePropertyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateIntegrationResourcePropertyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline CreateIntegrationResourcePropertyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration source.</p>
     */
    inline const SourceProcessingProperties& GetSourceProcessingProperties() const{ return m_sourceProcessingProperties; }
    inline void SetSourceProcessingProperties(const SourceProcessingProperties& value) { m_sourceProcessingProperties = value; }
    inline void SetSourceProcessingProperties(SourceProcessingProperties&& value) { m_sourceProcessingProperties = std::move(value); }
    inline CreateIntegrationResourcePropertyResult& WithSourceProcessingProperties(const SourceProcessingProperties& value) { SetSourceProcessingProperties(value); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithSourceProcessingProperties(SourceProcessingProperties&& value) { SetSourceProcessingProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration target.</p>
     */
    inline const TargetProcessingProperties& GetTargetProcessingProperties() const{ return m_targetProcessingProperties; }
    inline void SetTargetProcessingProperties(const TargetProcessingProperties& value) { m_targetProcessingProperties = value; }
    inline void SetTargetProcessingProperties(TargetProcessingProperties&& value) { m_targetProcessingProperties = std::move(value); }
    inline CreateIntegrationResourcePropertyResult& WithTargetProcessingProperties(const TargetProcessingProperties& value) { SetTargetProcessingProperties(value); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithTargetProcessingProperties(TargetProcessingProperties&& value) { SetTargetProcessingProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIntegrationResourcePropertyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIntegrationResourcePropertyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    SourceProcessingProperties m_sourceProcessingProperties;

    TargetProcessingProperties m_targetProcessingProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
