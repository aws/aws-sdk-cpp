/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an optional value when connecting to the Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AmazonRedshiftAdvancedOption">AWS
   * API Reference</a></p>
   */
  class AmazonRedshiftAdvancedOption
  {
  public:
    AWS_GLUE_API AmazonRedshiftAdvancedOption();
    AWS_GLUE_API AmazonRedshiftAdvancedOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AmazonRedshiftAdvancedOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the additional connection option.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the additional connection option.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the additional connection option.</p>
     */
    inline AmazonRedshiftAdvancedOption& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
