/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/BaselineOperation.h>
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
namespace ControlTower
{
namespace Model
{
  class GetBaselineOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetBaselineOperationResult();
    AWS_CONTROLTOWER_API GetBaselineOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetBaselineOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline const BaselineOperation& GetBaselineOperation() const{ return m_baselineOperation; }

    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline void SetBaselineOperation(const BaselineOperation& value) { m_baselineOperation = value; }

    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline void SetBaselineOperation(BaselineOperation&& value) { m_baselineOperation = std::move(value); }

    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline GetBaselineOperationResult& WithBaselineOperation(const BaselineOperation& value) { SetBaselineOperation(value); return *this;}

    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline GetBaselineOperationResult& WithBaselineOperation(BaselineOperation&& value) { SetBaselineOperation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBaselineOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBaselineOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBaselineOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BaselineOperation m_baselineOperation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
