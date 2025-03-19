/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An Anycast static IP list. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/request-static-ips.html">Request
   * Anycast static IPs to use for allowlisting</a> in the <i>Amazon CloudFront
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AnycastIpList">AWS
   * API Reference</a></p>
   */
  class AnycastIpList
  {
  public:
    AWS_CLOUDFRONT_API AnycastIpList() = default;
    AWS_CLOUDFRONT_API AnycastIpList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API AnycastIpList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AnycastIpList& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AnycastIpList& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Anycast static IP list. Valid values:
     * <code>Deployed</code>, <code>Deploying</code>, or <code>Failed</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AnycastIpList& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AnycastIpList& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static IP addresses that are allocated to the Anycast static IP list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnycastIps() const { return m_anycastIps; }
    inline bool AnycastIpsHasBeenSet() const { return m_anycastIpsHasBeenSet; }
    template<typename AnycastIpsT = Aws::Vector<Aws::String>>
    void SetAnycastIps(AnycastIpsT&& value) { m_anycastIpsHasBeenSet = true; m_anycastIps = std::forward<AnycastIpsT>(value); }
    template<typename AnycastIpsT = Aws::Vector<Aws::String>>
    AnycastIpList& WithAnycastIps(AnycastIpsT&& value) { SetAnycastIps(std::forward<AnycastIpsT>(value)); return *this;}
    template<typename AnycastIpsT = Aws::String>
    AnycastIpList& AddAnycastIps(AnycastIpsT&& value) { m_anycastIpsHasBeenSet = true; m_anycastIps.emplace_back(std::forward<AnycastIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IP addresses in the Anycast static IP list.</p>
     */
    inline int GetIpCount() const { return m_ipCount; }
    inline bool IpCountHasBeenSet() const { return m_ipCountHasBeenSet; }
    inline void SetIpCount(int value) { m_ipCountHasBeenSet = true; m_ipCount = value; }
    inline AnycastIpList& WithIpCount(int value) { SetIpCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the Anycast static IP list was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AnycastIpList& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_anycastIps;
    bool m_anycastIpsHasBeenSet = false;

    int m_ipCount{0};
    bool m_ipCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
