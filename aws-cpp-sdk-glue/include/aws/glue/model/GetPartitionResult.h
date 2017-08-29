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
#include <aws/glue/model/Partition.h>
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
  class AWS_GLUE_API GetPartitionResult
  {
  public:
    GetPartitionResult();
    GetPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline void SetPartition(const Partition& value) { m_partition = value; }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline void SetPartition(Partition&& value) { m_partition = std::move(value); }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline GetPartitionResult& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline GetPartitionResult& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}

  private:

    Partition m_partition;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
