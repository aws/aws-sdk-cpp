/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that specifies the authorization service for a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthorizerConfig">AWS
   * API Reference</a></p>
   */
  class AuthorizerConfig
  {
  public:
    AWS_IOT_API AuthorizerConfig();
    AWS_IOT_API AuthorizerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthorizerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline const Aws::String& GetDefaultAuthorizerName() const{ return m_defaultAuthorizerName; }

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline bool DefaultAuthorizerNameHasBeenSet() const { return m_defaultAuthorizerNameHasBeenSet; }

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline void SetDefaultAuthorizerName(const Aws::String& value) { m_defaultAuthorizerNameHasBeenSet = true; m_defaultAuthorizerName = value; }

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline void SetDefaultAuthorizerName(Aws::String&& value) { m_defaultAuthorizerNameHasBeenSet = true; m_defaultAuthorizerName = std::move(value); }

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline void SetDefaultAuthorizerName(const char* value) { m_defaultAuthorizerNameHasBeenSet = true; m_defaultAuthorizerName.assign(value); }

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline AuthorizerConfig& WithDefaultAuthorizerName(const Aws::String& value) { SetDefaultAuthorizerName(value); return *this;}

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline AuthorizerConfig& WithDefaultAuthorizerName(Aws::String&& value) { SetDefaultAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorization service for a domain configuration.</p>
     */
    inline AuthorizerConfig& WithDefaultAuthorizerName(const char* value) { SetDefaultAuthorizerName(value); return *this;}


    /**
     * <p>A Boolean that specifies whether the domain configuration's authorization
     * service can be overridden.</p>
     */
    inline bool GetAllowAuthorizerOverride() const{ return m_allowAuthorizerOverride; }

    /**
     * <p>A Boolean that specifies whether the domain configuration's authorization
     * service can be overridden.</p>
     */
    inline bool AllowAuthorizerOverrideHasBeenSet() const { return m_allowAuthorizerOverrideHasBeenSet; }

    /**
     * <p>A Boolean that specifies whether the domain configuration's authorization
     * service can be overridden.</p>
     */
    inline void SetAllowAuthorizerOverride(bool value) { m_allowAuthorizerOverrideHasBeenSet = true; m_allowAuthorizerOverride = value; }

    /**
     * <p>A Boolean that specifies whether the domain configuration's authorization
     * service can be overridden.</p>
     */
    inline AuthorizerConfig& WithAllowAuthorizerOverride(bool value) { SetAllowAuthorizerOverride(value); return *this;}

  private:

    Aws::String m_defaultAuthorizerName;
    bool m_defaultAuthorizerNameHasBeenSet = false;

    bool m_allowAuthorizerOverride;
    bool m_allowAuthorizerOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
