/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{

  /**
   * <p> The structure that stores the configuration details of a
   * dataview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDataviewConfiguration">AWS
   * API Reference</a></p>
   */
  class KxDataviewConfiguration
  {
  public:
    AWS_FINSPACE_API KxDataviewConfiguration();
    AWS_FINSPACE_API KxDataviewConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline KxDataviewConfiguration& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline KxDataviewConfiguration& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline KxDataviewConfiguration& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline const Aws::String& GetDataviewVersionId() const{ return m_dataviewVersionId; }

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline bool DataviewVersionIdHasBeenSet() const { return m_dataviewVersionIdHasBeenSet; }

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline void SetDataviewVersionId(const Aws::String& value) { m_dataviewVersionIdHasBeenSet = true; m_dataviewVersionId = value; }

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline void SetDataviewVersionId(Aws::String&& value) { m_dataviewVersionIdHasBeenSet = true; m_dataviewVersionId = std::move(value); }

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline void SetDataviewVersionId(const char* value) { m_dataviewVersionIdHasBeenSet = true; m_dataviewVersionId.assign(value); }

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline KxDataviewConfiguration& WithDataviewVersionId(const Aws::String& value) { SetDataviewVersionId(value); return *this;}

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline KxDataviewConfiguration& WithDataviewVersionId(Aws::String&& value) { SetDataviewVersionId(std::move(value)); return *this;}

    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline KxDataviewConfiguration& WithDataviewVersionId(const char* value) { SetDataviewVersionId(value); return *this;}


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewConfiguration& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewConfiguration& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewConfiguration& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const{ return m_segmentConfigurations; }

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = value; }

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::move(value); }

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline KxDataviewConfiguration& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline KxDataviewConfiguration& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline KxDataviewConfiguration& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }

    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline KxDataviewConfiguration& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    Aws::String m_dataviewVersionId;
    bool m_dataviewVersionIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
