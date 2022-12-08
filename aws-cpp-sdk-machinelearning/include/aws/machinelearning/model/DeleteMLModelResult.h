/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the output of a <code>DeleteMLModel</code> operation.</p> <p>You
   * can use the <code>GetMLModel</code> operation and check the value of the
   * <code>Status</code> parameter to see whether an <code>MLModel</code> is marked
   * as <code>DELETED</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteMLModelOutput">AWS
   * API Reference</a></p>
   */
  class DeleteMLModelResult
  {
  public:
    AWS_MACHINELEARNING_API DeleteMLModelResult();
    AWS_MACHINELEARNING_API DeleteMLModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DeleteMLModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline DeleteMLModelResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline DeleteMLModelResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline DeleteMLModelResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

  private:

    Aws::String m_mLModelId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
