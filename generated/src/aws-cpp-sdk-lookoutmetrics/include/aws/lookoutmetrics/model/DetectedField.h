﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/AttributeValue.h>
#include <aws/lookoutmetrics/model/Confidence.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An inferred field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedField">AWS
   * API Reference</a></p>
   */
  class DetectedField
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedField();
    AWS_LOOKOUTMETRICS_API DetectedField(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field's value.</p>
     */
    inline const AttributeValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const AttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(AttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline DetectedField& WithValue(const AttributeValue& value) { SetValue(value); return *this;}
    inline DetectedField& WithValue(AttributeValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field's confidence.</p>
     */
    inline const Confidence& GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(const Confidence& value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline void SetConfidence(Confidence&& value) { m_confidenceHasBeenSet = true; m_confidence = std::move(value); }
    inline DetectedField& WithConfidence(const Confidence& value) { SetConfidence(value); return *this;}
    inline DetectedField& WithConfidence(Confidence&& value) { SetConfidence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field's message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DetectedField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DetectedField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DetectedField& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    AttributeValue m_value;
    bool m_valueHasBeenSet = false;

    Confidence m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
