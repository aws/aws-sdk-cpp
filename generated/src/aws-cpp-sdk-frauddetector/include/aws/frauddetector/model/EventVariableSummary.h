/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> Information about the summary of an event variable that was evaluated for
   * generating prediction. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EventVariableSummary">AWS
   * API Reference</a></p>
   */
  class EventVariableSummary
  {
  public:
    AWS_FRAUDDETECTOR_API EventVariableSummary();
    AWS_FRAUDDETECTOR_API EventVariableSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventVariableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The event variable name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The event variable name. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The event variable name. </p>
     */
    inline EventVariableSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The event variable name. </p>
     */
    inline EventVariableSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The event variable name. </p>
     */
    inline EventVariableSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The value of the event variable. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value of the event variable. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value of the event variable. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value of the event variable. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value of the event variable. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value of the event variable. </p>
     */
    inline EventVariableSummary& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value of the event variable. </p>
     */
    inline EventVariableSummary& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value of the event variable. </p>
     */
    inline EventVariableSummary& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p> The event variable source. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p> The event variable source. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> The event variable source. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> The event variable source. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> The event variable source. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p> The event variable source. </p>
     */
    inline EventVariableSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p> The event variable source. </p>
     */
    inline EventVariableSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p> The event variable source. </p>
     */
    inline EventVariableSummary& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
