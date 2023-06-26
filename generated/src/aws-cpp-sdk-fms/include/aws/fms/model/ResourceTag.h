/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The resource tags that Firewall Manager uses to determine if a particular
   * resource should be included or excluded from the Firewall Manager policy. Tags
   * enable you to categorize your Amazon Web Services resources in different ways,
   * for example, by purpose, owner, or environment. Each tag consists of a key and
   * an optional value. Firewall Manager combines the tags with "AND" so that, if you
   * add more than one tag to a policy scope, a resource must have all the specified
   * tags to be included or excluded. For more information, see <a
   * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working
   * with Tag Editor</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceTag">AWS API
   * Reference</a></p>
   */
  class ResourceTag
  {
  public:
    AWS_FMS_API ResourceTag();
    AWS_FMS_API ResourceTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ResourceTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource tag key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The resource tag key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The resource tag key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The resource tag key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The resource tag key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The resource tag key.</p>
     */
    inline ResourceTag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The resource tag key.</p>
     */
    inline ResourceTag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The resource tag key.</p>
     */
    inline ResourceTag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The resource tag value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The resource tag value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The resource tag value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The resource tag value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The resource tag value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The resource tag value.</p>
     */
    inline ResourceTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The resource tag value.</p>
     */
    inline ResourceTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The resource tag value.</p>
     */
    inline ResourceTag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
