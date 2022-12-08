/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{

  /**
   * <p>A DNS record uploaded to your DNS provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DnsRecord">AWS
   * API Reference</a></p>
   */
  class DnsRecord
  {
  public:
    AWS_WORKMAIL_API DnsRecord();
    AWS_WORKMAIL_API DnsRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API DnsRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline DnsRecord& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline DnsRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The RFC 1035 record type. Possible values: <code>CNAME</code>,
     * <code>A</code>, <code>MX</code>.</p>
     */
    inline DnsRecord& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline DnsRecord& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline DnsRecord& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The DNS hostname.- For example, <code>domain.example.com</code>.</p>
     */
    inline DnsRecord& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline DnsRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline DnsRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value returned by the DNS for a query to that hostname and record
     * type.</p>
     */
    inline DnsRecord& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
