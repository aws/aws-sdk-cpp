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
    AWS_CONTROLCATALOG_API ImplementationDetails();
    AWS_CONTROLCATALOG_API ImplementationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ImplementationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that describes a control's implementation type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ImplementationDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ImplementationDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ImplementationDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
