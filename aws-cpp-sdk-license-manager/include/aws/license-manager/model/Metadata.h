/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Reserved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Metadata">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API Metadata
  {
  public:
    Metadata();
    Metadata(Aws::Utils::Json::JsonView jsonValue);
    Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Reserved.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Reserved.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Metadata& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
