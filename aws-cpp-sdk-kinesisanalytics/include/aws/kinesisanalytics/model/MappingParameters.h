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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/JSONMappingParameters.h>
#include <aws/kinesisanalytics/model/CSVMappingParameters.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When configuring application input at the time of creating or updating an
   * application, provides additional mapping information specific to the record
   * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
   * streaming source.</p>
   */
  class AWS_KINESISANALYTICS_API MappingParameters
  {
  public:
    MappingParameters();
    MappingParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    MappingParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline const JSONMappingParameters& GetJSONMappingParameters() const{ return m_jSONMappingParameters; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline void SetJSONMappingParameters(const JSONMappingParameters& value) { m_jSONMappingParametersHasBeenSet = true; m_jSONMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline void SetJSONMappingParameters(JSONMappingParameters&& value) { m_jSONMappingParametersHasBeenSet = true; m_jSONMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline MappingParameters& WithJSONMappingParameters(const JSONMappingParameters& value) { SetJSONMappingParameters(value); return *this;}

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline MappingParameters& WithJSONMappingParameters(JSONMappingParameters&& value) { SetJSONMappingParameters(value); return *this;}

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline const CSVMappingParameters& GetCSVMappingParameters() const{ return m_cSVMappingParameters; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline void SetCSVMappingParameters(const CSVMappingParameters& value) { m_cSVMappingParametersHasBeenSet = true; m_cSVMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline void SetCSVMappingParameters(CSVMappingParameters&& value) { m_cSVMappingParametersHasBeenSet = true; m_cSVMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline MappingParameters& WithCSVMappingParameters(const CSVMappingParameters& value) { SetCSVMappingParameters(value); return *this;}

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline MappingParameters& WithCSVMappingParameters(CSVMappingParameters&& value) { SetCSVMappingParameters(value); return *this;}

  private:
    JSONMappingParameters m_jSONMappingParameters;
    bool m_jSONMappingParametersHasBeenSet;
    CSVMappingParameters m_cSVMappingParameters;
    bool m_cSVMappingParametersHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
