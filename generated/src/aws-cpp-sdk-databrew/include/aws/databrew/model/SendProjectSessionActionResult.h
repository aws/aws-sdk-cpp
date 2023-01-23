/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class SendProjectSessionActionResult
  {
  public:
    AWS_GLUEDATABREW_API SendProjectSessionActionResult();
    AWS_GLUEDATABREW_API SendProjectSessionActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API SendProjectSessionActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline void SetResult(const Aws::String& value) { m_result = value; }

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline void SetResult(const char* value) { m_result.assign(value); }

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline SendProjectSessionActionResult& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline SendProjectSessionActionResult& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>A message indicating the result of performing the action.</p>
     */
    inline SendProjectSessionActionResult& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline SendProjectSessionActionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline SendProjectSessionActionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that was affected by the action.</p>
     */
    inline SendProjectSessionActionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the action that was performed.</p>
     */
    inline int GetActionId() const{ return m_actionId; }

    /**
     * <p>A unique identifier for the action that was performed.</p>
     */
    inline void SetActionId(int value) { m_actionId = value; }

    /**
     * <p>A unique identifier for the action that was performed.</p>
     */
    inline SendProjectSessionActionResult& WithActionId(int value) { SetActionId(value); return *this;}

  private:

    Aws::String m_result;

    Aws::String m_name;

    int m_actionId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
