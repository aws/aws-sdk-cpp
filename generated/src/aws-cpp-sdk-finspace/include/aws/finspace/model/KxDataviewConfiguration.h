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
    AWS_FINSPACE_API KxDataviewConfiguration() = default;
    AWS_FINSPACE_API KxDataviewConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const { return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    template<typename DataviewNameT = Aws::String>
    void SetDataviewName(DataviewNameT&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::forward<DataviewNameT>(value); }
    template<typename DataviewNameT = Aws::String>
    KxDataviewConfiguration& WithDataviewName(DataviewNameT&& value) { SetDataviewName(std::forward<DataviewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the dataview corresponding to a given changeset. </p>
     */
    inline const Aws::String& GetDataviewVersionId() const { return m_dataviewVersionId; }
    inline bool DataviewVersionIdHasBeenSet() const { return m_dataviewVersionIdHasBeenSet; }
    template<typename DataviewVersionIdT = Aws::String>
    void SetDataviewVersionId(DataviewVersionIdT&& value) { m_dataviewVersionIdHasBeenSet = true; m_dataviewVersionId = std::forward<DataviewVersionIdT>(value); }
    template<typename DataviewVersionIdT = Aws::String>
    KxDataviewConfiguration& WithDataviewVersionId(DataviewVersionIdT&& value) { SetDataviewVersionId(std::forward<DataviewVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    KxDataviewConfiguration& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The db path and volume configuration for the segmented database.</p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const { return m_segmentConfigurations; }
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    void SetSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::forward<SegmentConfigurationsT>(value); }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    KxDataviewConfiguration& WithSegmentConfigurations(SegmentConfigurationsT&& value) { SetSegmentConfigurations(std::forward<SegmentConfigurationsT>(value)); return *this;}
    template<typename SegmentConfigurationsT = KxDataviewSegmentConfiguration>
    KxDataviewConfiguration& AddSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.emplace_back(std::forward<SegmentConfigurationsT>(value)); return *this; }
    ///@}
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
