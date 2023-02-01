/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>A value or list of parameter values. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ParameterValue">AWS
   * API Reference</a></p>
   */
  class ParameterValue
  {
  public:
    AWS_DATAPIPELINE_API ParameterValue();
    AWS_DATAPIPELINE_API ParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API ParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the parameter value.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline ParameterValue& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline ParameterValue& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parameter value.</p>
     */
    inline ParameterValue& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline ParameterValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
