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
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/AttributeName.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p> Provides contextual information about the extracted entity. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Trait">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API Trait
  {
  public:
    Trait();
    Trait(Aws::Utils::Json::JsonView jsonValue);
    Trait& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline const AttributeName& GetName() const{ return m_name; }

    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline void SetName(const AttributeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline void SetName(AttributeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline Trait& WithName(const AttributeName& value) { SetName(value); return *this;}

    /**
     * <p> Provides a name or contextual description about the trait. </p>
     */
    inline Trait& WithName(AttributeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of this
     * trait.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of this
     * trait.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of this
     * trait.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of this
     * trait.</p>
     */
    inline Trait& WithScore(double value) { SetScore(value); return *this;}

  private:

    AttributeName m_name;
    bool m_nameHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
