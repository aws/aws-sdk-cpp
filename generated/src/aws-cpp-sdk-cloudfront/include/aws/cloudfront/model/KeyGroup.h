/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/KeyGroupConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A key group.</p> <p>A key group contains a list of public keys that you can
   * use with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
   * signed URLs and signed cookies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyGroup">AWS
   * API Reference</a></p>
   */
  class KeyGroup
  {
  public:
    AWS_CLOUDFRONT_API KeyGroup();
    AWS_CLOUDFRONT_API KeyGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the key group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the key group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the key group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the key group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the key group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the key group.</p>
     */
    inline KeyGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the key group.</p>
     */
    inline KeyGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the key group.</p>
     */
    inline KeyGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline KeyGroup& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time when the key group was last modified.</p>
     */
    inline KeyGroup& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


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
    inline KeyGroup& WithKeyGroupConfig(const KeyGroupConfig& value) { SetKeyGroupConfig(value); return *this;}

    /**
     * <p>The key group configuration.</p>
     */
    inline KeyGroup& WithKeyGroupConfig(KeyGroupConfig&& value) { SetKeyGroupConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    KeyGroupConfig m_keyGroupConfig;
    bool m_keyGroupConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
