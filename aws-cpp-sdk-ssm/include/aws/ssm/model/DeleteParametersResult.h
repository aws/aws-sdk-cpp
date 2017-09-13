/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SSM_API DeleteParametersResult
  {
  public:
    DeleteParametersResult();
    DeleteParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedParameters() const{ return m_deletedParameters; }

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline void SetDeletedParameters(const Aws::Vector<Aws::String>& value) { m_deletedParameters = value; }

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline void SetDeletedParameters(Aws::Vector<Aws::String>&& value) { m_deletedParameters = std::move(value); }

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline DeleteParametersResult& WithDeletedParameters(const Aws::Vector<Aws::String>& value) { SetDeletedParameters(value); return *this;}

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline DeleteParametersResult& WithDeletedParameters(Aws::Vector<Aws::String>&& value) { SetDeletedParameters(std::move(value)); return *this;}

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline DeleteParametersResult& AddDeletedParameters(const Aws::String& value) { m_deletedParameters.push_back(value); return *this; }

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline DeleteParametersResult& AddDeletedParameters(Aws::String&& value) { m_deletedParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline DeleteParametersResult& AddDeletedParameters(const char* value) { m_deletedParameters.push_back(value); return *this; }


    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const{ return m_invalidParameters; }

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline void SetInvalidParameters(const Aws::Vector<Aws::String>& value) { m_invalidParameters = value; }

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline void SetInvalidParameters(Aws::Vector<Aws::String>&& value) { m_invalidParameters = std::move(value); }

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline DeleteParametersResult& WithInvalidParameters(const Aws::Vector<Aws::String>& value) { SetInvalidParameters(value); return *this;}

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline DeleteParametersResult& WithInvalidParameters(Aws::Vector<Aws::String>&& value) { SetInvalidParameters(std::move(value)); return *this;}

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline DeleteParametersResult& AddInvalidParameters(const Aws::String& value) { m_invalidParameters.push_back(value); return *this; }

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline DeleteParametersResult& AddInvalidParameters(Aws::String&& value) { m_invalidParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of parameters that weren't deleted because the parameters are not
     * valid.</p>
     */
    inline DeleteParametersResult& AddInvalidParameters(const char* value) { m_invalidParameters.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_deletedParameters;

    Aws::Vector<Aws::String> m_invalidParameters;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
