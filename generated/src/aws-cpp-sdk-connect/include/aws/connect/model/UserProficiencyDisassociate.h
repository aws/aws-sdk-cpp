/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
   * <p>Information about proficiency to be disassociated from the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserProficiencyDisassociate">AWS
   * API Reference</a></p>
   */
  class UserProficiencyDisassociate
  {
  public:
    AWS_CONNECT_API UserProficiencyDisassociate();
    AWS_CONNECT_API UserProficiencyDisassociate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserProficiencyDisassociate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of user's proficiency.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline UserProficiencyDisassociate& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline UserProficiencyDisassociate& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline UserProficiencyDisassociate& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of user's proficiency.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }
    inline UserProficiencyDisassociate& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}
    inline UserProficiencyDisassociate& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}
    inline UserProficiencyDisassociate& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
