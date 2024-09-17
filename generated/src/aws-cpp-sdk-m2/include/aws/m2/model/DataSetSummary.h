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
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary();
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DataSetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DataSetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
    inline void SetDataSetName(const Aws::String& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = value; }
    inline void SetDataSetName(Aws::String&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::move(value); }
    inline void SetDataSetName(const char* value) { m_dataSetNameHasBeenSet = true; m_dataSetName.assign(value); }
    inline DataSetSummary& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}
    inline DataSetSummary& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}
    inline DataSetSummary& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const Aws::String& GetDataSetOrg() const{ return m_dataSetOrg; }
    inline bool DataSetOrgHasBeenSet() const { return m_dataSetOrgHasBeenSet; }
    inline void SetDataSetOrg(const Aws::String& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = value; }
    inline void SetDataSetOrg(Aws::String&& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = std::move(value); }
    inline void SetDataSetOrg(const char* value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg.assign(value); }
    inline DataSetSummary& WithDataSetOrg(const Aws::String& value) { SetDataSetOrg(value); return *this;}
    inline DataSetSummary& WithDataSetOrg(Aws::String&& value) { SetDataSetOrg(std::move(value)); return *this;}
    inline DataSetSummary& WithDataSetOrg(const char* value) { SetDataSetOrg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the data set. </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline DataSetSummary& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline DataSetSummary& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline DataSetSummary& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const{ return m_lastReferencedTime; }
    inline bool LastReferencedTimeHasBeenSet() const { return m_lastReferencedTimeHasBeenSet; }
    inline void SetLastReferencedTime(const Aws::Utils::DateTime& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = value; }
    inline void SetLastReferencedTime(Aws::Utils::DateTime&& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = std::move(value); }
    inline DataSetSummary& WithLastReferencedTime(const Aws::Utils::DateTime& value) { SetLastReferencedTime(value); return *this;}
    inline DataSetSummary& WithLastReferencedTime(Aws::Utils::DateTime&& value) { SetLastReferencedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline DataSetSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DataSetSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;

    Aws::String m_dataSetOrg;
    bool m_dataSetOrgHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::Utils::DateTime m_lastReferencedTime;
    bool m_lastReferencedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
