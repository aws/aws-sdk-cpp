/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   * Request to update an existing changeset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateChangesetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API UpdateChangesetRequest : public FinSpaceDataRequest
  {
  public:
    UpdateChangesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChangeset"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline UpdateChangesetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline UpdateChangesetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token used to ensure idempotency.</p>
     */
    inline UpdateChangesetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset in which the Changeset is
     * created.</p>
     */
    inline UpdateChangesetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetRequest& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetRequest& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Changeset to update.</p>
     */
    inline UpdateChangesetRequest& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline bool SourceParamsHasBeenSet() const { return m_sourceParamsHasBeenSet; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = value; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams = std::move(value); }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline UpdateChangesetRequest& AddSourceParams(const char* key, const char* value) { m_sourceParamsHasBeenSet = true; m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline bool FormatParamsHasBeenSet() const { return m_formatParamsHasBeenSet; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParamsHasBeenSet = true; m_formatParams = value; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParamsHasBeenSet = true; m_formatParams = std::move(value); }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(const char* key, Aws::String&& value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(Aws::String&& key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the structure of the source file(s).</p>
     */
    inline UpdateChangesetRequest& AddFormatParams(const char* key, const char* value) { m_formatParamsHasBeenSet = true; m_formatParams.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;
    bool m_sourceParamsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_formatParams;
    bool m_formatParamsHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
