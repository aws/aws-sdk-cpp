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
  class UpdateIntegrationResourcePropertyResult
  {
  public:
    AWS_GLUE_API UpdateIntegrationResourcePropertyResult() = default;
    AWS_GLUE_API UpdateIntegrationResourcePropertyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateIntegrationResourcePropertyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateIntegrationResourcePropertyResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration source.</p>
     */
    inline const SourceProcessingProperties& GetSourceProcessingProperties() const { return m_sourceProcessingProperties; }
    template<typename SourceProcessingPropertiesT = SourceProcessingProperties>
    void SetSourceProcessingProperties(SourceProcessingPropertiesT&& value) { m_sourceProcessingPropertiesHasBeenSet = true; m_sourceProcessingProperties = std::forward<SourceProcessingPropertiesT>(value); }
    template<typename SourceProcessingPropertiesT = SourceProcessingProperties>
    UpdateIntegrationResourcePropertyResult& WithSourceProcessingProperties(SourceProcessingPropertiesT&& value) { SetSourceProcessingProperties(std::forward<SourceProcessingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration target.</p>
     */
    inline const TargetProcessingProperties& GetTargetProcessingProperties() const { return m_targetProcessingProperties; }
    template<typename TargetProcessingPropertiesT = TargetProcessingProperties>
    void SetTargetProcessingProperties(TargetProcessingPropertiesT&& value) { m_targetProcessingPropertiesHasBeenSet = true; m_targetProcessingProperties = std::forward<TargetProcessingPropertiesT>(value); }
    template<typename TargetProcessingPropertiesT = TargetProcessingProperties>
    UpdateIntegrationResourcePropertyResult& WithTargetProcessingProperties(TargetProcessingPropertiesT&& value) { SetTargetProcessingProperties(std::forward<TargetProcessingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIntegrationResourcePropertyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    SourceProcessingProperties m_sourceProcessingProperties;
    bool m_sourceProcessingPropertiesHasBeenSet = false;

    TargetProcessingProperties m_targetProcessingProperties;
    bool m_targetProcessingPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
