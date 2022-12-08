/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/S3SnapshotAsset.h>
#include <aws/dataexchange/model/RedshiftDataShareAsset.h>
#include <aws/dataexchange/model/ApiGatewayApiAsset.h>
#include <aws/dataexchange/model/S3DataAccessAsset.h>
#include <aws/dataexchange/model/LakeFormationDataPermissionAsset.h>
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
   * <p>Details about the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetDetails">AWS
   * API Reference</a></p>
   */
  class AssetDetails
  {
  public:
    AWS_DATAEXCHANGE_API AssetDetails();
    AWS_DATAEXCHANGE_API AssetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AssetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 object that is the asset.</p>
     */
    inline const S3SnapshotAsset& GetS3SnapshotAsset() const{ return m_s3SnapshotAsset; }

    /**
     * <p>The Amazon S3 object that is the asset.</p>
     */
    inline bool S3SnapshotAssetHasBeenSet() const { return m_s3SnapshotAssetHasBeenSet; }

    /**
     * <p>The Amazon S3 object that is the asset.</p>
     */
    inline void SetS3SnapshotAsset(const S3SnapshotAsset& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = value; }

    /**
     * <p>The Amazon S3 object that is the asset.</p>
     */
    inline void SetS3SnapshotAsset(S3SnapshotAsset&& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = std::move(value); }

    /**
     * <p>The Amazon S3 object that is the asset.</p>
     */
    inline AssetDetails& WithS3SnapshotAsset(const S3SnapshotAsset& value) { SetS3SnapshotAsset(value); return *this;}

    /**
     * <p>The Amazon S3 object that is the asset.</p>
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


    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline const S3DataAccessAsset& GetS3DataAccessAsset() const{ return m_s3DataAccessAsset; }

    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline bool S3DataAccessAssetHasBeenSet() const { return m_s3DataAccessAssetHasBeenSet; }

    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline void SetS3DataAccessAsset(const S3DataAccessAsset& value) { m_s3DataAccessAssetHasBeenSet = true; m_s3DataAccessAsset = value; }

    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline void SetS3DataAccessAsset(S3DataAccessAsset&& value) { m_s3DataAccessAssetHasBeenSet = true; m_s3DataAccessAsset = std::move(value); }

    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline AssetDetails& WithS3DataAccessAsset(const S3DataAccessAsset& value) { SetS3DataAccessAsset(value); return *this;}

    /**
     * <p>The Amazon S3 data access that is the asset.</p>
     */
    inline AssetDetails& WithS3DataAccessAsset(S3DataAccessAsset&& value) { SetS3DataAccessAsset(std::move(value)); return *this;}


    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline const LakeFormationDataPermissionAsset& GetLakeFormationDataPermissionAsset() const{ return m_lakeFormationDataPermissionAsset; }

    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline bool LakeFormationDataPermissionAssetHasBeenSet() const { return m_lakeFormationDataPermissionAssetHasBeenSet; }

    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline void SetLakeFormationDataPermissionAsset(const LakeFormationDataPermissionAsset& value) { m_lakeFormationDataPermissionAssetHasBeenSet = true; m_lakeFormationDataPermissionAsset = value; }

    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline void SetLakeFormationDataPermissionAsset(LakeFormationDataPermissionAsset&& value) { m_lakeFormationDataPermissionAssetHasBeenSet = true; m_lakeFormationDataPermissionAsset = std::move(value); }

    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline AssetDetails& WithLakeFormationDataPermissionAsset(const LakeFormationDataPermissionAsset& value) { SetLakeFormationDataPermissionAsset(value); return *this;}

    /**
     * <p>The AWS Lake Formation data permission that is the asset.</p>
     */
    inline AssetDetails& WithLakeFormationDataPermissionAsset(LakeFormationDataPermissionAsset&& value) { SetLakeFormationDataPermissionAsset(std::move(value)); return *this;}

  private:

    S3SnapshotAsset m_s3SnapshotAsset;
    bool m_s3SnapshotAssetHasBeenSet = false;

    RedshiftDataShareAsset m_redshiftDataShareAsset;
    bool m_redshiftDataShareAssetHasBeenSet = false;

    ApiGatewayApiAsset m_apiGatewayApiAsset;
    bool m_apiGatewayApiAssetHasBeenSet = false;

    S3DataAccessAsset m_s3DataAccessAsset;
    bool m_s3DataAccessAssetHasBeenSet = false;

    LakeFormationDataPermissionAsset m_lakeFormationDataPermissionAsset;
    bool m_lakeFormationDataPermissionAssetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
