/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/S3DataAccessAssetSourceEntry.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details of the operation to create an Amazon S3 data access from an S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateS3DataAccessFromS3BucketRequestDetails">AWS
   * API Reference</a></p>
   */
  class CreateS3DataAccessFromS3BucketRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails() = default;
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API CreateS3DataAccessFromS3BucketRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the S3 data access source asset.</p>
     */
    inline const S3DataAccessAssetSourceEntry& GetAssetSource() const { return m_assetSource; }
    inline bool AssetSourceHasBeenSet() const { return m_assetSourceHasBeenSet; }
    template<typename AssetSourceT = S3DataAccessAssetSourceEntry>
    void SetAssetSource(AssetSourceT&& value) { m_assetSourceHasBeenSet = true; m_assetSource = std::forward<AssetSourceT>(value); }
    template<typename AssetSourceT = S3DataAccessAssetSourceEntry>
    CreateS3DataAccessFromS3BucketRequestDetails& WithAssetSource(AssetSourceT&& value) { SetAssetSource(std::forward<AssetSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with the creation of this
     * Amazon S3 data access.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    CreateS3DataAccessFromS3BucketRequestDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    CreateS3DataAccessFromS3BucketRequestDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}
  private:

    S3DataAccessAssetSourceEntry m_assetSource;
    bool m_assetSourceHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
