/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/S3SnapshotAsset.h>
#include <aws/dataexchange/model/RedshiftDataShareAsset.h>
#include <aws/dataexchange/model/ApiGatewayApiAsset.h>
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
   * <p>Information about the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API AssetDetails
  {
  public:
    AssetDetails();
    AssetDetails(Aws::Utils::Json::JsonView jsonValue);
    AssetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline const S3SnapshotAsset& GetS3SnapshotAsset() const{ return m_s3SnapshotAsset; }

    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline bool S3SnapshotAssetHasBeenSet() const { return m_s3SnapshotAssetHasBeenSet; }

    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline void SetS3SnapshotAsset(const S3SnapshotAsset& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = value; }

    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline void SetS3SnapshotAsset(S3SnapshotAsset&& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = std::move(value); }

    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline AssetDetails& WithS3SnapshotAsset(const S3SnapshotAsset& value) { SetS3SnapshotAsset(value); return *this;}

    /**
     * <p>The S3 object that is the asset.</p>
     */
    inline AssetDetails& WithS3SnapshotAsset(S3SnapshotAsset&& value) { SetS3SnapshotAsset(std::move(value)); return *this;}


    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline const RedshiftDataShareAsset& GetRedshiftDataShareAsset() const{ return m_redshiftDataShareAsset; }

    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline bool RedshiftDataShareAssetHasBeenSet() const { return m_redshiftDataShareAssetHasBeenSet; }

    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline void SetRedshiftDataShareAsset(const RedshiftDataShareAsset& value) { m_redshiftDataShareAssetHasBeenSet = true; m_redshiftDataShareAsset = value; }

    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline void SetRedshiftDataShareAsset(RedshiftDataShareAsset&& value) { m_redshiftDataShareAssetHasBeenSet = true; m_redshiftDataShareAsset = std::move(value); }

    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline AssetDetails& WithRedshiftDataShareAsset(const RedshiftDataShareAsset& value) { SetRedshiftDataShareAsset(value); return *this;}

    /**
     * <p>The Amazon Redshift datashare that is the asset.</p>
     */
    inline AssetDetails& WithRedshiftDataShareAsset(RedshiftDataShareAsset&& value) { SetRedshiftDataShareAsset(std::move(value)); return *this;}


    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline const ApiGatewayApiAsset& GetApiGatewayApiAsset() const{ return m_apiGatewayApiAsset; }

    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline bool ApiGatewayApiAssetHasBeenSet() const { return m_apiGatewayApiAssetHasBeenSet; }

    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline void SetApiGatewayApiAsset(const ApiGatewayApiAsset& value) { m_apiGatewayApiAssetHasBeenSet = true; m_apiGatewayApiAsset = value; }

    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline void SetApiGatewayApiAsset(ApiGatewayApiAsset&& value) { m_apiGatewayApiAssetHasBeenSet = true; m_apiGatewayApiAsset = std::move(value); }

    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline AssetDetails& WithApiGatewayApiAsset(const ApiGatewayApiAsset& value) { SetApiGatewayApiAsset(value); return *this;}

    /**
     * <p>Information about the API Gateway API asset.</p>
     */
    inline AssetDetails& WithApiGatewayApiAsset(ApiGatewayApiAsset&& value) { SetApiGatewayApiAsset(std::move(value)); return *this;}

  private:

    S3SnapshotAsset m_s3SnapshotAsset;
    bool m_s3SnapshotAssetHasBeenSet;

    RedshiftDataShareAsset m_redshiftDataShareAsset;
    bool m_redshiftDataShareAssetHasBeenSet;

    ApiGatewayApiAsset m_apiGatewayApiAsset;
    bool m_apiGatewayApiAssetHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
