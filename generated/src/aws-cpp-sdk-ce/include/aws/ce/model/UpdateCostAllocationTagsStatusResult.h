/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/UpdateCostAllocationTagsStatusError.h>
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
namespace CostExplorer
{
namespace Model
{
  class UpdateCostAllocationTagsStatusResult
  {
  public:
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusResult();
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline const Aws::Vector<UpdateCostAllocationTagsStatusError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline void SetErrors(const Aws::Vector<UpdateCostAllocationTagsStatusError>& value) { m_errors = value; }

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline void SetErrors(Aws::Vector<UpdateCostAllocationTagsStatusError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline UpdateCostAllocationTagsStatusResult& WithErrors(const Aws::Vector<UpdateCostAllocationTagsStatusError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline UpdateCostAllocationTagsStatusResult& WithErrors(Aws::Vector<UpdateCostAllocationTagsStatusError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline UpdateCostAllocationTagsStatusResult& AddErrors(const UpdateCostAllocationTagsStatusError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of <code>UpdateCostAllocationTagsStatusError</code> objects with error
     * details about each cost allocation tag that can't be updated. If there's no
     * failure, an empty array returns. </p>
     */
    inline UpdateCostAllocationTagsStatusResult& AddErrors(UpdateCostAllocationTagsStatusError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateCostAllocationTagsStatusError> m_errors;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
