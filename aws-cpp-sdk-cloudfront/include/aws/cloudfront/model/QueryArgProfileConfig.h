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
#include <aws/cloudfront/model/QueryArgProfiles.h>
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
   * <p>Configuration for query argument-profile mapping for field-level
   * encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/QueryArgProfileConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API QueryArgProfileConfig
  {
  public:
    QueryArgProfileConfig();
    QueryArgProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    QueryArgProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Flag to set if you want a request to be forwarded to the origin even if the
     * profile specified by the field-level encryption query argument, fle-profile, is
     * unknown.</p>
     */
    inline bool GetForwardWhenQueryArgProfileIsUnknown() const{ return m_forwardWhenQueryArgProfileIsUnknown; }

    /**
     * <p>Flag to set if you want a request to be forwarded to the origin even if the
     * profile specified by the field-level encryption query argument, fle-profile, is
     * unknown.</p>
     */
    inline bool ForwardWhenQueryArgProfileIsUnknownHasBeenSet() const { return m_forwardWhenQueryArgProfileIsUnknownHasBeenSet; }

    /**
     * <p>Flag to set if you want a request to be forwarded to the origin even if the
     * profile specified by the field-level encryption query argument, fle-profile, is
     * unknown.</p>
     */
    inline void SetForwardWhenQueryArgProfileIsUnknown(bool value) { m_forwardWhenQueryArgProfileIsUnknownHasBeenSet = true; m_forwardWhenQueryArgProfileIsUnknown = value; }

    /**
     * <p>Flag to set if you want a request to be forwarded to the origin even if the
     * profile specified by the field-level encryption query argument, fle-profile, is
     * unknown.</p>
     */
    inline QueryArgProfileConfig& WithForwardWhenQueryArgProfileIsUnknown(bool value) { SetForwardWhenQueryArgProfileIsUnknown(value); return *this;}


    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline const QueryArgProfiles& GetQueryArgProfiles() const{ return m_queryArgProfiles; }

    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline bool QueryArgProfilesHasBeenSet() const { return m_queryArgProfilesHasBeenSet; }

    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline void SetQueryArgProfiles(const QueryArgProfiles& value) { m_queryArgProfilesHasBeenSet = true; m_queryArgProfiles = value; }

    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline void SetQueryArgProfiles(QueryArgProfiles&& value) { m_queryArgProfilesHasBeenSet = true; m_queryArgProfiles = std::move(value); }

    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfileConfig& WithQueryArgProfiles(const QueryArgProfiles& value) { SetQueryArgProfiles(value); return *this;}

    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline QueryArgProfileConfig& WithQueryArgProfiles(QueryArgProfiles&& value) { SetQueryArgProfiles(std::move(value)); return *this;}

  private:

    bool m_forwardWhenQueryArgProfileIsUnknown;
    bool m_forwardWhenQueryArgProfileIsUnknownHasBeenSet;

    QueryArgProfiles m_queryArgProfiles;
    bool m_queryArgProfilesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
