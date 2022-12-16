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


    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline DataSetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline DataSetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const Aws::String& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(Aws::String&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const char* value) { m_dataSetNameHasBeenSet = true; m_dataSetName.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetSummary& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetSummary& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetSummary& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}


    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const Aws::String& GetDataSetOrg() const{ return m_dataSetOrg; }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline bool DataSetOrgHasBeenSet() const { return m_dataSetOrgHasBeenSet; }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline void SetDataSetOrg(const Aws::String& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = value; }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline void SetDataSetOrg(Aws::String&& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = std::move(value); }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline void SetDataSetOrg(const char* value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg.assign(value); }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline DataSetSummary& WithDataSetOrg(const Aws::String& value) { SetDataSetOrg(value); return *this;}

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline DataSetSummary& WithDataSetOrg(Aws::String&& value) { SetDataSetOrg(std::move(value)); return *this;}

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline DataSetSummary& WithDataSetOrg(const char* value) { SetDataSetOrg(value); return *this;}


    /**
     * <p>The format of the data set. </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the data set. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the data set. </p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the data set. </p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the data set. </p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the data set. </p>
     */
    inline DataSetSummary& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the data set. </p>
     */
    inline DataSetSummary& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the data set. </p>
     */
    inline DataSetSummary& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const{ return m_lastReferencedTime; }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline bool LastReferencedTimeHasBeenSet() const { return m_lastReferencedTimeHasBeenSet; }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline void SetLastReferencedTime(const Aws::Utils::DateTime& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = value; }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline void SetLastReferencedTime(Aws::Utils::DateTime&& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = std::move(value); }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline DataSetSummary& WithLastReferencedTime(const Aws::Utils::DateTime& value) { SetLastReferencedTime(value); return *this;}

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline DataSetSummary& WithLastReferencedTime(Aws::Utils::DateTime&& value) { SetLastReferencedTime(std::move(value)); return *this;}


    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline DataSetSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline DataSetSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

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
