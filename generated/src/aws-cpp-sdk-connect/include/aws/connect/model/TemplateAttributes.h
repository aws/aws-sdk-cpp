/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the template attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TemplateAttributes">AWS
   * API Reference</a></p>
   */
  class TemplateAttributes
  {
  public:
    AWS_CONNECT_API TemplateAttributes();
    AWS_CONNECT_API TemplateAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TemplateAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies the custom attributes values to use for variables in
     * the message template. This object contains different categories of key-value
     * pairs. Each key defines a variable or placeholder in the message template. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline TemplateAttributes& WithCustomAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomAttributes(value); return *this;}
    inline TemplateAttributes& WithCustomAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline TemplateAttributes& AddCustomAttributes(const Aws::String& key, const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, value); return *this; }
    inline TemplateAttributes& AddCustomAttributes(Aws::String&& key, const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), value); return *this; }
    inline TemplateAttributes& AddCustomAttributes(const Aws::String& key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, std::move(value)); return *this; }
    inline TemplateAttributes& AddCustomAttributes(Aws::String&& key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline TemplateAttributes& AddCustomAttributes(const char* key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, std::move(value)); return *this; }
    inline TemplateAttributes& AddCustomAttributes(Aws::String&& key, const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), value); return *this; }
    inline TemplateAttributes& AddCustomAttributes(const char* key, const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the customer profile attributes values to use for
     * variables in the message template. This object contains different categories of
     * key-value pairs. Each key defines a variable or placeholder in the message
     * template. </p>
     */
    inline const Aws::String& GetCustomerProfileAttributes() const{ return m_customerProfileAttributes; }
    inline bool CustomerProfileAttributesHasBeenSet() const { return m_customerProfileAttributesHasBeenSet; }
    inline void SetCustomerProfileAttributes(const Aws::String& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = value; }
    inline void SetCustomerProfileAttributes(Aws::String&& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = std::move(value); }
    inline void SetCustomerProfileAttributes(const char* value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes.assign(value); }
    inline TemplateAttributes& WithCustomerProfileAttributes(const Aws::String& value) { SetCustomerProfileAttributes(value); return *this;}
    inline TemplateAttributes& WithCustomerProfileAttributes(Aws::String&& value) { SetCustomerProfileAttributes(std::move(value)); return *this;}
    inline TemplateAttributes& WithCustomerProfileAttributes(const char* value) { SetCustomerProfileAttributes(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_customerProfileAttributes;
    bool m_customerProfileAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
