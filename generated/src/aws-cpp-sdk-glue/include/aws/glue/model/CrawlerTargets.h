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
    AWS_GLUE_API CrawlerTargets() = default;
    AWS_GLUE_API CrawlerTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies Amazon Simple Storage Service (Amazon S3) targets.</p>
     */
    inline const Aws::Vector<S3Target>& GetS3Targets() const { return m_s3Targets; }
    inline bool S3TargetsHasBeenSet() const { return m_s3TargetsHasBeenSet; }
    template<typename S3TargetsT = Aws::Vector<S3Target>>
    void SetS3Targets(S3TargetsT&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets = std::forward<S3TargetsT>(value); }
    template<typename S3TargetsT = Aws::Vector<S3Target>>
    CrawlerTargets& WithS3Targets(S3TargetsT&& value) { SetS3Targets(std::forward<S3TargetsT>(value)); return *this;}
    template<typename S3TargetsT = S3Target>
    CrawlerTargets& AddS3Targets(S3TargetsT&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets.emplace_back(std::forward<S3TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline const Aws::Vector<JdbcTarget>& GetJdbcTargets() const { return m_jdbcTargets; }
    inline bool JdbcTargetsHasBeenSet() const { return m_jdbcTargetsHasBeenSet; }
    template<typename JdbcTargetsT = Aws::Vector<JdbcTarget>>
    void SetJdbcTargets(JdbcTargetsT&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets = std::forward<JdbcTargetsT>(value); }
    template<typename JdbcTargetsT = Aws::Vector<JdbcTarget>>
    CrawlerTargets& WithJdbcTargets(JdbcTargetsT&& value) { SetJdbcTargets(std::forward<JdbcTargetsT>(value)); return *this;}
    template<typename JdbcTargetsT = JdbcTarget>
    CrawlerTargets& AddJdbcTargets(JdbcTargetsT&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets.emplace_back(std::forward<JdbcTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Amazon DocumentDB or MongoDB targets.</p>
     */
    inline const Aws::Vector<MongoDBTarget>& GetMongoDBTargets() const { return m_mongoDBTargets; }
    inline bool MongoDBTargetsHasBeenSet() const { return m_mongoDBTargetsHasBeenSet; }
    template<typename MongoDBTargetsT = Aws::Vector<MongoDBTarget>>
    void SetMongoDBTargets(MongoDBTargetsT&& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets = std::forward<MongoDBTargetsT>(value); }
    template<typename MongoDBTargetsT = Aws::Vector<MongoDBTarget>>
    CrawlerTargets& WithMongoDBTargets(MongoDBTargetsT&& value) { SetMongoDBTargets(std::forward<MongoDBTargetsT>(value)); return *this;}
    template<typename MongoDBTargetsT = MongoDBTarget>
    CrawlerTargets& AddMongoDBTargets(MongoDBTargetsT&& value) { m_mongoDBTargetsHasBeenSet = true; m_mongoDBTargets.emplace_back(std::forward<MongoDBTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Amazon DynamoDB targets.</p>
     */
    inline const Aws::Vector<DynamoDBTarget>& GetDynamoDBTargets() const { return m_dynamoDBTargets; }
    inline bool DynamoDBTargetsHasBeenSet() const { return m_dynamoDBTargetsHasBeenSet; }
    template<typename DynamoDBTargetsT = Aws::Vector<DynamoDBTarget>>
    void SetDynamoDBTargets(DynamoDBTargetsT&& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets = std::forward<DynamoDBTargetsT>(value); }
    template<typename DynamoDBTargetsT = Aws::Vector<DynamoDBTarget>>
    CrawlerTargets& WithDynamoDBTargets(DynamoDBTargetsT&& value) { SetDynamoDBTargets(std::forward<DynamoDBTargetsT>(value)); return *this;}
    template<typename DynamoDBTargetsT = DynamoDBTarget>
    CrawlerTargets& AddDynamoDBTargets(DynamoDBTargetsT&& value) { m_dynamoDBTargetsHasBeenSet = true; m_dynamoDBTargets.emplace_back(std::forward<DynamoDBTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Glue Data Catalog targets.</p>
     */
    inline const Aws::Vector<CatalogTarget>& GetCatalogTargets() const { return m_catalogTargets; }
    inline bool CatalogTargetsHasBeenSet() const { return m_catalogTargetsHasBeenSet; }
    template<typename CatalogTargetsT = Aws::Vector<CatalogTarget>>
    void SetCatalogTargets(CatalogTargetsT&& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets = std::forward<CatalogTargetsT>(value); }
    template<typename CatalogTargetsT = Aws::Vector<CatalogTarget>>
    CrawlerTargets& WithCatalogTargets(CatalogTargetsT&& value) { SetCatalogTargets(std::forward<CatalogTargetsT>(value)); return *this;}
    template<typename CatalogTargetsT = CatalogTarget>
    CrawlerTargets& AddCatalogTargets(CatalogTargetsT&& value) { m_catalogTargetsHasBeenSet = true; m_catalogTargets.emplace_back(std::forward<CatalogTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Delta data store targets.</p>
     */
    inline const Aws::Vector<DeltaTarget>& GetDeltaTargets() const { return m_deltaTargets; }
    inline bool DeltaTargetsHasBeenSet() const { return m_deltaTargetsHasBeenSet; }
    template<typename DeltaTargetsT = Aws::Vector<DeltaTarget>>
    void SetDeltaTargets(DeltaTargetsT&& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets = std::forward<DeltaTargetsT>(value); }
    template<typename DeltaTargetsT = Aws::Vector<DeltaTarget>>
    CrawlerTargets& WithDeltaTargets(DeltaTargetsT&& value) { SetDeltaTargets(std::forward<DeltaTargetsT>(value)); return *this;}
    template<typename DeltaTargetsT = DeltaTarget>
    CrawlerTargets& AddDeltaTargets(DeltaTargetsT&& value) { m_deltaTargetsHasBeenSet = true; m_deltaTargets.emplace_back(std::forward<DeltaTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Apache Iceberg data store targets.</p>
     */
    inline const Aws::Vector<IcebergTarget>& GetIcebergTargets() const { return m_icebergTargets; }
    inline bool IcebergTargetsHasBeenSet() const { return m_icebergTargetsHasBeenSet; }
    template<typename IcebergTargetsT = Aws::Vector<IcebergTarget>>
    void SetIcebergTargets(IcebergTargetsT&& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets = std::forward<IcebergTargetsT>(value); }
    template<typename IcebergTargetsT = Aws::Vector<IcebergTarget>>
    CrawlerTargets& WithIcebergTargets(IcebergTargetsT&& value) { SetIcebergTargets(std::forward<IcebergTargetsT>(value)); return *this;}
    template<typename IcebergTargetsT = IcebergTarget>
    CrawlerTargets& AddIcebergTargets(IcebergTargetsT&& value) { m_icebergTargetsHasBeenSet = true; m_icebergTargets.emplace_back(std::forward<IcebergTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Apache Hudi data store targets.</p>
     */
    inline const Aws::Vector<HudiTarget>& GetHudiTargets() const { return m_hudiTargets; }
    inline bool HudiTargetsHasBeenSet() const { return m_hudiTargetsHasBeenSet; }
    template<typename HudiTargetsT = Aws::Vector<HudiTarget>>
    void SetHudiTargets(HudiTargetsT&& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets = std::forward<HudiTargetsT>(value); }
    template<typename HudiTargetsT = Aws::Vector<HudiTarget>>
    CrawlerTargets& WithHudiTargets(HudiTargetsT&& value) { SetHudiTargets(std::forward<HudiTargetsT>(value)); return *this;}
    template<typename HudiTargetsT = HudiTarget>
    CrawlerTargets& AddHudiTargets(HudiTargetsT&& value) { m_hudiTargetsHasBeenSet = true; m_hudiTargets.emplace_back(std::forward<HudiTargetsT>(value)); return *this; }
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
