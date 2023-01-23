/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  /**
   * The response from a CreateDataset operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDatasetResponse">AWS
   * API Reference</a></p>
   */
  class CreateDatasetResult
  {
  public:
    AWS_FINSPACEDATA_API CreateDatasetResult();
    AWS_FINSPACEDATA_API CreateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API CreateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the created Dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}

  private:

    Aws::String m_datasetId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
