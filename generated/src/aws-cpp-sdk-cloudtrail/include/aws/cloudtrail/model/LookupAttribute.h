﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LookupAttribute
  {
  public:
    AWS_CLOUDTRAIL_API LookupAttribute();
    AWS_CLOUDTRAIL_API LookupAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API LookupAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an attribute on which to filter the events returned.</p>
     */
    inline const LookupAttributeKey& GetAttributeKey() const{ return m_attributeKey; }
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }
    inline void SetAttributeKey(const LookupAttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }
    inline void SetAttributeKey(LookupAttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::move(value); }
    inline LookupAttribute& WithAttributeKey(const LookupAttributeKey& value) { SetAttributeKey(value); return *this;}
    inline LookupAttribute& WithAttributeKey(LookupAttributeKey&& value) { SetAttributeKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a value for the specified <code>AttributeKey</code>.</p> <p>The
     * maximum length for the <code>AttributeValue</code> is 2000 characters. The
     * following characters ('<code>_</code>', '<code> </code>', '<code>,</code>',
     * '<code>\\n</code>') count as two characters towards the 2000 character
     * limit.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }
    inline LookupAttribute& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}
    inline LookupAttribute& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}
    inline LookupAttribute& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}
    ///@}
  private:

    LookupAttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
