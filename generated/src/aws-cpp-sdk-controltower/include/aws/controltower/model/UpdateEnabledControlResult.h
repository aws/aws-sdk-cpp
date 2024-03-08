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
  class UpdateEnabledControlResult
  {
  public:
    AWS_CONTROLTOWER_API UpdateEnabledControlResult();
    AWS_CONTROLTOWER_API UpdateEnabledControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API UpdateEnabledControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifier = value; }

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifier = std::move(value); }

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifier.assign(value); }

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline UpdateEnabledControlResult& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline UpdateEnabledControlResult& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p> The operation identifier for this <code>UpdateEnabledControl</code>
     * operation. </p>
     */
    inline UpdateEnabledControlResult& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEnabledControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEnabledControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEnabledControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_operationIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
