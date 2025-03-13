/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateResourceProfileRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateResourceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceProfile"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateResourceProfileRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new sensitivity score for the bucket. Valid values are: 100, assign the
     * maximum score and apply the <i>Sensitive</i> label to the bucket; and, null
     * (empty), assign a score that Amazon Macie calculates automatically after you
     * submit the request.</p>
     */
    inline int GetSensitivityScoreOverride() const { return m_sensitivityScoreOverride; }
    inline bool SensitivityScoreOverrideHasBeenSet() const { return m_sensitivityScoreOverrideHasBeenSet; }
    inline void SetSensitivityScoreOverride(int value) { m_sensitivityScoreOverrideHasBeenSet = true; m_sensitivityScoreOverride = value; }
    inline UpdateResourceProfileRequest& WithSensitivityScoreOverride(int value) { SetSensitivityScoreOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_sensitivityScoreOverride{0};
    bool m_sensitivityScoreOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
