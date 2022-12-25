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
   * <p>A collection of key:value pairs associated with an Amazon Web Services
   * resource. The key:value pair can be anything you define. Typically, the tag key
   * represents a category (such as "environment") and the tag value represents a
   * specific value within that category (such as "test," "development," or
   * "production"). You can add up to 50 tags to each Amazon Web Services resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_FMS_API Tag();
    AWS_FMS_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag key to
     * describe a category of information, such as "customer." Tag keys are
     * case-sensitive.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
