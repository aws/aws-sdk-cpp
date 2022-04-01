﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Parameter.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetParametersResult
  {
  public:
    GetParametersResult();
    GetParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of details for a parameter.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parameters = value; }

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline GetParametersResult& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline GetParametersResult& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline GetParametersResult& AddParameters(const Parameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of details for a parameter.</p>
     */
    inline GetParametersResult& AddParameters(Parameter&& value) { m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const{ return m_invalidParameters; }

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline void SetInvalidParameters(const Aws::Vector<Aws::String>& value) { m_invalidParameters = value; }

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline void SetInvalidParameters(Aws::Vector<Aws::String>&& value) { m_invalidParameters = std::move(value); }

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline GetParametersResult& WithInvalidParameters(const Aws::Vector<Aws::String>& value) { SetInvalidParameters(value); return *this;}

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline GetParametersResult& WithInvalidParameters(Aws::Vector<Aws::String>&& value) { SetInvalidParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline GetParametersResult& AddInvalidParameters(const Aws::String& value) { m_invalidParameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline GetParametersResult& AddInvalidParameters(Aws::String&& value) { m_invalidParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline GetParametersResult& AddInvalidParameters(const char* value) { m_invalidParameters.push_back(value); return *this; }

  private:

    Aws::Vector<Parameter> m_parameters;

    Aws::Vector<Aws::String> m_invalidParameters;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
