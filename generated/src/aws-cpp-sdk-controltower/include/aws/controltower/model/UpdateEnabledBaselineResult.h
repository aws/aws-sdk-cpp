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
  class UpdateEnabledBaselineResult
  {
  public:
    AWS_CONTROLTOWER_API UpdateEnabledBaselineResult();
    AWS_CONTROLTOWER_API UpdateEnabledBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API UpdateEnabledBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifier = value; }

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifier = std::move(value); }

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifier.assign(value); }

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline UpdateEnabledBaselineResult& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline UpdateEnabledBaselineResult& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID (in UUID format) of the asynchronous
     * <code>UpdateEnabledBaseline</code> operation. This
     * <code>operationIdentifier</code> is used to track status through calls to the
     * <code>GetBaselineOperation</code> API.</p>
     */
    inline UpdateEnabledBaselineResult& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEnabledBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEnabledBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEnabledBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_operationIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
