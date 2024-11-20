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
   * <p>An Anycast static IP list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AnycastIpList">AWS
   * API Reference</a></p>
   */
  class AnycastIpList
  {
  public:
    AWS_CLOUDFRONT_API AnycastIpList();
    AWS_CLOUDFRONT_API AnycastIpList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API AnycastIpList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AnycastIpList& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AnycastIpList& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AnycastIpList& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AnycastIpList& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnycastIpList& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnycastIpList& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Anycast static IP list. Valid values:
     * <code>Deployed</code>, <code>Deploying</code>, or <code>Failed</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AnycastIpList& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AnycastIpList& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AnycastIpList& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AnycastIpList& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AnycastIpList& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AnycastIpList& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static IP addresses that are allocated to the Anycast static IP list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnycastIps() const{ return m_anycastIps; }
    inline bool AnycastIpsHasBeenSet() const { return m_anycastIpsHasBeenSet; }
    inline void SetAnycastIps(const Aws::Vector<Aws::String>& value) { m_anycastIpsHasBeenSet = true; m_anycastIps = value; }
    inline void SetAnycastIps(Aws::Vector<Aws::String>&& value) { m_anycastIpsHasBeenSet = true; m_anycastIps = std::move(value); }
    inline AnycastIpList& WithAnycastIps(const Aws::Vector<Aws::String>& value) { SetAnycastIps(value); return *this;}
    inline AnycastIpList& WithAnycastIps(Aws::Vector<Aws::String>&& value) { SetAnycastIps(std::move(value)); return *this;}
    inline AnycastIpList& AddAnycastIps(const Aws::String& value) { m_anycastIpsHasBeenSet = true; m_anycastIps.push_back(value); return *this; }
    inline AnycastIpList& AddAnycastIps(Aws::String&& value) { m_anycastIpsHasBeenSet = true; m_anycastIps.push_back(std::move(value)); return *this; }
    inline AnycastIpList& AddAnycastIps(const char* value) { m_anycastIpsHasBeenSet = true; m_anycastIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IP addresses in the Anycast static IP list.</p>
     */
    inline int GetIpCount() const{ return m_ipCount; }
    inline bool IpCountHasBeenSet() const { return m_ipCountHasBeenSet; }
    inline void SetIpCount(int value) { m_ipCountHasBeenSet = true; m_ipCount = value; }
    inline AnycastIpList& WithIpCount(int value) { SetIpCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the Anycast static IP list was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AnycastIpList& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AnycastIpList& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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

    int m_ipCount;
    bool m_ipCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
