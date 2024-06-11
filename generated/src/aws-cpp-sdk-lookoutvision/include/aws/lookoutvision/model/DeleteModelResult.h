﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DeleteModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DeleteModelResult();
    AWS_LOOKOUTFORVISION_API DeleteModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DeleteModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model that was deleted.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline DeleteModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline DeleteModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline DeleteModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
