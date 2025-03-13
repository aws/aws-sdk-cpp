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
    AWS_ACM_API ResourceRecord() = default;
    AWS_ACM_API ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceRecord& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline RecordType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RecordType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResourceRecord& WithType(RecordType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ResourceRecord& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecordType m_type{RecordType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
