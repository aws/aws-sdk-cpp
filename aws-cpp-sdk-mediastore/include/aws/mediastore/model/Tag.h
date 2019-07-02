/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>A collection of tags associated with a container. Each tag consists of a
   * key:value pair, which can be anything you define. Typically, the tag key
   * represents a category (such as "environment") and the tag value represents a
   * specific value within that category (such as "test," "development," or
   * "production"). You can add up to 50 tags to each container. For more information
   * about tagging, including naming and usage conventions, see <a
   * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
   * in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_MEDIASTORE_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * Tag values are case-sensitive.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Part of the key:value pair that defines a tag. You can use a tag value to
     * describe a specific value within a category, such as "companyA" or "companyB."
     * Tag values are case-sensitive.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
