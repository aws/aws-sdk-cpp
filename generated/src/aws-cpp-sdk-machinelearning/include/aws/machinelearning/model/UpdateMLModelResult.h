﻿/**
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
   * <p>Represents the output of an <code>UpdateMLModel</code> operation.</p> <p>You
   * can see the updated content by using the <code>GetMLModel</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateMLModelOutput">AWS
   * API Reference</a></p>
   */
  class UpdateMLModelResult
  {
  public:
    AWS_MACHINELEARNING_API UpdateMLModelResult();
    AWS_MACHINELEARNING_API UpdateMLModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API UpdateMLModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation. This value
     * should be identical to the value of the <code>MLModelID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }
    inline UpdateMLModelResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}
    inline UpdateMLModelResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}
    inline UpdateMLModelResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMLModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMLModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMLModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
