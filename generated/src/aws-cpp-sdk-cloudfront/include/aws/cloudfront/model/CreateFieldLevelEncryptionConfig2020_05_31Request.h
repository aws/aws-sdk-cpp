/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/FieldLevelEncryptionConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateFieldLevelEncryptionConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateFieldLevelEncryptionConfig2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFieldLevelEncryptionConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const { return m_fieldLevelEncryptionConfig; }
    inline bool FieldLevelEncryptionConfigHasBeenSet() const { return m_fieldLevelEncryptionConfigHasBeenSet; }
    template<typename FieldLevelEncryptionConfigT = FieldLevelEncryptionConfig>
    void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfigT&& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = std::forward<FieldLevelEncryptionConfigT>(value); }
    template<typename FieldLevelEncryptionConfigT = FieldLevelEncryptionConfig>
    CreateFieldLevelEncryptionConfig2020_05_31Request& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfigT&& value) { SetFieldLevelEncryptionConfig(std::forward<FieldLevelEncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;
    bool m_fieldLevelEncryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
