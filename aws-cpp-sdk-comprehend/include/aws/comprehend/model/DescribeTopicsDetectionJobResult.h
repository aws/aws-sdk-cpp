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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API DescribeTopicsDetectionJobResult
  {
  public:
    DescribeTopicsDetectionJobResult();
    DescribeTopicsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTopicsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline const TopicsDetectionJobProperties& GetTopicsDetectionJobProperties() const{ return m_topicsDetectionJobProperties; }

    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline void SetTopicsDetectionJobProperties(const TopicsDetectionJobProperties& value) { m_topicsDetectionJobProperties = value; }

    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline void SetTopicsDetectionJobProperties(TopicsDetectionJobProperties&& value) { m_topicsDetectionJobProperties = std::move(value); }

    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline DescribeTopicsDetectionJobResult& WithTopicsDetectionJobProperties(const TopicsDetectionJobProperties& value) { SetTopicsDetectionJobProperties(value); return *this;}

    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline DescribeTopicsDetectionJobResult& WithTopicsDetectionJobProperties(TopicsDetectionJobProperties&& value) { SetTopicsDetectionJobProperties(std::move(value)); return *this;}

  private:

    TopicsDetectionJobProperties m_topicsDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
