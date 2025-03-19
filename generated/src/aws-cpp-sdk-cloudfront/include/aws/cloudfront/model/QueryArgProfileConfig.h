/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/QueryArgProfileConfig">AWS
   * API Reference</a></p>
   */
  class QueryArgProfileConfig
  {
  public:
    AWS_CLOUDFRONT_API QueryArgProfileConfig() = default;
    AWS_CLOUDFRONT_API QueryArgProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API QueryArgProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Flag to set if you want a request to be forwarded to the origin even if the
     * profile specified by the field-level encryption query argument, fle-profile, is
     * unknown.</p>
     */
    inline bool GetForwardWhenQueryArgProfileIsUnknown() const { return m_forwardWhenQueryArgProfileIsUnknown; }
    inline bool ForwardWhenQueryArgProfileIsUnknownHasBeenSet() const { return m_forwardWhenQueryArgProfileIsUnknownHasBeenSet; }
    inline void SetForwardWhenQueryArgProfileIsUnknown(bool value) { m_forwardWhenQueryArgProfileIsUnknownHasBeenSet = true; m_forwardWhenQueryArgProfileIsUnknown = value; }
    inline QueryArgProfileConfig& WithForwardWhenQueryArgProfileIsUnknown(bool value) { SetForwardWhenQueryArgProfileIsUnknown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profiles specified for query argument-profile mapping for field-level
     * encryption.</p>
     */
    inline const QueryArgProfiles& GetQueryArgProfiles() const { return m_queryArgProfiles; }
    inline bool QueryArgProfilesHasBeenSet() const { return m_queryArgProfilesHasBeenSet; }
    template<typename QueryArgProfilesT = QueryArgProfiles>
    void SetQueryArgProfiles(QueryArgProfilesT&& value) { m_queryArgProfilesHasBeenSet = true; m_queryArgProfiles = std::forward<QueryArgProfilesT>(value); }
    template<typename QueryArgProfilesT = QueryArgProfiles>
    QueryArgProfileConfig& WithQueryArgProfiles(QueryArgProfilesT&& value) { SetQueryArgProfiles(std::forward<QueryArgProfilesT>(value)); return *this;}
    ///@}
  private:

    bool m_forwardWhenQueryArgProfileIsUnknown{false};
    bool m_forwardWhenQueryArgProfileIsUnknownHasBeenSet = false;

    QueryArgProfiles m_queryArgProfiles;
    bool m_queryArgProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
