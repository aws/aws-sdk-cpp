/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The JSON payload of the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ActionPayload">AWS
   * API Reference</a></p>
   */
  class ActionPayload
  {
  public:
    AWS_IOTSITEWISE_API ActionPayload();
    AWS_IOTSITEWISE_API ActionPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ActionPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline ActionPayload& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline ActionPayload& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The payload of the action in a JSON string.</p>
     */
    inline ActionPayload& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
