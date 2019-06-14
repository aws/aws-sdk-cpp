/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDFRONT_API CreateFieldLevelEncryptionConfig2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreateFieldLevelEncryptionConfig2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFieldLevelEncryptionConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const{ return m_fieldLevelEncryptionConfig; }

    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline bool FieldLevelEncryptionConfigHasBeenSet() const { return m_fieldLevelEncryptionConfigHasBeenSet; }

    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline void SetFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = value; }

    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = std::move(value); }

    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline CreateFieldLevelEncryptionConfig2019_03_26Request& WithFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { SetFieldLevelEncryptionConfig(value); return *this;}

    /**
     * <p>The request to create a new field-level encryption configuration.</p>
     */
    inline CreateFieldLevelEncryptionConfig2019_03_26Request& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { SetFieldLevelEncryptionConfig(std::move(value)); return *this;}

  private:

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;
    bool m_fieldLevelEncryptionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
