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
  class DeleteServiceEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DeleteServiceEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the service environment to delete.</p>
     */
    inline const Aws::String& GetServiceEnvironment() const { return m_serviceEnvironment; }
    inline bool ServiceEnvironmentHasBeenSet() const { return m_serviceEnvironmentHasBeenSet; }
    template<typename ServiceEnvironmentT = Aws::String>
    void SetServiceEnvironment(ServiceEnvironmentT&& value) { m_serviceEnvironmentHasBeenSet = true; m_serviceEnvironment = std::forward<ServiceEnvironmentT>(value); }
    template<typename ServiceEnvironmentT = Aws::String>
    DeleteServiceEnvironmentRequest& WithServiceEnvironment(ServiceEnvironmentT&& value) { SetServiceEnvironment(std::forward<ServiceEnvironmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceEnvironment;
    bool m_serviceEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
