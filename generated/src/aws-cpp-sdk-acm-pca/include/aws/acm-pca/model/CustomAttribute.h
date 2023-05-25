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
   * <p>Defines the X.500 relative distinguished name (RDN).</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CustomAttribute">AWS
   * API Reference</a></p>
   */
  class CustomAttribute
  {
  public:
    AWS_ACMPCA_API CustomAttribute();
    AWS_ACMPCA_API CustomAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CustomAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the object identifier (OID) of the attribute type of the relative
     * distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}


    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p/> <p>Specifies the attribute value of relative distinguished name (RDN).</p>
     */
    inline CustomAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
