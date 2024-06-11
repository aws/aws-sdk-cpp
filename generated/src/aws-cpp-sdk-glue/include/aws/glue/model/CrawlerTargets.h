/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/S3Target.h>
#include <aws/glue/model/JdbcTarget.h>
#include <aws/glue/model/MongoDBTarget.h>
#include <aws/glue/model/DynamoDBTarget.h>
#include <aws/glue/model/CatalogTarget.h>
#include <aws/glue/model/DeltaTarget.h>
#include <aws/glue/model/IcebergTarget.h>
#include <aws/glue/model/HudiTarget.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies data stores to crawl.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlerTargets">AWS
   * API Reference</a></p>
   */
  class CrawlerTargets
  {
  public:
    AWS_GLUE_API CrawlerTargets();
    AWS_GLUE_API CrawlerTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies Amazon Simple Storage Service (Amazon S3) targets.</p>
     */
    inline const Aws::Vector<S3Target>& GetS3Targets() const{ return m_s3Targets; }
    inline bool S3TargetsHasBeenSet() const { return m_s3TargetsHasBeenSet; }
    inline void SetS3Targets(const Aws::Vector<S3Target>& value) { m_s3TargetsHasBeenSet = true; m_s3Targets = value; }
    inline void SetS3Targets(Aws::Vector<S3Target>&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets = std::move(value); }
    inline CrawlerTargets& WithS3Targets(const Aws::Vector<S3Target>& value) { SetS3Targets(value); return *this;}
    inline CrawlerTargets& WithS3Targets(Aws::Vector<S3Target>&& value) { SetS3Targets(std::move(value)); return *this;}
    inline CrawlerTargets& AddS3Targets(const S3Target& value) { m_s3TargetsHasBeenSet = true; m_s3Targets.push_back(value); return *this; }
    inline CrawlerTargets& AddS3Targets(S3Target&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline const Aws::Vector<JdbcTarget>& GetJdbcTargets() const{ return m_jdbcTargets; }
    inline bool JdbcTargetsHasBeenSet() const { return m_jdbcTargetsHasBeenSet; }
    inline void SetJdbcTargets(const Aws::Vector<JdbcTarget>& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets = value; }
    inline void SetJdbcTargets(Aws::Vector<JdbcTarget>&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets = std::move(value); }
    inline CrawlerTargets& WithJdbcTargets(const Aws::Vector<JdbcTarget>& value) { SetJdbcTargets(value); return *this;}
    inline CrawlerTargets& WithJdbcTargets(Aws::Vector<JdbcTarget>&& value) { SetJdbcTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddJdbcTargets(const JdbcTarget& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddJdbcTargets(JdbcTarget&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Amazon DocumentDB or MongoDB targets.</p>
     */
    inline const Aws::Vector<MongoDBTarget>& GetMongoDBTargets() const{ return m_mongoDBTargets; }
    inline bool MongoDBTargetsHasBeenSet() const { return m_mongoDBTargetsHasBeenSet; }
    inline void SetMongoDBTargets(const Aws::Vector<MongoDBTarget>& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets = value; }
    inline void SetMongoDBTargets(Aws::Vector<MongoDBTarget>&& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets = std::move(value); }
    inline CrawlerTargets& WithMongoDBTargets(const Aws::Vector<MongoDBTarget>& value) { SetMongoDBTargets(value); return *this;}
    inline CrawlerTargets& WithMongoDBTargets(Aws::Vector<MongoDBTarget>&& value) { SetMongoDBTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddMongoDBTargets(const MongoDBTarget& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddMongoDBTargets(MongoDBTarget&& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Amazon DynamoDB targets.</p>
     */
    inline const Aws::Vector<DynamoDBTarget>& GetDynamoDBTargets() const{ return m_dynamoDBTargets; }
    inline bool DynamoDBTargetsHasBeenSet() const { return m_dynamoDBTargetsHasBeenSet; }
    inline void SetDynamoDBTargets(const Aws::Vector<DynamoDBTarget>& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets = value; }
    inline void SetDynamoDBTargets(Aws::Vector<DynamoDBTarget>&& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets = std::move(value); }
    inline CrawlerTargets& WithDynamoDBTargets(const Aws::Vector<DynamoDBTarget>& value) { SetDynamoDBTargets(value); return *this;}
    inline CrawlerTargets& WithDynamoDBTargets(Aws::Vector<DynamoDBTarget>&& value) { SetDynamoDBTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddDynamoDBTargets(const DynamoDBTarget& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddDynamoDBTargets(DynamoDBTarget&& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Glue Data Catalog targets.</p>
     */
    inline const Aws::Vector<CatalogTarget>& GetCatalogTargets() const{ return m_catalogTargets; }
    inline bool CatalogTargetsHasBeenSet() const { return m_catalogTargetsHasBeenSet; }
    inline void SetCatalogTargets(const Aws::Vector<CatalogTarget>& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets = value; }
    inline void SetCatalogTargets(Aws::Vector<CatalogTarget>&& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets = std::move(value); }
    inline CrawlerTargets& WithCatalogTargets(const Aws::Vector<CatalogTarget>& value) { SetCatalogTargets(value); return *this;}
    inline CrawlerTargets& WithCatalogTargets(Aws::Vector<CatalogTarget>&& value) { SetCatalogTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddCatalogTargets(const CatalogTarget& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddCatalogTargets(CatalogTarget&& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Delta data store targets.</p>
     */
    inline const Aws::Vector<DeltaTarget>& GetDeltaTargets() const{ return m_deltaTargets; }
    inline bool DeltaTargetsHasBeenSet() const { return m_deltaTargetsHasBeenSet; }
    inline void SetDeltaTargets(const Aws::Vector<DeltaTarget>& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets = value; }
    inline void SetDeltaTargets(Aws::Vector<DeltaTarget>&& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets = std::move(value); }
    inline CrawlerTargets& WithDeltaTargets(const Aws::Vector<DeltaTarget>& value) { SetDeltaTargets(value); return *this;}
    inline CrawlerTargets& WithDeltaTargets(Aws::Vector<DeltaTarget>&& value) { SetDeltaTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddDeltaTargets(const DeltaTarget& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddDeltaTargets(DeltaTarget&& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Apache Iceberg data store targets.</p>
     */
    inline const Aws::Vector<IcebergTarget>& GetIcebergTargets() const{ return m_icebergTargets; }
    inline bool IcebergTargetsHasBeenSet() const { return m_icebergTargetsHasBeenSet; }
    inline void SetIcebergTargets(const Aws::Vector<IcebergTarget>& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets = value; }
    inline void SetIcebergTargets(Aws::Vector<IcebergTarget>&& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets = std::move(value); }
    inline CrawlerTargets& WithIcebergTargets(const Aws::Vector<IcebergTarget>& value) { SetIcebergTargets(value); return *this;}
    inline CrawlerTargets& WithIcebergTargets(Aws::Vector<IcebergTarget>&& value) { SetIcebergTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddIcebergTargets(const IcebergTarget& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddIcebergTargets(IcebergTarget&& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Apache Hudi data store targets.</p>
     */
    inline const Aws::Vector<HudiTarget>& GetHudiTargets() const{ return m_hudiTargets; }
    inline bool HudiTargetsHasBeenSet() const { return m_hudiTargetsHasBeenSet; }
    inline void SetHudiTargets(const Aws::Vector<HudiTarget>& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets = value; }
    inline void SetHudiTargets(Aws::Vector<HudiTarget>&& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets = std::move(value); }
    inline CrawlerTargets& WithHudiTargets(const Aws::Vector<HudiTarget>& value) { SetHudiTargets(value); return *this;}
    inline CrawlerTargets& WithHudiTargets(Aws::Vector<HudiTarget>&& value) { SetHudiTargets(std::move(value)); return *this;}
    inline CrawlerTargets& AddHudiTargets(const HudiTarget& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets.push_back(value); return *this; }
    inline CrawlerTargets& AddHudiTargets(HudiTarget&& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<S3Target> m_s3Targets;
    bool m_s3TargetsHasBeenSet = false;

    Aws::Vector<JdbcTarget> m_jdbcTargets;
    bool m_jdbcTargetsHasBeenSet = false;

    Aws::Vector<MongoDBTarget> m_mongoDBTargets;
    bool m_mongoDBTargetsHasBeenSet = false;

    Aws::Vector<DynamoDBTarget> m_dynamoDBTargets;
    bool m_dynamoDBTargetsHasBeenSet = false;

    Aws::Vector<CatalogTarget> m_catalogTargets;
    bool m_catalogTargetsHasBeenSet = false;

    Aws::Vector<DeltaTarget> m_deltaTargets;
    bool m_deltaTargetsHasBeenSet = false;

    Aws::Vector<IcebergTarget> m_icebergTargets;
    bool m_icebergTargetsHasBeenSet = false;

    Aws::Vector<HudiTarget> m_hudiTargets;
    bool m_hudiTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
