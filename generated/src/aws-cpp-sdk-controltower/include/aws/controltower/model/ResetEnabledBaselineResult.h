/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
  class ResetEnabledBaselineResult
  {
  public:
    AWS_CONTROLTOWER_API ResetEnabledBaselineResult();
    AWS_CONTROLTOWER_API ResetEnabledBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ResetEnabledBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifier = value; }

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifier = std::move(value); }

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifier.assign(value); }

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline ResetEnabledBaselineResult& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline ResetEnabledBaselineResult& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID (in UUID format) of the asynchronous <code>ResetEnabledBaseline</code>
     * operation. This <code>operationIdentifier</code> is used to track status through
     * calls to the <code>GetBaselineOperation</code> API.</p>
     */
    inline ResetEnabledBaselineResult& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ResetEnabledBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ResetEnabledBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ResetEnabledBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_operationIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
