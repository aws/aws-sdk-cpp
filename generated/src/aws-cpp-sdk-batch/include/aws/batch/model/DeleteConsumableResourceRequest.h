/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class DeleteConsumableResourceRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DeleteConsumableResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConsumableResource"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the consumable resource that will be deleted.</p>
     */
    inline const Aws::String& GetConsumableResource() const { return m_consumableResource; }
    inline bool ConsumableResourceHasBeenSet() const { return m_consumableResourceHasBeenSet; }
    template<typename ConsumableResourceT = Aws::String>
    void SetConsumableResource(ConsumableResourceT&& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = std::forward<ConsumableResourceT>(value); }
    template<typename ConsumableResourceT = Aws::String>
    DeleteConsumableResourceRequest& WithConsumableResource(ConsumableResourceT&& value) { SetConsumableResource(std::forward<ConsumableResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResource;
    bool m_consumableResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
