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
   * The response from a update changeset operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateChangesetResponse">AWS
   * API Reference</a></p>
   */
  class UpdateChangesetResult
  {
  public:
    AWS_FINSPACEDATA_API UpdateChangesetResult();
    AWS_FINSPACEDATA_API UpdateChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API UpdateChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetId = value; }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetId = std::move(value); }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetId.assign(value); }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}

  private:

    Aws::String m_changesetId;

    Aws::String m_datasetId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
