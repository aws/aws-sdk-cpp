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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TimeToLiveDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API DescribeTimeToLiveResult
  {
  public:
    DescribeTimeToLiveResult();
    DescribeTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTimeToLiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const{ return m_timeToLiveDescription; }

    /**
     * <p/>
     */
    inline void SetTimeToLiveDescription(const TimeToLiveDescription& value) { m_timeToLiveDescription = value; }

    /**
     * <p/>
     */
    inline void SetTimeToLiveDescription(TimeToLiveDescription&& value) { m_timeToLiveDescription = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeTimeToLiveResult& WithTimeToLiveDescription(const TimeToLiveDescription& value) { SetTimeToLiveDescription(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeTimeToLiveResult& WithTimeToLiveDescription(TimeToLiveDescription&& value) { SetTimeToLiveDescription(std::move(value)); return *this;}

  private:

    TimeToLiveDescription m_timeToLiveDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
