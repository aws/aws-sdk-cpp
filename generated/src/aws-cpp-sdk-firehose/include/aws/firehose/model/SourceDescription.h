/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DirectPutSourceDescription.h>
#include <aws/firehose/model/KinesisStreamSourceDescription.h>
#include <aws/firehose/model/MSKSourceDescription.h>
#include <aws/firehose/model/DatabaseSourceDescription.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Details about a Kinesis data stream used as the source for a Firehose
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SourceDescription">AWS
   * API Reference</a></p>
   */
  class SourceDescription
  {
  public:
    AWS_FIREHOSE_API SourceDescription() = default;
    AWS_FIREHOSE_API SourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about Direct PUT used as the source for a Firehose stream. </p>
     */
    inline const DirectPutSourceDescription& GetDirectPutSourceDescription() const { return m_directPutSourceDescription; }
    inline bool DirectPutSourceDescriptionHasBeenSet() const { return m_directPutSourceDescriptionHasBeenSet; }
    template<typename DirectPutSourceDescriptionT = DirectPutSourceDescription>
    void SetDirectPutSourceDescription(DirectPutSourceDescriptionT&& value) { m_directPutSourceDescriptionHasBeenSet = true; m_directPutSourceDescription = std::forward<DirectPutSourceDescriptionT>(value); }
    template<typename DirectPutSourceDescriptionT = DirectPutSourceDescription>
    SourceDescription& WithDirectPutSourceDescription(DirectPutSourceDescriptionT&& value) { SetDirectPutSourceDescription(std::forward<DirectPutSourceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline const KinesisStreamSourceDescription& GetKinesisStreamSourceDescription() const { return m_kinesisStreamSourceDescription; }
    inline bool KinesisStreamSourceDescriptionHasBeenSet() const { return m_kinesisStreamSourceDescriptionHasBeenSet; }
    template<typename KinesisStreamSourceDescriptionT = KinesisStreamSourceDescription>
    void SetKinesisStreamSourceDescription(KinesisStreamSourceDescriptionT&& value) { m_kinesisStreamSourceDescriptionHasBeenSet = true; m_kinesisStreamSourceDescription = std::forward<KinesisStreamSourceDescriptionT>(value); }
    template<typename KinesisStreamSourceDescriptionT = KinesisStreamSourceDescription>
    SourceDescription& WithKinesisStreamSourceDescription(KinesisStreamSourceDescriptionT&& value) { SetKinesisStreamSourceDescription(std::forward<KinesisStreamSourceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline const MSKSourceDescription& GetMSKSourceDescription() const { return m_mSKSourceDescription; }
    inline bool MSKSourceDescriptionHasBeenSet() const { return m_mSKSourceDescriptionHasBeenSet; }
    template<typename MSKSourceDescriptionT = MSKSourceDescription>
    void SetMSKSourceDescription(MSKSourceDescriptionT&& value) { m_mSKSourceDescriptionHasBeenSet = true; m_mSKSourceDescription = std::forward<MSKSourceDescriptionT>(value); }
    template<typename MSKSourceDescriptionT = MSKSourceDescription>
    SourceDescription& WithMSKSourceDescription(MSKSourceDescriptionT&& value) { SetMSKSourceDescription(std::forward<MSKSourceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a database used as the source for a Firehose stream.</p>
     * <p>Amazon Data Firehose is in preview release and is subject to change.</p>
     */
    inline const DatabaseSourceDescription& GetDatabaseSourceDescription() const { return m_databaseSourceDescription; }
    inline bool DatabaseSourceDescriptionHasBeenSet() const { return m_databaseSourceDescriptionHasBeenSet; }
    template<typename DatabaseSourceDescriptionT = DatabaseSourceDescription>
    void SetDatabaseSourceDescription(DatabaseSourceDescriptionT&& value) { m_databaseSourceDescriptionHasBeenSet = true; m_databaseSourceDescription = std::forward<DatabaseSourceDescriptionT>(value); }
    template<typename DatabaseSourceDescriptionT = DatabaseSourceDescription>
    SourceDescription& WithDatabaseSourceDescription(DatabaseSourceDescriptionT&& value) { SetDatabaseSourceDescription(std::forward<DatabaseSourceDescriptionT>(value)); return *this;}
    ///@}
  private:

    DirectPutSourceDescription m_directPutSourceDescription;
    bool m_directPutSourceDescriptionHasBeenSet = false;

    KinesisStreamSourceDescription m_kinesisStreamSourceDescription;
    bool m_kinesisStreamSourceDescriptionHasBeenSet = false;

    MSKSourceDescription m_mSKSourceDescription;
    bool m_mSKSourceDescriptionHasBeenSet = false;

    DatabaseSourceDescription m_databaseSourceDescription;
    bool m_databaseSourceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
