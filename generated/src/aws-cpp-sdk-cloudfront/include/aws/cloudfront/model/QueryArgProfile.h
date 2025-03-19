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
    AWS_CLOUDFRONT_API QueryArgProfile() = default;
    AWS_CLOUDFRONT_API QueryArgProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API QueryArgProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Query argument for field-level encryption query argument-profile mapping.</p>
     */
    inline const Aws::String& GetQueryArg() const { return m_queryArg; }
    inline bool QueryArgHasBeenSet() const { return m_queryArgHasBeenSet; }
    template<typename QueryArgT = Aws::String>
    void SetQueryArg(QueryArgT&& value) { m_queryArgHasBeenSet = true; m_queryArg = std::forward<QueryArgT>(value); }
    template<typename QueryArgT = Aws::String>
    QueryArgProfile& WithQueryArg(QueryArgT&& value) { SetQueryArg(std::forward<QueryArgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of profile to use for field-level encryption query argument-profile
     * mapping</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    QueryArgProfile& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryArg;
    bool m_queryArgHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
