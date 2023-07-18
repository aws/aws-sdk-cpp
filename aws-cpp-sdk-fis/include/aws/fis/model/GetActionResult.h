/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/Action.h>
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
namespace FIS
{
namespace Model
{
  class AWS_FIS_API GetActionResult
  {
  public:
    GetActionResult();
    GetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the action.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetAction(const Action& value) { m_action = value; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetAction(Action&& value) { m_action = std::move(value); }

    /**
     * <p>Information about the action.</p>
     */
    inline GetActionResult& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the action.</p>
     */
    inline GetActionResult& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}

  private:

    Action m_action;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
