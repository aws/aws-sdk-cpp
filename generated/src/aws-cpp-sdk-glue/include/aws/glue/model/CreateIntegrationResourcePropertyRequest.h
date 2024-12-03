/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceProcessingProperties.h>
#include <aws/glue/model/TargetProcessingProperties.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateIntegrationResourcePropertyRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateIntegrationResourcePropertyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationResourceProperty"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline CreateIntegrationResourcePropertyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CreateIntegrationResourcePropertyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CreateIntegrationResourcePropertyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration source.</p>
     */
    inline const SourceProcessingProperties& GetSourceProcessingProperties() const{ return m_sourceProcessingProperties; }
    inline bool SourceProcessingPropertiesHasBeenSet() const { return m_sourceProcessingPropertiesHasBeenSet; }
    inline void SetSourceProcessingProperties(const SourceProcessingProperties& value) { m_sourceProcessingPropertiesHasBeenSet = true; m_sourceProcessingProperties = value; }
    inline void SetSourceProcessingProperties(SourceProcessingProperties&& value) { m_sourceProcessingPropertiesHasBeenSet = true; m_sourceProcessingProperties = std::move(value); }
    inline CreateIntegrationResourcePropertyRequest& WithSourceProcessingProperties(const SourceProcessingProperties& value) { SetSourceProcessingProperties(value); return *this;}
    inline CreateIntegrationResourcePropertyRequest& WithSourceProcessingProperties(SourceProcessingProperties&& value) { SetSourceProcessingProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource properties associated with the integration target.</p>
     */
    inline const TargetProcessingProperties& GetTargetProcessingProperties() const{ return m_targetProcessingProperties; }
    inline bool TargetProcessingPropertiesHasBeenSet() const { return m_targetProcessingPropertiesHasBeenSet; }
    inline void SetTargetProcessingProperties(const TargetProcessingProperties& value) { m_targetProcessingPropertiesHasBeenSet = true; m_targetProcessingProperties = value; }
    inline void SetTargetProcessingProperties(TargetProcessingProperties&& value) { m_targetProcessingPropertiesHasBeenSet = true; m_targetProcessingProperties = std::move(value); }
    inline CreateIntegrationResourcePropertyRequest& WithTargetProcessingProperties(const TargetProcessingProperties& value) { SetTargetProcessingProperties(value); return *this;}
    inline CreateIntegrationResourcePropertyRequest& WithTargetProcessingProperties(TargetProcessingProperties&& value) { SetTargetProcessingProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    SourceProcessingProperties m_sourceProcessingProperties;
    bool m_sourceProcessingPropertiesHasBeenSet = false;

    TargetProcessingProperties m_targetProcessingProperties;
    bool m_targetProcessingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
