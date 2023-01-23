/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>Describes the database details required to connect to an Amazon Redshift
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RedshiftDatabase">AWS
   * API Reference</a></p>
   */
  class RedshiftDatabase
  {
  public:
    AWS_MACHINELEARNING_API RedshiftDatabase();
    AWS_MACHINELEARNING_API RedshiftDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RedshiftDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline RedshiftDatabase& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline RedshiftDatabase& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    
    inline RedshiftDatabase& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    
    inline RedshiftDatabase& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    
    inline RedshiftDatabase& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    
    inline RedshiftDatabase& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
