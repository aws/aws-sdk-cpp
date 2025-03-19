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
    AWS_CONNECT_API TemplateAttributes() = default;
    AWS_CONNECT_API TemplateAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TemplateAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies the custom attributes values to use for variables in
     * the message template. This object contains different categories of key-value
     * pairs. Each key defines a variable or placeholder in the message template. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::Map<Aws::String, Aws::String>>
    TemplateAttributes& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    template<typename CustomAttributesKeyT = Aws::String, typename CustomAttributesValueT = Aws::String>
    TemplateAttributes& AddCustomAttributes(CustomAttributesKeyT&& key, CustomAttributesValueT&& value) {
      m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::forward<CustomAttributesKeyT>(key), std::forward<CustomAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the customer profile attributes values to use for
     * variables in the message template. This object contains different categories of
     * key-value pairs. Each key defines a variable or placeholder in the message
     * template. </p>
     */
    inline const Aws::String& GetCustomerProfileAttributes() const { return m_customerProfileAttributes; }
    inline bool CustomerProfileAttributesHasBeenSet() const { return m_customerProfileAttributesHasBeenSet; }
    template<typename CustomerProfileAttributesT = Aws::String>
    void SetCustomerProfileAttributes(CustomerProfileAttributesT&& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = std::forward<CustomerProfileAttributesT>(value); }
    template<typename CustomerProfileAttributesT = Aws::String>
    TemplateAttributes& WithCustomerProfileAttributes(CustomerProfileAttributesT&& value) { SetCustomerProfileAttributes(std::forward<CustomerProfileAttributesT>(value)); return *this;}
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
