/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>The summary of the lifecycle policy preview request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyPreviewSummary">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyPreviewSummary
  {
  public:
    AWS_ECR_API LifecyclePolicyPreviewSummary();
    AWS_ECR_API LifecyclePolicyPreviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API LifecyclePolicyPreviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of expiring images.</p>
     */
    inline int GetExpiringImageTotalCount() const{ return m_expiringImageTotalCount; }
    inline bool ExpiringImageTotalCountHasBeenSet() const { return m_expiringImageTotalCountHasBeenSet; }
    inline void SetExpiringImageTotalCount(int value) { m_expiringImageTotalCountHasBeenSet = true; m_expiringImageTotalCount = value; }
    inline LifecyclePolicyPreviewSummary& WithExpiringImageTotalCount(int value) { SetExpiringImageTotalCount(value); return *this;}
    ///@}
  private:

    int m_expiringImageTotalCount;
    bool m_expiringImageTotalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
