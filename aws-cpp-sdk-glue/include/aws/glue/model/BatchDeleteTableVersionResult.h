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
#include <aws/glue/model/TableVersionError.h>
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
  class AWS_GLUE_API BatchDeleteTableVersionResult
  {
  public:
    BatchDeleteTableVersionResult();
    BatchDeleteTableVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeleteTableVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline const Aws::Vector<TableVersionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline void SetErrors(const Aws::Vector<TableVersionError>& value) { m_errors = value; }

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline void SetErrors(Aws::Vector<TableVersionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline BatchDeleteTableVersionResult& WithErrors(const Aws::Vector<TableVersionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline BatchDeleteTableVersionResult& WithErrors(Aws::Vector<TableVersionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline BatchDeleteTableVersionResult& AddErrors(const TableVersionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline BatchDeleteTableVersionResult& AddErrors(TableVersionError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TableVersionError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
