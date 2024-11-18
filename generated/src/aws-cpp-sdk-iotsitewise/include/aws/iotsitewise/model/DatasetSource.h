/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetSourceType.h>
#include <aws/iotsitewise/model/DatasetSourceFormat.h>
#include <aws/iotsitewise/model/SourceDetail.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The data source for the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetSource">AWS
   * API Reference</a></p>
   */
  class DatasetSource
  {
  public:
    AWS_IOTSITEWISE_API DatasetSource();
    AWS_IOTSITEWISE_API DatasetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source for the dataset.</p>
     */
    inline const DatasetSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const DatasetSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(DatasetSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline DatasetSource& WithSourceType(const DatasetSourceType& value) { SetSourceType(value); return *this;}
    inline DatasetSource& WithSourceType(DatasetSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the dataset source associated with the dataset.</p>
     */
    inline const DatasetSourceFormat& GetSourceFormat() const{ return m_sourceFormat; }
    inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
    inline void SetSourceFormat(const DatasetSourceFormat& value) { m_sourceFormatHasBeenSet = true; m_sourceFormat = value; }
    inline void SetSourceFormat(DatasetSourceFormat&& value) { m_sourceFormatHasBeenSet = true; m_sourceFormat = std::move(value); }
    inline DatasetSource& WithSourceFormat(const DatasetSourceFormat& value) { SetSourceFormat(value); return *this;}
    inline DatasetSource& WithSourceFormat(DatasetSourceFormat&& value) { SetSourceFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the dataset source associated with the dataset.</p>
     */
    inline const SourceDetail& GetSourceDetail() const{ return m_sourceDetail; }
    inline bool SourceDetailHasBeenSet() const { return m_sourceDetailHasBeenSet; }
    inline void SetSourceDetail(const SourceDetail& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = value; }
    inline void SetSourceDetail(SourceDetail&& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = std::move(value); }
    inline DatasetSource& WithSourceDetail(const SourceDetail& value) { SetSourceDetail(value); return *this;}
    inline DatasetSource& WithSourceDetail(SourceDetail&& value) { SetSourceDetail(std::move(value)); return *this;}
    ///@}
  private:

    DatasetSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    DatasetSourceFormat m_sourceFormat;
    bool m_sourceFormatHasBeenSet = false;

    SourceDetail m_sourceDetail;
    bool m_sourceDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
