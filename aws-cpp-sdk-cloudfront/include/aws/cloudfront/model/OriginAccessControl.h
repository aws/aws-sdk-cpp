/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/OriginAccessControlConfig.h>
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
   * <p>A CloudFront origin access control, including its unique
   * identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginAccessControl">AWS
   * API Reference</a></p>
   */
  class OriginAccessControl
  {
  public:
    AWS_CLOUDFRONT_API OriginAccessControl();
    AWS_CLOUDFRONT_API OriginAccessControl(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginAccessControl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControl& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControl& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControl& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The origin access control.</p>
     */
    inline const OriginAccessControlConfig& GetOriginAccessControlConfig() const{ return m_originAccessControlConfig; }

    /**
     * <p>The origin access control.</p>
     */
    inline bool OriginAccessControlConfigHasBeenSet() const { return m_originAccessControlConfigHasBeenSet; }

    /**
     * <p>The origin access control.</p>
     */
    inline void SetOriginAccessControlConfig(const OriginAccessControlConfig& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = value; }

    /**
     * <p>The origin access control.</p>
     */
    inline void SetOriginAccessControlConfig(OriginAccessControlConfig&& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = std::move(value); }

    /**
     * <p>The origin access control.</p>
     */
    inline OriginAccessControl& WithOriginAccessControlConfig(const OriginAccessControlConfig& value) { SetOriginAccessControlConfig(value); return *this;}

    /**
     * <p>The origin access control.</p>
     */
    inline OriginAccessControl& WithOriginAccessControlConfig(OriginAccessControlConfig&& value) { SetOriginAccessControlConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    OriginAccessControlConfig m_originAccessControlConfig;
    bool m_originAccessControlConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
