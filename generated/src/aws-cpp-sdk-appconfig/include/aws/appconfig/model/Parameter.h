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
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Working
   * with AppConfig extensions</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_APPCONFIG_API Parameter();
    AWS_APPCONFIG_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Information about the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Information about the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the parameter.</p>
     */
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the parameter.</p>
     */
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the parameter.</p>
     */
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A parameter value must be specified in the extension association.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>A parameter value must be specified in the extension association.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>A parameter value must be specified in the extension association.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>A parameter value must be specified in the extension association.</p>
     */
    inline Parameter& WithRequired(bool value) { SetRequired(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
