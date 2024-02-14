/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class GetBaselineRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API GetBaselineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBaseline"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline const Aws::String& GetBaselineIdentifier() const{ return m_baselineIdentifier; }

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline void SetBaselineIdentifier(const Aws::String& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = value; }

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline void SetBaselineIdentifier(Aws::String&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::move(value); }

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline void SetBaselineIdentifier(const char* value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier.assign(value); }

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline GetBaselineRequest& WithBaselineIdentifier(const Aws::String& value) { SetBaselineIdentifier(value); return *this;}

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline GetBaselineRequest& WithBaselineIdentifier(Aws::String&& value) { SetBaselineIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>Baseline</code> resource to be retrieved.</p>
     */
    inline GetBaselineRequest& WithBaselineIdentifier(const char* value) { SetBaselineIdentifier(value); return *this;}

  private:

    Aws::String m_baselineIdentifier;
    bool m_baselineIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
