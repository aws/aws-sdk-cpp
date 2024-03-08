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
   * <p>A value for a segment attribute. This is structured as a map where the key is
   * <code>valueString</code> and the value is a string.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SegmentAttributeValue">AWS
   * API Reference</a></p>
   */
  class SegmentAttributeValue
  {
  public:
    AWS_CONNECT_API SegmentAttributeValue();
    AWS_CONNECT_API SegmentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SegmentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of a segment attribute.</p>
     */
    inline const Aws::String& GetValueString() const{ return m_valueString; }

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline void SetValueString(const Aws::String& value) { m_valueStringHasBeenSet = true; m_valueString = value; }

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline void SetValueString(Aws::String&& value) { m_valueStringHasBeenSet = true; m_valueString = std::move(value); }

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline void SetValueString(const char* value) { m_valueStringHasBeenSet = true; m_valueString.assign(value); }

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline SegmentAttributeValue& WithValueString(const Aws::String& value) { SetValueString(value); return *this;}

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline SegmentAttributeValue& WithValueString(Aws::String&& value) { SetValueString(std::move(value)); return *this;}

    /**
     * <p>The value of a segment attribute.</p>
     */
    inline SegmentAttributeValue& WithValueString(const char* value) { SetValueString(value); return *this;}

  private:

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
