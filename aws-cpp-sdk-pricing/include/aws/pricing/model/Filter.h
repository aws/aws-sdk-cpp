/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/model/FilterType.h>
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
namespace Pricing
{
namespace Model
{

  /**
   * <p>The constraints that you want all returned products to match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_PRICING_API Filter();
    AWS_PRICING_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline const FilterType& GetType() const{ return m_type; }

    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline void SetType(const FilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline void SetType(FilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline Filter& WithType(const FilterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:
     * <code>TERM_MATCH</code>. <code>TERM_MATCH</code> returns only products that
     * match both the given filter field and the given value.</p>
     */
    inline Filter& WithType(FilterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline Filter& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline Filter& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline Filter& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The service code or attribute value that you want to filter by. If you are
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you are filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    FilterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
