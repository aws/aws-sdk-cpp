/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/ControlOperation.h>
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
  class AWS_CONTROLTOWER_API GetControlOperationResult
  {
  public:
    GetControlOperationResult();
    GetControlOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetControlOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const ControlOperation& GetControlOperation() const{ return m_controlOperation; }

    /**
     * <p/>
     */
    inline void SetControlOperation(const ControlOperation& value) { m_controlOperation = value; }

    /**
     * <p/>
     */
    inline void SetControlOperation(ControlOperation&& value) { m_controlOperation = std::move(value); }

    /**
     * <p/>
     */
    inline GetControlOperationResult& WithControlOperation(const ControlOperation& value) { SetControlOperation(value); return *this;}

    /**
     * <p/>
     */
    inline GetControlOperationResult& WithControlOperation(ControlOperation&& value) { SetControlOperation(std::move(value)); return *this;}

  private:

    ControlOperation m_controlOperation;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
