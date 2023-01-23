/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DnsNameState.h>
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
   * <p>Information about the private DNS name for the service
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrivateDnsNameConfiguration">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNameConfiguration
  {
  public:
    AWS_EC2_API PrivateDnsNameConfiguration();
    AWS_EC2_API PrivateDnsNameConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrivateDnsNameConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline const DnsNameState& GetState() const{ return m_state; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline void SetState(const DnsNameState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline void SetState(DnsNameState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline PrivateDnsNameConfiguration& WithState(const DnsNameState& value) { SetState(value); return *this;}

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>&gt;Consumers of
     * the endpoint service can use the private name only when the state is
     * <code>verified</code>.</p>
     */
    inline PrivateDnsNameConfiguration& WithState(DnsNameState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline PrivateDnsNameConfiguration& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline PrivateDnsNameConfiguration& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The endpoint service verification type, for example TXT.</p>
     */
    inline PrivateDnsNameConfiguration& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline PrivateDnsNameConfiguration& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline PrivateDnsNameConfiguration& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value the service provider adds to the private DNS name domain record
     * before verification.</p>
     */
    inline PrivateDnsNameConfiguration& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline PrivateDnsNameConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline PrivateDnsNameConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the record subdomain the service provider needs to create. The
     * service provider adds the <code>value</code> text to the <code>name</code>.</p>
     */
    inline PrivateDnsNameConfiguration& WithName(const char* value) { SetName(value); return *this;}

  private:

    DnsNameState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
