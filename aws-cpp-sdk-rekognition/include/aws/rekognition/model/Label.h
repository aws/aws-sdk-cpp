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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Structure containing details about the detected label, including name, and
   * level of confidence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Label">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Label
  {
  public:
    Label();
    Label(const Aws::Utils::Json::JsonValue& jsonValue);
    Label& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name (label) of the object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name (label) of the object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name (label) of the object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name (label) of the object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name (label) of the object.</p>
     */
    inline Label& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name (label) of the object.</p>
     */
    inline Label& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name (label) of the object.</p>
     */
    inline Label& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Level of confidence.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence.</p>
     */
    inline Label& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
