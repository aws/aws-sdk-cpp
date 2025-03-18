/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A subset of the possible data set attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetSummary">AWS
   * API Reference</a></p>
   */
  class DataSetSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DataSetSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
    template<typename DataSetNameT = Aws::String>
    void SetDataSetName(DataSetNameT&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::forward<DataSetNameT>(value); }
    template<typename DataSetNameT = Aws::String>
    DataSetSummary& WithDataSetName(DataSetNameT&& value) { SetDataSetName(std::forward<DataSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const Aws::String& GetDataSetOrg() const { return m_dataSetOrg; }
    inline bool DataSetOrgHasBeenSet() const { return m_dataSetOrgHasBeenSet; }
    template<typename DataSetOrgT = Aws::String>
    void SetDataSetOrg(DataSetOrgT&& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = std::forward<DataSetOrgT>(value); }
    template<typename DataSetOrgT = Aws::String>
    DataSetSummary& WithDataSetOrg(DataSetOrgT&& value) { SetDataSetOrg(std::forward<DataSetOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the data set. </p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    DataSetSummary& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const { return m_lastReferencedTime; }
    inline bool LastReferencedTimeHasBeenSet() const { return m_lastReferencedTimeHasBeenSet; }
    template<typename LastReferencedTimeT = Aws::Utils::DateTime>
    void SetLastReferencedTime(LastReferencedTimeT&& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = std::forward<LastReferencedTimeT>(value); }
    template<typename LastReferencedTimeT = Aws::Utils::DateTime>
    DataSetSummary& WithLastReferencedTime(LastReferencedTimeT&& value) { SetLastReferencedTime(std::forward<LastReferencedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DataSetSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;

    Aws::String m_dataSetOrg;
    bool m_dataSetOrgHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::Utils::DateTime m_lastReferencedTime{};
    bool m_lastReferencedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
