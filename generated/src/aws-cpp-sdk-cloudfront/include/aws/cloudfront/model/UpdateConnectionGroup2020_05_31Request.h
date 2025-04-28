/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
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
  class UpdateConnectionGroup2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateConnectionGroup2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionGroup"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateConnectionGroup2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable IPv6 for the connection group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesEnableIPv6">Enable
     * IPv6</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetIpv6Enabled() const { return m_ipv6Enabled; }
    inline bool Ipv6EnabledHasBeenSet() const { return m_ipv6EnabledHasBeenSet; }
    inline void SetIpv6Enabled(bool value) { m_ipv6EnabledHasBeenSet = true; m_ipv6Enabled = value; }
    inline UpdateConnectionGroup2020_05_31Request& WithIpv6Enabled(bool value) { SetIpv6Enabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the connection group that you're updating.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateConnectionGroup2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
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
    UpdateConnectionGroup2020_05_31Request& WithAnycastIpListId(AnycastIpListIdT&& value) { SetAnycastIpListId(std::forward<AnycastIpListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the connection group is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateConnectionGroup2020_05_31Request& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_ipv6Enabled{false};
    bool m_ipv6EnabledHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
