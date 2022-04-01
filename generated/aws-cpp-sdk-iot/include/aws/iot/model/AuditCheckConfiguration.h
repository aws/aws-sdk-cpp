﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
   * <p>Which audit checks are enabled and disabled for this account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditCheckConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AuditCheckConfiguration
  {
  public:
    AuditCheckConfiguration();
    AuditCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AuditCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if this audit check is enabled for this account.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if this audit check is enabled for this account.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if this audit check is enabled for this account.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if this audit check is enabled for this account.</p>
     */
    inline AuditCheckConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
