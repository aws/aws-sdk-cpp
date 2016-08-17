/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An output for the specified Product object created as the result of a
   * request. For example, a CloudFormation-backed product that creates an S3 bucket
   * would have an output for the S3 bucket URL.</p>
   */
  class AWS_SERVICECATALOG_API RecordOutput
  {
  public:
    RecordOutput();
    RecordOutput(const Aws::Utils::Json::JsonValue& jsonValue);
    RecordOutput& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The output key.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>The output key.</p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The output key.</p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The output key.</p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>The output key.</p>
     */
    inline RecordOutput& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The output key.</p>
     */
    inline RecordOutput& WithOutputKey(Aws::String&& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The output key.</p>
     */
    inline RecordOutput& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}

    /**
     * <p>The output value.</p>
     */
    inline const Aws::String& GetOutputValue() const{ return m_outputValue; }

    /**
     * <p>The output value.</p>
     */
    inline void SetOutputValue(const Aws::String& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The output value.</p>
     */
    inline void SetOutputValue(Aws::String&& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The output value.</p>
     */
    inline void SetOutputValue(const char* value) { m_outputValueHasBeenSet = true; m_outputValue.assign(value); }

    /**
     * <p>The output value.</p>
     */
    inline RecordOutput& WithOutputValue(const Aws::String& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The output value.</p>
     */
    inline RecordOutput& WithOutputValue(Aws::String&& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The output value.</p>
     */
    inline RecordOutput& WithOutputValue(const char* value) { SetOutputValue(value); return *this;}

    /**
     * <p>The text description of the output.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the output.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the output.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the output.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the output.</p>
     */
    inline RecordOutput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the output.</p>
     */
    inline RecordOutput& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the output.</p>
     */
    inline RecordOutput& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet;
    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
