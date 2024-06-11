/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/RecordType.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains a DNS record value that you can use to validate ownership or control
   * of a domain. This is used by the <a>DescribeCertificate</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResourceRecord">AWS
   * API Reference</a></p>
   */
  class ResourceRecord
  {
  public:
    AWS_ACM_API ResourceRecord();
    AWS_ACM_API ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceRecord& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceRecord& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline const RecordType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecordType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResourceRecord& WithType(const RecordType& value) { SetType(value); return *this;}
    inline ResourceRecord& WithType(RecordType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ResourceRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ResourceRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ResourceRecord& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecordType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
