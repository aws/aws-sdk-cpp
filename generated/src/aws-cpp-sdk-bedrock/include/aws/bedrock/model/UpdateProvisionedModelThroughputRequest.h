/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class UpdateProvisionedModelThroughputRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateProvisionedModelThroughputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline const Aws::String& GetProvisionedModelId() const{ return m_provisionedModelId; }

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline bool ProvisionedModelIdHasBeenSet() const { return m_provisionedModelIdHasBeenSet; }

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline void SetProvisionedModelId(const Aws::String& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = value; }

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline void SetProvisionedModelId(Aws::String&& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = std::move(value); }

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline void SetProvisionedModelId(const char* value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId.assign(value); }

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithProvisionedModelId(const Aws::String& value) { SetProvisionedModelId(value); return *this;}

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithProvisionedModelId(Aws::String&& value) { SetProvisionedModelId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the provisioned throughput to update.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithProvisionedModelId(const char* value) { SetProvisionedModelId(value); return *this;}


    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline const Aws::String& GetDesiredProvisionedModelName() const{ return m_desiredProvisionedModelName; }

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline bool DesiredProvisionedModelNameHasBeenSet() const { return m_desiredProvisionedModelNameHasBeenSet; }

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline void SetDesiredProvisionedModelName(const Aws::String& value) { m_desiredProvisionedModelNameHasBeenSet = true; m_desiredProvisionedModelName = value; }

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline void SetDesiredProvisionedModelName(Aws::String&& value) { m_desiredProvisionedModelNameHasBeenSet = true; m_desiredProvisionedModelName = std::move(value); }

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline void SetDesiredProvisionedModelName(const char* value) { m_desiredProvisionedModelNameHasBeenSet = true; m_desiredProvisionedModelName.assign(value); }

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredProvisionedModelName(const Aws::String& value) { SetDesiredProvisionedModelName(value); return *this;}

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredProvisionedModelName(Aws::String&& value) { SetDesiredProvisionedModelName(std::move(value)); return *this;}

    /**
     * <p>The new name for this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredProvisionedModelName(const char* value) { SetDesiredProvisionedModelName(value); return *this;}


    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline const Aws::String& GetDesiredModelId() const{ return m_desiredModelId; }

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline bool DesiredModelIdHasBeenSet() const { return m_desiredModelIdHasBeenSet; }

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline void SetDesiredModelId(const Aws::String& value) { m_desiredModelIdHasBeenSet = true; m_desiredModelId = value; }

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline void SetDesiredModelId(Aws::String&& value) { m_desiredModelIdHasBeenSet = true; m_desiredModelId = std::move(value); }

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline void SetDesiredModelId(const char* value) { m_desiredModelIdHasBeenSet = true; m_desiredModelId.assign(value); }

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredModelId(const Aws::String& value) { SetDesiredModelId(value); return *this;}

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredModelId(Aws::String&& value) { SetDesiredModelId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new model to associate with this provisioned throughput.</p>
     */
    inline UpdateProvisionedModelThroughputRequest& WithDesiredModelId(const char* value) { SetDesiredModelId(value); return *this;}

  private:

    Aws::String m_provisionedModelId;
    bool m_provisionedModelIdHasBeenSet = false;

    Aws::String m_desiredProvisionedModelName;
    bool m_desiredProvisionedModelNameHasBeenSet = false;

    Aws::String m_desiredModelId;
    bool m_desiredModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
