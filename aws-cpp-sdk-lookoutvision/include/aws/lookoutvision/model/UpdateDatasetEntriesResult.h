/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DatasetStatus.h>
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
  class UpdateDatasetEntriesResult
  {
  public:
    AWS_LOOKOUTFORVISION_API UpdateDatasetEntriesResult();
    AWS_LOOKOUTFORVISION_API UpdateDatasetEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API UpdateDatasetEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the dataset update.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dataset update.</p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_status = value; }

    /**
     * <p>The status of the dataset update.</p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the dataset update.</p>
     */
    inline UpdateDatasetEntriesResult& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset update.</p>
     */
    inline UpdateDatasetEntriesResult& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DatasetStatus m_status;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
