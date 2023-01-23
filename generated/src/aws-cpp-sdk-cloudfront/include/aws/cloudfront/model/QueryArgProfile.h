/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Query argument-profile mapping for field-level encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/QueryArgProfile">AWS
   * API Reference</a></p>
   */
  class QueryArgProfile
  {
  public:
    AWS_CLOUDFRONT_API QueryArgProfile();
    AWS_CLOUDFRONT_API QueryArgProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API QueryArgProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline const Aws::String& GetQueryArg() const{ return m_queryArg; }

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline bool QueryArgHasBeenSet() const { return m_queryArgHasBeenSet; }

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline void SetQueryArg(const Aws::String& value) { m_queryArgHasBeenSet = true; m_queryArg = value; }

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline void SetQueryArg(Aws::String&& value) { m_queryArgHasBeenSet = true; m_queryArg = std::move(value); }

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline void SetQueryArg(const char* value) { m_queryArgHasBeenSet = true; m_queryArg.assign(value); }

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline QueryArgProfile& WithQueryArg(const Aws::String& value) { SetQueryArg(value); return *this;}

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline QueryArgProfile& WithQueryArg(Aws::String&& value) { SetQueryArg(std::move(value)); return *this;}

    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline QueryArgProfile& WithQueryArg(const char* value) { SetQueryArg(value); return *this;}


    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline QueryArgProfile& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline QueryArgProfile& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline QueryArgProfile& WithProfileId(const char* value) { SetProfileId(value); return *this;}

  private:

    Aws::String m_queryArg;
    bool m_queryArgHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
