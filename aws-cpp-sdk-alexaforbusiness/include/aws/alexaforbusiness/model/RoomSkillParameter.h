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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>A skill parameter associated with a room.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RoomSkillParameter">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API RoomSkillParameter
  {
  public:
    RoomSkillParameter();
    RoomSkillParameter(Aws::Utils::Json::JsonView jsonValue);
    RoomSkillParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline RoomSkillParameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline RoomSkillParameter& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}

    /**
     * <p>The parameter key of a room skill parameter. ParameterKey is an enumerated
     * type that only takes “DEFAULT” or “SCOPE” as valid values.</p>
     */
    inline RoomSkillParameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}


    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline RoomSkillParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline RoomSkillParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value of a room skill parameter.</p>
     */
    inline RoomSkillParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}

  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
