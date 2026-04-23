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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/LookupAttributeKey.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies an attribute and value that filter the events
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API LookupAttribute
  {
  public:
    LookupAttribute();
    LookupAttribute(Aws::Utils::Json::JsonView jsonValue);
    LookupAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline const LookupAttributeKey& GetAttributeKey() const{ return m_attributeKey; }

    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }

    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline void SetAttributeKey(const LookupAttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }

    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline void SetAttributeKey(LookupAttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::move(value); }

    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline LookupAttribute& WithAttributeKey(const LookupAttributeKey& value) { SetAttributeKey(value); return *this;}

    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline LookupAttribute& WithAttributeKey(LookupAttributeKey&& value) { SetAttributeKey(std::move(value)); return *this;}


    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline LookupAttribute& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline LookupAttribute& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>Specifies a value for the specified AttributeKey.</p>
     */
    inline LookupAttribute& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    LookupAttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
