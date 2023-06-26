/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfileConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateFieldLevelEncryptionProfile2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateFieldLevelEncryptionProfile2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFieldLevelEncryptionProfile"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline const FieldLevelEncryptionProfileConfig& GetFieldLevelEncryptionProfileConfig() const{ return m_fieldLevelEncryptionProfileConfig; }

    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline bool FieldLevelEncryptionProfileConfigHasBeenSet() const { return m_fieldLevelEncryptionProfileConfigHasBeenSet; }

    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = value; }

    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = std::move(value); }

    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline CreateFieldLevelEncryptionProfile2020_05_31Request& WithFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { SetFieldLevelEncryptionProfileConfig(value); return *this;}

    /**
     * <p>The request to create a field-level encryption profile.</p>
     */
    inline CreateFieldLevelEncryptionProfile2020_05_31Request& WithFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { SetFieldLevelEncryptionProfileConfig(std::move(value)); return *this;}

  private:

    FieldLevelEncryptionProfileConfig m_fieldLevelEncryptionProfileConfig;
    bool m_fieldLevelEncryptionProfileConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
