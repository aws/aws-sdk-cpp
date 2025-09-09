/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Custom metadata that is associated to predefined attributes to control
   * behavior in upstream services, such as controlling how a predefined attribute
   * should be displayed in the Amazon Connect admin website.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InputPredefinedAttributeConfiguration">AWS
   * API Reference</a></p>
   */
  class InputPredefinedAttributeConfiguration
  {
  public:
    AWS_CONNECT_API InputPredefinedAttributeConfiguration() = default;
    AWS_CONNECT_API InputPredefinedAttributeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InputPredefinedAttributeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When this parameter is set to true, Amazon Connect enforces strict validation
     * on the specific values, if the values are predefined in attributes. The contact
     * will store only valid and predefined values for the predefined attribute
     * key.</p>
     */
    inline bool GetEnableValueValidationOnAssociation() const { return m_enableValueValidationOnAssociation; }
    inline bool EnableValueValidationOnAssociationHasBeenSet() const { return m_enableValueValidationOnAssociationHasBeenSet; }
    inline void SetEnableValueValidationOnAssociation(bool value) { m_enableValueValidationOnAssociationHasBeenSet = true; m_enableValueValidationOnAssociation = value; }
    inline InputPredefinedAttributeConfiguration& WithEnableValueValidationOnAssociation(bool value) { SetEnableValueValidationOnAssociation(value); return *this;}
    ///@}
  private:

    bool m_enableValueValidationOnAssociation{false};
    bool m_enableValueValidationOnAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
