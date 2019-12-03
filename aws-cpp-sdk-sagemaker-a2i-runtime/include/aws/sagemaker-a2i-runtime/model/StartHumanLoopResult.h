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
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopActivationResults.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AugmentedAIRuntime
{
namespace Model
{
  class AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult
  {
  public:
    StartHumanLoopResult();
    StartHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}


    /**
     * <p>An object containing information about the human loop activation.</p>
     */
    inline const HumanLoopActivationResults& GetHumanLoopActivationResults() const{ return m_humanLoopActivationResults; }

    /**
     * <p>An object containing information about the human loop activation.</p>
     */
    inline void SetHumanLoopActivationResults(const HumanLoopActivationResults& value) { m_humanLoopActivationResults = value; }

    /**
     * <p>An object containing information about the human loop activation.</p>
     */
    inline void SetHumanLoopActivationResults(HumanLoopActivationResults&& value) { m_humanLoopActivationResults = std::move(value); }

    /**
     * <p>An object containing information about the human loop activation.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopActivationResults(const HumanLoopActivationResults& value) { SetHumanLoopActivationResults(value); return *this;}

    /**
     * <p>An object containing information about the human loop activation.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopActivationResults(HumanLoopActivationResults&& value) { SetHumanLoopActivationResults(std::move(value)); return *this;}

  private:

    Aws::String m_humanLoopArn;

    HumanLoopActivationResults m_humanLoopActivationResults;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
