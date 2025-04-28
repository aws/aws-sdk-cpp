/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Tags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateConnectionGroup2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateConnectionGroup2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectionGroup"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the connection group. Enter a friendly identifier that is unique
     * within your Amazon Web Services account. This name can't be updated after you
     * create the connection group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConnectionGroup2020_05_31Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable IPv6 for the connection group. The default is <code>true</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesEnableIPv6">Enable
     * IPv6</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetIpv6Enabled() const { return m_ipv6Enabled; }
    inline bool Ipv6EnabledHasBeenSet() const { return m_ipv6EnabledHasBeenSet; }
    inline void SetIpv6Enabled(bool value) { m_ipv6EnabledHasBeenSet = true; m_ipv6Enabled = value; }
    inline CreateConnectionGroup2020_05_31Request& WithIpv6Enabled(bool value) { SetIpv6Enabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Tags& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Tags>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Tags>
    CreateConnectionGroup2020_05_31Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetAnycastIpListId() const { return m_anycastIpListId; }
    inline bool AnycastIpListIdHasBeenSet() const { return m_anycastIpListIdHasBeenSet; }
    template<typename AnycastIpListIdT = Aws::String>
    void SetAnycastIpListId(AnycastIpListIdT&& value) { m_anycastIpListIdHasBeenSet = true; m_anycastIpListId = std::forward<AnycastIpListIdT>(value); }
    template<typename AnycastIpListIdT = Aws::String>
    CreateConnectionGroup2020_05_31Request& WithAnycastIpListId(AnycastIpListIdT&& value) { SetAnycastIpListId(std::forward<AnycastIpListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable the connection group.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateConnectionGroup2020_05_31Request& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_ipv6Enabled{false};
    bool m_ipv6EnabledHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
