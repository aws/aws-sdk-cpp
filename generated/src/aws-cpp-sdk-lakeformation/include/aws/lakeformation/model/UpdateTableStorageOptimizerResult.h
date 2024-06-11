﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{
  class UpdateTableStorageOptimizerResult
  {
  public:
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult();
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }
    inline void SetResult(const Aws::String& value) { m_result = value; }
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }
    inline void SetResult(const char* value) { m_result.assign(value); }
    inline UpdateTableStorageOptimizerResult& WithResult(const Aws::String& value) { SetResult(value); return *this;}
    inline UpdateTableStorageOptimizerResult& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}
    inline UpdateTableStorageOptimizerResult& WithResult(const char* value) { SetResult(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTableStorageOptimizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTableStorageOptimizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTableStorageOptimizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_result;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
