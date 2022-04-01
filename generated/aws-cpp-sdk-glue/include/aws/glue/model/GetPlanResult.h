﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetPlanResult
  {
  public:
    GetPlanResult();
    GetPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline const Aws::String& GetPythonScript() const{ return m_pythonScript; }

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline void SetPythonScript(const Aws::String& value) { m_pythonScript = value; }

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline void SetPythonScript(Aws::String&& value) { m_pythonScript = std::move(value); }

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline void SetPythonScript(const char* value) { m_pythonScript.assign(value); }

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(const Aws::String& value) { SetPythonScript(value); return *this;}

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(Aws::String&& value) { SetPythonScript(std::move(value)); return *this;}

    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(const char* value) { SetPythonScript(value); return *this;}


    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline const Aws::String& GetScalaCode() const{ return m_scalaCode; }

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline void SetScalaCode(const Aws::String& value) { m_scalaCode = value; }

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline void SetScalaCode(Aws::String&& value) { m_scalaCode = std::move(value); }

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline void SetScalaCode(const char* value) { m_scalaCode.assign(value); }

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline GetPlanResult& WithScalaCode(const Aws::String& value) { SetScalaCode(value); return *this;}

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline GetPlanResult& WithScalaCode(Aws::String&& value) { SetScalaCode(std::move(value)); return *this;}

    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline GetPlanResult& WithScalaCode(const char* value) { SetScalaCode(value); return *this;}

  private:

    Aws::String m_pythonScript;

    Aws::String m_scalaCode;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
