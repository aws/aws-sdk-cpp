/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Metadata to assign to an Application Manager application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MetadataValue">AWS
   * API Reference</a></p>
   */
  class MetadataValue
  {
  public:
    AWS_SSM_API MetadataValue();
    AWS_SSM_API MetadataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MetadataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline MetadataValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline MetadataValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Metadata value to assign to an Application Manager application.</p>
     */
    inline MetadataValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
