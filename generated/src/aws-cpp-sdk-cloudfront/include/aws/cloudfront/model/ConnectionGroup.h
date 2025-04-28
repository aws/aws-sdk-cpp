/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/Tags.h>
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
   * <p>The connection group for your distribution tenants. When you first create a
   * distribution tenant and you don't specify a connection group, CloudFront will
   * automatically create a default connection group for you. When you create a new
   * distribution tenant and don't specify a connection group, the default one will
   * be associated with your distribution tenant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ConnectionGroup">AWS
   * API Reference</a></p>
   */
  class ConnectionGroup
  {
  public:
    AWS_CLOUDFRONT_API ConnectionGroup() = default;
    AWS_CLOUDFRONT_API ConnectionGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ConnectionGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the connection group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConnectionGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectionGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConnectionGroup& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the connection group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ConnectionGroup& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the connection group was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ConnectionGroup& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Tags& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Tags>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Tags>
    ConnectionGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPv6 is enabled for the connection group.</p>
     */
    inline bool GetIpv6Enabled() const { return m_ipv6Enabled; }
    inline bool Ipv6EnabledHasBeenSet() const { return m_ipv6EnabledHasBeenSet; }
    inline void SetIpv6Enabled(bool value) { m_ipv6EnabledHasBeenSet = true; m_ipv6Enabled = value; }
    inline ConnectionGroup& WithIpv6Enabled(bool value) { SetIpv6Enabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing endpoint (also known as the DNS name) that is assigned to the
     * connection group, such as d111111abcdef8.cloudfront.net.</p>
     */
    inline const Aws::String& GetRoutingEndpoint() const { return m_routingEndpoint; }
    inline bool RoutingEndpointHasBeenSet() const { return m_routingEndpointHasBeenSet; }
    template<typename RoutingEndpointT = Aws::String>
    void SetRoutingEndpoint(RoutingEndpointT&& value) { m_routingEndpointHasBeenSet = true; m_routingEndpoint = std::forward<RoutingEndpointT>(value); }
    template<typename RoutingEndpointT = Aws::String>
    ConnectionGroup& WithRoutingEndpoint(RoutingEndpointT&& value) { SetRoutingEndpoint(std::forward<RoutingEndpointT>(value)); return *this;}
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
    ConnectionGroup& WithAnycastIpListId(AnycastIpListIdT&& value) { SetAnycastIpListId(std::forward<AnycastIpListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connection group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ConnectionGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the connection group is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ConnectionGroup& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the connection group is the default connection group for the
     * distribution tenants.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline ConnectionGroup& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_ipv6Enabled{false};
    bool m_ipv6EnabledHasBeenSet = false;

    Aws::String m_routingEndpoint;
    bool m_routingEndpointHasBeenSet = false;

    Aws::String m_anycastIpListId;
    bool m_anycastIpListIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
