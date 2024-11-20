/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/VpcOriginEndpointConfig.h>
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
   * <p>An Amazon CloudFront VPC origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/VpcOrigin">AWS
   * API Reference</a></p>
   */
  class VpcOrigin
  {
  public:
    AWS_CLOUDFRONT_API VpcOrigin();
    AWS_CLOUDFRONT_API VpcOrigin(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API VpcOrigin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The VPC origin ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VpcOrigin& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VpcOrigin& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VpcOrigin& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VpcOrigin& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VpcOrigin& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VpcOrigin& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline VpcOrigin& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline VpcOrigin& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline VpcOrigin& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin created time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline VpcOrigin& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline VpcOrigin& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline VpcOrigin& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline VpcOrigin& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin endpoint configuration.</p>
     */
    inline const VpcOriginEndpointConfig& GetVpcOriginEndpointConfig() const{ return m_vpcOriginEndpointConfig; }
    inline bool VpcOriginEndpointConfigHasBeenSet() const { return m_vpcOriginEndpointConfigHasBeenSet; }
    inline void SetVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = value; }
    inline void SetVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = std::move(value); }
    inline VpcOrigin& WithVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { SetVpcOriginEndpointConfig(value); return *this;}
    inline VpcOrigin& WithVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { SetVpcOriginEndpointConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    VpcOriginEndpointConfig m_vpcOriginEndpointConfig;
    bool m_vpcOriginEndpointConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
