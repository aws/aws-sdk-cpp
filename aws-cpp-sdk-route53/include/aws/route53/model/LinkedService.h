/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>If a health check or hosted zone was created by another service,
   * <code>LinkedService</code> is a complex type that describes the service that
   * created the resource. When a resource is created by another service, you can't
   * edit or delete it using Amazon Route 53. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/LinkedService">AWS
   * API Reference</a></p>
   */
  class LinkedService
  {
  public:
    AWS_ROUTE53_API LinkedService();
    AWS_ROUTE53_API LinkedService(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API LinkedService& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline LinkedService& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline LinkedService& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}

    /**
     * <p>If the health check or hosted zone was created by another service, the
     * service that created the resource. When a resource is created by another
     * service, you can't edit or delete it using Amazon Route 53. </p>
     */
    inline LinkedService& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}


    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline LinkedService& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline LinkedService& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>If the health check or hosted zone was created by another service, an
     * optional description that can be provided by the other service. When a resource
     * is created by another service, you can't edit or delete it using Amazon Route
     * 53. </p>
     */
    inline LinkedService& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
