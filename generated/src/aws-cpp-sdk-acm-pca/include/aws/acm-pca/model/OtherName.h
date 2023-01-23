/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Defines a custom ASN.1 X.400 <code>GeneralName</code> using an object
   * identifier (OID) and value. The OID must satisfy the regular expression shown
   * below. For more information, see NIST's definition of <a
   * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
   * (OID)</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/OtherName">AWS
   * API Reference</a></p>
   */
  class OtherName
  {
  public:
    AWS_ACMPCA_API OtherName();
    AWS_ACMPCA_API OtherName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API OtherName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies an OID. </p>
     */
    inline const Aws::String& GetTypeId() const{ return m_typeId; }

    /**
     * <p>Specifies an OID. </p>
     */
    inline bool TypeIdHasBeenSet() const { return m_typeIdHasBeenSet; }

    /**
     * <p>Specifies an OID. </p>
     */
    inline void SetTypeId(const Aws::String& value) { m_typeIdHasBeenSet = true; m_typeId = value; }

    /**
     * <p>Specifies an OID. </p>
     */
    inline void SetTypeId(Aws::String&& value) { m_typeIdHasBeenSet = true; m_typeId = std::move(value); }

    /**
     * <p>Specifies an OID. </p>
     */
    inline void SetTypeId(const char* value) { m_typeIdHasBeenSet = true; m_typeId.assign(value); }

    /**
     * <p>Specifies an OID. </p>
     */
    inline OtherName& WithTypeId(const Aws::String& value) { SetTypeId(value); return *this;}

    /**
     * <p>Specifies an OID. </p>
     */
    inline OtherName& WithTypeId(Aws::String&& value) { SetTypeId(std::move(value)); return *this;}

    /**
     * <p>Specifies an OID. </p>
     */
    inline OtherName& WithTypeId(const char* value) { SetTypeId(value); return *this;}


    /**
     * <p>Specifies an OID value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies an OID value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specifies an OID value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies an OID value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specifies an OID value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies an OID value.</p>
     */
    inline OtherName& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies an OID value.</p>
     */
    inline OtherName& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specifies an OID value.</p>
     */
    inline OtherName& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_typeId;
    bool m_typeIdHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
