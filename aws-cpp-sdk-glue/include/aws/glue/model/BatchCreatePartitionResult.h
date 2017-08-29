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
#include <aws/glue/model/PartitionError.h>
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
  class AWS_GLUE_API BatchCreatePartitionResult
  {
  public:
    BatchCreatePartitionResult();
    BatchCreatePartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchCreatePartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline const Aws::Vector<PartitionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline void SetErrors(const Aws::Vector<PartitionError>& value) { m_errors = value; }

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline void SetErrors(Aws::Vector<PartitionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline BatchCreatePartitionResult& WithErrors(const Aws::Vector<PartitionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline BatchCreatePartitionResult& WithErrors(Aws::Vector<PartitionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline BatchCreatePartitionResult& AddErrors(const PartitionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors encountered when trying to create the requested partitions.</p>
     */
    inline BatchCreatePartitionResult& AddErrors(PartitionError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PartitionError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
