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
   * Response for creating a data view.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataViewResponse">AWS
   * API Reference</a></p>
   */
  class CreateDataViewResult
  {
  public:
    AWS_FINSPACEDATA_API CreateDataViewResult();
    AWS_FINSPACEDATA_API CreateDataViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API CreateDataViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline CreateDataViewResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline CreateDataViewResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Dataset used for the Dataview.</p>
     */
    inline CreateDataViewResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline const Aws::String& GetDataViewId() const{ return m_dataViewId; }

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline void SetDataViewId(const Aws::String& value) { m_dataViewId = value; }

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline void SetDataViewId(Aws::String&& value) { m_dataViewId = std::move(value); }

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline void SetDataViewId(const char* value) { m_dataViewId.assign(value); }

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline CreateDataViewResult& WithDataViewId(const Aws::String& value) { SetDataViewId(value); return *this;}

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline CreateDataViewResult& WithDataViewId(Aws::String&& value) { SetDataViewId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the created Dataview.</p>
     */
    inline CreateDataViewResult& WithDataViewId(const char* value) { SetDataViewId(value); return *this;}

  private:

    Aws::String m_datasetId;

    Aws::String m_dataViewId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
