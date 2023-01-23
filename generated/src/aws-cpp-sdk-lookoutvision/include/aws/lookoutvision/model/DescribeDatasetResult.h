/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DatasetDescription.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeDatasetResult();
    AWS_LOOKOUTFORVISION_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the requested dataset. </p>
     */
    inline const DatasetDescription& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p>The description of the requested dataset. </p>
     */
    inline void SetDatasetDescription(const DatasetDescription& value) { m_datasetDescription = value; }

    /**
     * <p>The description of the requested dataset. </p>
     */
    inline void SetDatasetDescription(DatasetDescription&& value) { m_datasetDescription = std::move(value); }

    /**
     * <p>The description of the requested dataset. </p>
     */
    inline DescribeDatasetResult& WithDatasetDescription(const DatasetDescription& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p>The description of the requested dataset. </p>
     */
    inline DescribeDatasetResult& WithDatasetDescription(DatasetDescription&& value) { SetDatasetDescription(std::move(value)); return *this;}

  private:

    DatasetDescription m_datasetDescription;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
