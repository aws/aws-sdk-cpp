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
   * <p>Information about proficiency of a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserProficiency">AWS
   * API Reference</a></p>
   */
  class UserProficiency
  {
  public:
    AWS_CONNECT_API UserProficiency();
    AWS_CONNECT_API UserProficiency(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserProficiency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of user's proficiency. You must use name of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of user's proficiency. You must use value of predefined attribute
     * present in the Amazon Connect instance.</p>
     */
    inline UserProficiency& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}


    /**
     * <p>The level of the proficiency. The valid values are 1, 2, 3, 4 and 5.</p>
     */
    inline double GetLevel() const{ return m_level; }

    /**
     * <p>The level of the proficiency. The valid values are 1, 2, 3, 4 and 5.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The level of the proficiency. The valid values are 1, 2, 3, 4 and 5.</p>
     */
    inline void SetLevel(double value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The level of the proficiency. The valid values are 1, 2, 3, 4 and 5.</p>
     */
    inline UserProficiency& WithLevel(double value) { SetLevel(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;

    double m_level;
    bool m_levelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
