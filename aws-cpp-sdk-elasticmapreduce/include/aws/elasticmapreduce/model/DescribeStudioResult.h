/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Studio.h>
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
namespace EMR
{
namespace Model
{
  class DescribeStudioResult
  {
  public:
    AWS_EMR_API DescribeStudioResult();
    AWS_EMR_API DescribeStudioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeStudioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon EMR Studio details.</p>
     */
    inline const Studio& GetStudio() const{ return m_studio; }

    /**
     * <p>The Amazon EMR Studio details.</p>
     */
    inline void SetStudio(const Studio& value) { m_studio = value; }

    /**
     * <p>The Amazon EMR Studio details.</p>
     */
    inline void SetStudio(Studio&& value) { m_studio = std::move(value); }

    /**
     * <p>The Amazon EMR Studio details.</p>
     */
    inline DescribeStudioResult& WithStudio(const Studio& value) { SetStudio(value); return *this;}

    /**
     * <p>The Amazon EMR Studio details.</p>
     */
    inline DescribeStudioResult& WithStudio(Studio&& value) { SetStudio(std::move(value)); return *this;}

  private:

    Studio m_studio;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
