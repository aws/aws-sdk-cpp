/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/OSUpdateSettings.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p> The value for a given type of <code>UpdateSettings</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateValue">AWS API
   * Reference</a></p>
   */
  class UpdateValue
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateValue();
    AWS_DIRECTORYSERVICE_API UpdateValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API UpdateValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The OS update related settings. </p>
     */
    inline const OSUpdateSettings& GetOSUpdateSettings() const{ return m_oSUpdateSettings; }

    /**
     * <p> The OS update related settings. </p>
     */
    inline bool OSUpdateSettingsHasBeenSet() const { return m_oSUpdateSettingsHasBeenSet; }

    /**
     * <p> The OS update related settings. </p>
     */
    inline void SetOSUpdateSettings(const OSUpdateSettings& value) { m_oSUpdateSettingsHasBeenSet = true; m_oSUpdateSettings = value; }

    /**
     * <p> The OS update related settings. </p>
     */
    inline void SetOSUpdateSettings(OSUpdateSettings&& value) { m_oSUpdateSettingsHasBeenSet = true; m_oSUpdateSettings = std::move(value); }

    /**
     * <p> The OS update related settings. </p>
     */
    inline UpdateValue& WithOSUpdateSettings(const OSUpdateSettings& value) { SetOSUpdateSettings(value); return *this;}

    /**
     * <p> The OS update related settings. </p>
     */
    inline UpdateValue& WithOSUpdateSettings(OSUpdateSettings&& value) { SetOSUpdateSettings(std::move(value)); return *this;}

  private:

    OSUpdateSettings m_oSUpdateSettings;
    bool m_oSUpdateSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
