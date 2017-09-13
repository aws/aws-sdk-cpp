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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of an <code>UpdateMLModel</code> operation.</p> <p>You
   * can see the updated content by using the <code>GetMLModel</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateMLModelOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API UpdateMLModelResult
  {
  public:
    UpdateMLModelResult();
    UpdateMLModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMLModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline UpdateMLModelResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline UpdateMLModelResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline UpdateMLModelResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

  private:

    Aws::String m_mLModelId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
