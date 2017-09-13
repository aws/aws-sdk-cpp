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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ErrorDetail.h>
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
  class AWS_GLUE_API BatchDeleteConnectionResult
  {
  public:
    BatchDeleteConnectionResult();
    BatchDeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline BatchDeleteConnectionResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline BatchDeleteConnectionResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline BatchDeleteConnectionResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline BatchDeleteConnectionResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline BatchDeleteConnectionResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }


    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline const Aws::Map<Aws::String, ErrorDetail>& GetErrors() const{ return m_errors; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline void SetErrors(const Aws::Map<Aws::String, ErrorDetail>& value) { m_errors = value; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline void SetErrors(Aws::Map<Aws::String, ErrorDetail>&& value) { m_errors = std::move(value); }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& WithErrors(const Aws::Map<Aws::String, ErrorDetail>& value) { SetErrors(value); return *this;}

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& WithErrors(Aws::Map<Aws::String, ErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(const Aws::String& key, const ErrorDetail& value) { m_errors.emplace(key, value); return *this; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(Aws::String&& key, const ErrorDetail& value) { m_errors.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(const Aws::String& key, ErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(Aws::String&& key, ErrorDetail&& value) { m_errors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(const char* key, ErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline BatchDeleteConnectionResult& AddErrors(const char* key, const ErrorDetail& value) { m_errors.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Map<Aws::String, ErrorDetail> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
