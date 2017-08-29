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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/Destination.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API PutDestinationResult
  {
  public:
    PutDestinationResult();
    PutDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The destination.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(const Destination& value) { m_destination = value; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(Destination&& value) { m_destination = std::move(value); }

    /**
     * <p>The destination.</p>
     */
    inline PutDestinationResult& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination.</p>
     */
    inline PutDestinationResult& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Destination m_destination;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
