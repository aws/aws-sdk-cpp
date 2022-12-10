/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeTopicsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult();
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
