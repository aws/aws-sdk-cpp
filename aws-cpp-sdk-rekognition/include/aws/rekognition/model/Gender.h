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
#include <aws/rekognition/model/GenderType.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Gender of the face and the confidence level in the
   * determination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Gender">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Gender
  {
  public:
    Gender();
    Gender(Aws::Utils::Json::JsonView jsonValue);
    Gender& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Gender of the face.</p>
     */
    inline const GenderType& GetValue() const{ return m_value; }

    /**
     * <p>Gender of the face.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Gender of the face.</p>
     */
    inline void SetValue(const GenderType& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Gender of the face.</p>
     */
    inline void SetValue(GenderType&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Gender of the face.</p>
     */
    inline Gender& WithValue(const GenderType& value) { SetValue(value); return *this;}

    /**
     * <p>Gender of the face.</p>
     */
    inline Gender& WithValue(GenderType&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline Gender& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    GenderType m_value;
    bool m_valueHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
