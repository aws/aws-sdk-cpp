/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StartQueryPlanningResponse">AWS
   * API Reference</a></p>
   */
  class StartQueryPlanningResult
  {
  public:
    AWS_LAKEFORMATION_API StartQueryPlanningResult();
    AWS_LAKEFORMATION_API StartQueryPlanningResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API StartQueryPlanningResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline StartQueryPlanningResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline StartQueryPlanningResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the plan query operation can be used to fetch the actual work unit
     * descriptors that are produced as the result of the operation. The ID is also
     * used to get the query state and as an input to the <code>Execute</code>
     * operation.</p>
     */
    inline StartQueryPlanningResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}

  private:

    Aws::String m_queryId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
