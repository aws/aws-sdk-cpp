/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfileConfig.h>
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
  class UpdateFieldLevelEncryptionProfile2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFieldLevelEncryptionProfile"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline const FieldLevelEncryptionProfileConfig& GetFieldLevelEncryptionProfileConfig() const{ return m_fieldLevelEncryptionProfileConfig; }

    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline bool FieldLevelEncryptionProfileConfigHasBeenSet() const { return m_fieldLevelEncryptionProfileConfigHasBeenSet; }

    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = value; }

    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = std::move(value); }

    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { SetFieldLevelEncryptionProfileConfig(value); return *this;}

    /**
     * <p>Request to update a field-level encryption profile.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { SetFieldLevelEncryptionProfileConfig(std::move(value)); return *this;}


    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the profile identity to update. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    FieldLevelEncryptionProfileConfig m_fieldLevelEncryptionProfileConfig;
    bool m_fieldLevelEncryptionProfileConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
