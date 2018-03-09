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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The parent object that implements what percentage of traffic will invoke each
   * function version. For more information, see
   * <a>lambda-traffic-shifting-using-aliases</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AliasRoutingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AliasRoutingConfiguration
  {
  public:
    AliasRoutingConfiguration();
    AliasRoutingConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    AliasRoutingConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAdditionalVersionWeights() const{ return m_additionalVersionWeights; }

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline void SetAdditionalVersionWeights(const Aws::Map<Aws::String, double>& value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights = value; }

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline void SetAdditionalVersionWeights(Aws::Map<Aws::String, double>&& value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights = std::move(value); }

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline AliasRoutingConfiguration& WithAdditionalVersionWeights(const Aws::Map<Aws::String, double>& value) { SetAdditionalVersionWeights(value); return *this;}

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline AliasRoutingConfiguration& WithAdditionalVersionWeights(Aws::Map<Aws::String, double>&& value) { SetAdditionalVersionWeights(std::move(value)); return *this;}

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(const Aws::String& key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(key, value); return *this; }

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(Aws::String&& key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(std::move(key), value); return *this; }

    /**
     * <p>Set this value to dictate what percentage of traffic will invoke the updated
     * function version. If set to an empty string, 100 percent of traffic will invoke
     * <code>function-version</code>. For more information, see
     * <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(const char* key, double value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, double> m_additionalVersionWeights;
    bool m_additionalVersionWeightsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
