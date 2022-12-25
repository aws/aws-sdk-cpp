/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about the configurable settings for a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Setting">AWS API
   * Reference</a></p>
   */
  class Setting
  {
  public:
    AWS_DIRECTORYSERVICE_API Setting();
    AWS_DIRECTORYSERVICE_API Setting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline Setting& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline Setting& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline Setting& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline Setting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline Setting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the directory setting for which to retrieve information. For
     * example, for <code>TLS_1_0</code>, the valid values are: <code>Enable</code> and
     * <code>Disable</code>.</p>
     */
    inline Setting& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
