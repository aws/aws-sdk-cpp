/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Heterogeneous.h>
#include <aws/migrationhubstrategy/model/Homogeneous.h>
#include <aws/migrationhubstrategy/model/NoDatabaseMigrationPreference.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Preferences for migrating a database to AWS. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DatabaseMigrationPreference">AWS
   * API Reference</a></p>
   */
  class DatabaseMigrationPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline const Heterogeneous& GetHeterogeneous() const{ return m_heterogeneous; }

    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline bool HeterogeneousHasBeenSet() const { return m_heterogeneousHasBeenSet; }

    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline void SetHeterogeneous(const Heterogeneous& value) { m_heterogeneousHasBeenSet = true; m_heterogeneous = value; }

    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline void SetHeterogeneous(Heterogeneous&& value) { m_heterogeneousHasBeenSet = true; m_heterogeneous = std::move(value); }

    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline DatabaseMigrationPreference& WithHeterogeneous(const Heterogeneous& value) { SetHeterogeneous(value); return *this;}

    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline DatabaseMigrationPreference& WithHeterogeneous(Heterogeneous&& value) { SetHeterogeneous(std::move(value)); return *this;}


    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline const Homogeneous& GetHomogeneous() const{ return m_homogeneous; }

    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline bool HomogeneousHasBeenSet() const { return m_homogeneousHasBeenSet; }

    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline void SetHomogeneous(const Homogeneous& value) { m_homogeneousHasBeenSet = true; m_homogeneous = value; }

    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline void SetHomogeneous(Homogeneous&& value) { m_homogeneousHasBeenSet = true; m_homogeneous = std::move(value); }

    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline DatabaseMigrationPreference& WithHomogeneous(const Homogeneous& value) { SetHomogeneous(value); return *this;}

    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline DatabaseMigrationPreference& WithHomogeneous(Homogeneous&& value) { SetHomogeneous(std::move(value)); return *this;}


    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline const NoDatabaseMigrationPreference& GetNoPreference() const{ return m_noPreference; }

    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline bool NoPreferenceHasBeenSet() const { return m_noPreferenceHasBeenSet; }

    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline void SetNoPreference(const NoDatabaseMigrationPreference& value) { m_noPreferenceHasBeenSet = true; m_noPreference = value; }

    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline void SetNoPreference(NoDatabaseMigrationPreference&& value) { m_noPreferenceHasBeenSet = true; m_noPreference = std::move(value); }

    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline DatabaseMigrationPreference& WithNoPreference(const NoDatabaseMigrationPreference& value) { SetNoPreference(value); return *this;}

    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline DatabaseMigrationPreference& WithNoPreference(NoDatabaseMigrationPreference&& value) { SetNoPreference(std::move(value)); return *this;}

  private:

    Heterogeneous m_heterogeneous;
    bool m_heterogeneousHasBeenSet = false;

    Homogeneous m_homogeneous;
    bool m_homogeneousHasBeenSet = false;

    NoDatabaseMigrationPreference m_noPreference;
    bool m_noPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
