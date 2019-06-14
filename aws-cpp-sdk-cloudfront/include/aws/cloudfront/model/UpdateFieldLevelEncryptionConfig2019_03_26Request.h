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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionConfig2019_03_26Request : public CloudFrontRequest
  {
  public:
    UpdateFieldLevelEncryptionConfig2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFieldLevelEncryptionConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const{ return m_fieldLevelEncryptionConfig; }

    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline bool FieldLevelEncryptionConfigHasBeenSet() const { return m_fieldLevelEncryptionConfigHasBeenSet; }

    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline void SetFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = value; }

    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = std::move(value); }

    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { SetFieldLevelEncryptionConfig(value); return *this;}

    /**
     * <p>Request to update a field-level encryption configuration. </p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { SetFieldLevelEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration you want to update.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the configuration identity to update. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2019_03_26Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;
    bool m_fieldLevelEncryptionConfigHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
