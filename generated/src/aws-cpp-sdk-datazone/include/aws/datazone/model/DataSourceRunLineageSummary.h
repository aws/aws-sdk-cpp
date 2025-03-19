/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LineageImportStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The run lineage summary of a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceRunLineageSummary">AWS
   * API Reference</a></p>
   */
  class DataSourceRunLineageSummary
  {
  public:
    AWS_DATAZONE_API DataSourceRunLineageSummary() = default;
    AWS_DATAZONE_API DataSourceRunLineageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceRunLineageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The import status that's part of the run lineage summary of a data
     * source.</p>
     */
    inline LineageImportStatus GetImportStatus() const { return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(LineageImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline DataSourceRunLineageSummary& WithImportStatus(LineageImportStatus value) { SetImportStatus(value); return *this;}
    ///@}
  private:

    LineageImportStatus m_importStatus{LineageImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
