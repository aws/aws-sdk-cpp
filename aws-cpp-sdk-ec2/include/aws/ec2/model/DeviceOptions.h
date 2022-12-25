/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Options for an Amazon Web Services Verified Access device-identity based
   * trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeviceOptions">AWS
   * API Reference</a></p>
   */
  class DeviceOptions
  {
  public:
    AWS_EC2_API DeviceOptions();
    AWS_EC2_API DeviceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeviceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline DeviceOptions& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline DeviceOptions& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline DeviceOptions& WithTenantId(const char* value) { SetTenantId(value); return *this;}

  private:

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
