/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of an <code>UpdateDataSource</code> operation.</p>
   * <p>You can see the updated content by using the <code>GetBatchPrediction</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateDataSourceOutput">AWS
   * API Reference</a></p>
   */
  class UpdateDataSourceResult
  {
  public:
    AWS_MACHINELEARNING_API UpdateDataSourceResult();
    AWS_MACHINELEARNING_API UpdateDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API UpdateDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline UpdateDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline UpdateDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> during creation. This value
     * should be identical to the value of the <code>DataSourceID</code> in the
     * request.</p>
     */
    inline UpdateDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
