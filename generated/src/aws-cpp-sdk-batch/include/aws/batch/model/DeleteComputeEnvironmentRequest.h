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
   * <p>Contains the parameters for
   * <code>DeleteComputeEnvironment</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteComputeEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class DeleteComputeEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DeleteComputeEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComputeEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to
     * delete.</p>
     */
    inline const Aws::String& GetComputeEnvironment() const { return m_computeEnvironment; }
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }
    template<typename ComputeEnvironmentT = Aws::String>
    void SetComputeEnvironment(ComputeEnvironmentT&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::forward<ComputeEnvironmentT>(value); }
    template<typename ComputeEnvironmentT = Aws::String>
    DeleteComputeEnvironmentRequest& WithComputeEnvironment(ComputeEnvironmentT&& value) { SetComputeEnvironment(std::forward<ComputeEnvironmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
