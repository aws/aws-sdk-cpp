/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/ControlOperation.h>
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
  class GetControlOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetControlOperationResult();
    AWS_CONTROLTOWER_API GetControlOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetControlOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An operation performed by the control.</p>
     */
    inline const ControlOperation& GetControlOperation() const{ return m_controlOperation; }

    /**
     * <p>An operation performed by the control.</p>
     */
    inline void SetControlOperation(const ControlOperation& value) { m_controlOperation = value; }

    /**
     * <p>An operation performed by the control.</p>
     */
    inline void SetControlOperation(ControlOperation&& value) { m_controlOperation = std::move(value); }

    /**
     * <p>An operation performed by the control.</p>
     */
    inline GetControlOperationResult& WithControlOperation(const ControlOperation& value) { SetControlOperation(value); return *this;}

    /**
     * <p>An operation performed by the control.</p>
     */
    inline GetControlOperationResult& WithControlOperation(ControlOperation&& value) { SetControlOperation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetControlOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetControlOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetControlOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ControlOperation m_controlOperation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
