/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Defines a validation rule that modifies the allowed code values for a
   * specific X12 element. This rule allows you to add or remove valid codes from an
   * element's standard code list, providing flexibility to accommodate trading
   * partner-specific requirements or industry variations. You can specify codes to
   * add to expand the allowed values beyond the X12 standard, or codes to remove to
   * restrict the allowed values for stricter validation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12CodeListValidationRule">AWS
   * API Reference</a></p>
   */
  class X12CodeListValidationRule
  {
  public:
    AWS_B2BI_API X12CodeListValidationRule() = default;
    AWS_B2BI_API X12CodeListValidationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12CodeListValidationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the four-digit element ID to which the code list modifications
     * apply. This identifies which X12 element will have its allowed code values
     * modified.</p>
     */
    inline const Aws::String& GetElementId() const { return m_elementId; }
    inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }
    template<typename ElementIdT = Aws::String>
    void SetElementId(ElementIdT&& value) { m_elementIdHasBeenSet = true; m_elementId = std::forward<ElementIdT>(value); }
    template<typename ElementIdT = Aws::String>
    X12CodeListValidationRule& WithElementId(ElementIdT&& value) { SetElementId(std::forward<ElementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of code values to add to the element's allowed values. These
     * codes will be considered valid for the specified element in addition to the
     * standard codes defined by the X12 specification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCodesToAdd() const { return m_codesToAdd; }
    inline bool CodesToAddHasBeenSet() const { return m_codesToAddHasBeenSet; }
    template<typename CodesToAddT = Aws::Vector<Aws::String>>
    void SetCodesToAdd(CodesToAddT&& value) { m_codesToAddHasBeenSet = true; m_codesToAdd = std::forward<CodesToAddT>(value); }
    template<typename CodesToAddT = Aws::Vector<Aws::String>>
    X12CodeListValidationRule& WithCodesToAdd(CodesToAddT&& value) { SetCodesToAdd(std::forward<CodesToAddT>(value)); return *this;}
    template<typename CodesToAddT = Aws::String>
    X12CodeListValidationRule& AddCodesToAdd(CodesToAddT&& value) { m_codesToAddHasBeenSet = true; m_codesToAdd.emplace_back(std::forward<CodesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of code values to remove from the element's allowed values.
     * These codes will be considered invalid for the specified element, even if they
     * are part of the standard codes defined by the X12 specification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCodesToRemove() const { return m_codesToRemove; }
    inline bool CodesToRemoveHasBeenSet() const { return m_codesToRemoveHasBeenSet; }
    template<typename CodesToRemoveT = Aws::Vector<Aws::String>>
    void SetCodesToRemove(CodesToRemoveT&& value) { m_codesToRemoveHasBeenSet = true; m_codesToRemove = std::forward<CodesToRemoveT>(value); }
    template<typename CodesToRemoveT = Aws::Vector<Aws::String>>
    X12CodeListValidationRule& WithCodesToRemove(CodesToRemoveT&& value) { SetCodesToRemove(std::forward<CodesToRemoveT>(value)); return *this;}
    template<typename CodesToRemoveT = Aws::String>
    X12CodeListValidationRule& AddCodesToRemove(CodesToRemoveT&& value) { m_codesToRemoveHasBeenSet = true; m_codesToRemove.emplace_back(std::forward<CodesToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_elementId;
    bool m_elementIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_codesToAdd;
    bool m_codesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_codesToRemove;
    bool m_codesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
