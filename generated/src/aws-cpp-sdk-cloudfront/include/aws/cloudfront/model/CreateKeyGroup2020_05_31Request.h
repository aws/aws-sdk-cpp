﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/KeyGroupConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateKeyGroup2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateKeyGroup2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeyGroup"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A key group configuration.</p>
     */
    inline const KeyGroupConfig& GetKeyGroupConfig() const { return m_keyGroupConfig; }
    inline bool KeyGroupConfigHasBeenSet() const { return m_keyGroupConfigHasBeenSet; }
    template<typename KeyGroupConfigT = KeyGroupConfig>
    void SetKeyGroupConfig(KeyGroupConfigT&& value) { m_keyGroupConfigHasBeenSet = true; m_keyGroupConfig = std::forward<KeyGroupConfigT>(value); }
    template<typename KeyGroupConfigT = KeyGroupConfig>
    CreateKeyGroup2020_05_31Request& WithKeyGroupConfig(KeyGroupConfigT&& value) { SetKeyGroupConfig(std::forward<KeyGroupConfigT>(value)); return *this;}
    ///@}
  private:

    KeyGroupConfig m_keyGroupConfig;
    bool m_keyGroupConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
