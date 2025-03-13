/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>A value such as an Amazon Resource Name (ARN) or an Amazon Simple
   * Notification Service topic entered in an extension when invoked. Parameter
   * values are specified in an extension association. For more information about
   * extensions, see <a
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
   * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_APPCONFIG_API Parameter() = default;
    AWS_APPCONFIG_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Parameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter value must be specified in the extension association.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline Parameter& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this parameter's value can be supplied at the extension's
     * action point instead of during extension association. Dynamic parameters can't
     * be marked <code>Required</code>.</p>
     */
    inline bool GetDynamic() const { return m_dynamic; }
    inline bool DynamicHasBeenSet() const { return m_dynamicHasBeenSet; }
    inline void SetDynamic(bool value) { m_dynamicHasBeenSet = true; m_dynamic = value; }
    inline Parameter& WithDynamic(bool value) { SetDynamic(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    bool m_dynamic{false};
    bool m_dynamicHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
