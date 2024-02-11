/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> A configuration ID paired with a warning message. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeletionWarning">AWS
   * API Reference</a></p>
   */
  class DeletionWarning
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning();
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline DeletionWarning& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline DeletionWarning& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline DeletionWarning& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p> The integer warning code associated with the warning message. </p>
     */
    inline int GetWarningCode() const{ return m_warningCode; }

    /**
     * <p> The integer warning code associated with the warning message. </p>
     */
    inline bool WarningCodeHasBeenSet() const { return m_warningCodeHasBeenSet; }

    /**
     * <p> The integer warning code associated with the warning message. </p>
     */
    inline void SetWarningCode(int value) { m_warningCodeHasBeenSet = true; m_warningCode = value; }

    /**
     * <p> The integer warning code associated with the warning message. </p>
     */
    inline DeletionWarning& WithWarningCode(int value) { SetWarningCode(value); return *this;}


    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline const Aws::String& GetWarningText() const{ return m_warningText; }

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline bool WarningTextHasBeenSet() const { return m_warningTextHasBeenSet; }

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline void SetWarningText(const Aws::String& value) { m_warningTextHasBeenSet = true; m_warningText = value; }

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline void SetWarningText(Aws::String&& value) { m_warningTextHasBeenSet = true; m_warningText = std::move(value); }

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline void SetWarningText(const char* value) { m_warningTextHasBeenSet = true; m_warningText.assign(value); }

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline DeletionWarning& WithWarningText(const Aws::String& value) { SetWarningText(value); return *this;}

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline DeletionWarning& WithWarningText(Aws::String&& value) { SetWarningText(std::move(value)); return *this;}

    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline DeletionWarning& WithWarningText(const char* value) { SetWarningText(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    int m_warningCode;
    bool m_warningCodeHasBeenSet = false;

    Aws::String m_warningText;
    bool m_warningTextHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
