/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetGroup.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeDatasetGroupResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetGroupResult();
    AWS_PERSONALIZE_API DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline const DatasetGroup& GetDatasetGroup() const{ return m_datasetGroup; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(const DatasetGroup& value) { m_datasetGroup = value; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(DatasetGroup&& value) { m_datasetGroup = std::move(value); }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(const DatasetGroup& value) { SetDatasetGroup(value); return *this;}

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(DatasetGroup&& value) { SetDatasetGroup(std::move(value)); return *this;}

  private:

    DatasetGroup m_datasetGroup;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
