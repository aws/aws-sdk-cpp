/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/KeyGroupConfig.h>
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
  class UpdateKeyGroup2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateKeyGroup2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKeyGroup"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key group configuration.</p>
     */
    inline const KeyGroupConfig& GetKeyGroupConfig() const{ return m_keyGroupConfig; }

    /**
     * <p>The key group configuration.</p>
     */
    inline bool KeyGroupConfigHasBeenSet() const { return m_keyGroupConfigHasBeenSet; }

    /**
     * <p>The key group configuration.</p>
     */
    inline void SetKeyGroupConfig(const KeyGroupConfig& value) { m_keyGroupConfigHasBeenSet = true; m_keyGroupConfig = value; }

    /**
     * <p>The key group configuration.</p>
     */
    inline void SetKeyGroupConfig(KeyGroupConfig&& value) { m_keyGroupConfigHasBeenSet = true; m_keyGroupConfig = std::move(value); }

    /**
     * <p>The key group configuration.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithKeyGroupConfig(const KeyGroupConfig& value) { SetKeyGroupConfig(value); return *this;}

    /**
     * <p>The key group configuration.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithKeyGroupConfig(KeyGroupConfig&& value) { SetKeyGroupConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the key group that you are updating.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The version of the key group that you are updating. The version is the key
     * group's <code>ETag</code> value.</p>
     */
    inline UpdateKeyGroup2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    KeyGroupConfig m_keyGroupConfig;
    bool m_keyGroupConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
