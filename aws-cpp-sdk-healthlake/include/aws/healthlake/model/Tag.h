/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p> A tag is a label consisting of a user-defined key and value. The form for
   * tags is {"Key", "Value"} </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_HEALTHLAKE_API Tag();
    AWS_HEALTHLAKE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> The key portion of a tag. Tag keys are case sensitive. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value portion of tag. Tag values are case sensitive. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
