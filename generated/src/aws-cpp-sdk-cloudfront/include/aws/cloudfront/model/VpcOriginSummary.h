/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of the CloudFront VPC origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/VpcOriginSummary">AWS
   * API Reference</a></p>
   */
  class VpcOriginSummary
  {
  public:
    AWS_CLOUDFRONT_API VpcOriginSummary();
    AWS_CLOUDFRONT_API VpcOriginSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API VpcOriginSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The VPC origin summary ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VpcOriginSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VpcOriginSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VpcOriginSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VpcOriginSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VpcOriginSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VpcOriginSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline VpcOriginSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline VpcOriginSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline VpcOriginSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary created time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline VpcOriginSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline VpcOriginSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline VpcOriginSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline VpcOriginSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VpcOriginSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VpcOriginSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VpcOriginSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin summary origin endpoint ARN.</p>
     */
    inline const Aws::String& GetOriginEndpointArn() const{ return m_originEndpointArn; }
    inline bool OriginEndpointArnHasBeenSet() const { return m_originEndpointArnHasBeenSet; }
    inline void SetOriginEndpointArn(const Aws::String& value) { m_originEndpointArnHasBeenSet = true; m_originEndpointArn = value; }
    inline void SetOriginEndpointArn(Aws::String&& value) { m_originEndpointArnHasBeenSet = true; m_originEndpointArn = std::move(value); }
    inline void SetOriginEndpointArn(const char* value) { m_originEndpointArnHasBeenSet = true; m_originEndpointArn.assign(value); }
    inline VpcOriginSummary& WithOriginEndpointArn(const Aws::String& value) { SetOriginEndpointArn(value); return *this;}
    inline VpcOriginSummary& WithOriginEndpointArn(Aws::String&& value) { SetOriginEndpointArn(std::move(value)); return *this;}
    inline VpcOriginSummary& WithOriginEndpointArn(const char* value) { SetOriginEndpointArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_originEndpointArn;
    bool m_originEndpointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
