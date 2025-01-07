﻿/**
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
   * <p>The value of a segment attribute. This is structured as a map with a single
   * key-value pair. The key 'valueString' indicates that the attribute type is a
   * string, and its corresponding value is the actual string value of the segment
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactSearchSummarySegmentAttributeValue">AWS
   * API Reference</a></p>
   */
  class ContactSearchSummarySegmentAttributeValue
  {
  public:
    AWS_CONNECT_API ContactSearchSummarySegmentAttributeValue();
    AWS_CONNECT_API ContactSearchSummarySegmentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactSearchSummarySegmentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a segment attribute represented as a string.</p>
     */
    inline const Aws::String& GetValueString() const{ return m_valueString; }
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }
    inline void SetValueString(const Aws::String& value) { m_valueStringHasBeenSet = true; m_valueString = value; }
    inline void SetValueString(Aws::String&& value) { m_valueStringHasBeenSet = true; m_valueString = std::move(value); }
    inline void SetValueString(const char* value) { m_valueStringHasBeenSet = true; m_valueString.assign(value); }
    inline ContactSearchSummarySegmentAttributeValue& WithValueString(const Aws::String& value) { SetValueString(value); return *this;}
    inline ContactSearchSummarySegmentAttributeValue& WithValueString(Aws::String&& value) { SetValueString(std::move(value)); return *this;}
    inline ContactSearchSummarySegmentAttributeValue& WithValueString(const char* value) { SetValueString(value); return *this;}
    ///@}
  private:

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
