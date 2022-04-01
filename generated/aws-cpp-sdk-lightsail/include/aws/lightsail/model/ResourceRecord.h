﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the domain name system (DNS) records to add to your domain's DNS to
   * validate it for an Amazon Lightsail certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResourceRecord">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API ResourceRecord
  {
  public:
    ResourceRecord();
    ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the record.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the record.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the record.</p>
     */
    inline ResourceRecord& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the record.</p>
     */
    inline ResourceRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the record.</p>
     */
    inline ResourceRecord& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The DNS record type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The DNS record type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The DNS record type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The DNS record type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The DNS record type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The DNS record type.</p>
     */
    inline ResourceRecord& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The DNS record type.</p>
     */
    inline ResourceRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The DNS record type.</p>
     */
    inline ResourceRecord& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value for the DNS record.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the DNS record.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the DNS record.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the DNS record.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the DNS record.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the DNS record.</p>
     */
    inline ResourceRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the DNS record.</p>
     */
    inline ResourceRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the DNS record.</p>
     */
    inline ResourceRecord& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
