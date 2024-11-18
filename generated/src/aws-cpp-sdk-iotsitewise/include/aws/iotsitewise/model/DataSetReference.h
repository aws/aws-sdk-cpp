/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Source.h>
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
   * <p>Contains information about the dataset use and it's source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DataSetReference">AWS
   * API Reference</a></p>
   */
  class DataSetReference
  {
  public:
    AWS_IOTSITEWISE_API DataSetReference();
    AWS_IOTSITEWISE_API DataSetReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DataSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">ARN</a>
     * of the dataset. The format is
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dataset/${DatasetId}</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline DataSetReference& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DataSetReference& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DataSetReference& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the dataset.</p>
     */
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline DataSetReference& WithSource(const Source& value) { SetSource(value); return *this;}
    inline DataSetReference& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
