/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>An object that describes the implementation type for a control.</p> <p>Our
   * <code>ImplementationDetails</code> <code>Type</code> format has three required
   * segments:</p> <ul> <li> <p>
   * <code>SERVICE-PROVIDER::SERVICE-NAME::RESOURCE-NAME</code> </p> </li> </ul>
   * <p>For example, <code>AWS::Config::ConfigRule</code> <b>or</b>
   * <code>AWS::SecurityHub::SecurityControl</code> resources have the format with
   * three required segments.</p> <p>Our <code>ImplementationDetails</code>
   * <code>Type</code> format has an optional fourth segment, which is present for
   * applicable implementation types. The format is as follows: </p> <ul> <li> <p>
   * <code>SERVICE-PROVIDER::SERVICE-NAME::RESOURCE-NAME::RESOURCE-TYPE-DESCRIPTION</code>
   * </p> </li> </ul> <p>For example,
   * <code>AWS::Organizations::Policy::SERVICE_CONTROL_POLICY</code> <b>or</b>
   * <code>AWS::CloudFormation::Type::HOOK</code> have the format with four
   * segments.</p> <p>Although the format is similar, the values for the
   * <code>Type</code> field do not match any Amazon Web Services CloudFormation
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ImplementationDetails">AWS
   * API Reference</a></p>
   */
  class ImplementationDetails
  {
  public:
    AWS_CONTROLCATALOG_API ImplementationDetails() = default;
    AWS_CONTROLCATALOG_API ImplementationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ImplementationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that describes a control's implementation type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ImplementationDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service-specific identifier for the control, assigned by the service that
     * implemented the control. For example, this identifier could be an Amazon Web
     * Services Config Rule ID or a Security Hub Control ID.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ImplementationDetails& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
