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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SourceAlgorithm.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of algorithms that were used to create a model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceAlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SourceAlgorithmSpecification
  {
  public:
    SourceAlgorithmSpecification();
    SourceAlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    SourceAlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline const Aws::Vector<SourceAlgorithm>& GetSourceAlgorithms() const{ return m_sourceAlgorithms; }

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline bool SourceAlgorithmsHasBeenSet() const { return m_sourceAlgorithmsHasBeenSet; }

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline void SetSourceAlgorithms(const Aws::Vector<SourceAlgorithm>& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms = value; }

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline void SetSourceAlgorithms(Aws::Vector<SourceAlgorithm>&& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms = std::move(value); }

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline SourceAlgorithmSpecification& WithSourceAlgorithms(const Aws::Vector<SourceAlgorithm>& value) { SetSourceAlgorithms(value); return *this;}

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline SourceAlgorithmSpecification& WithSourceAlgorithms(Aws::Vector<SourceAlgorithm>&& value) { SetSourceAlgorithms(std::move(value)); return *this;}

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline SourceAlgorithmSpecification& AddSourceAlgorithms(const SourceAlgorithm& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms.push_back(value); return *this; }

    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline SourceAlgorithmSpecification& AddSourceAlgorithms(SourceAlgorithm&& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SourceAlgorithm> m_sourceAlgorithms;
    bool m_sourceAlgorithmsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
