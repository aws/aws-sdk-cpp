/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>Describes the database details required to connect to an Amazon Redshift
   * database.</p>
   */
  class AWS_MACHINELEARNING_API RedshiftDatabase
  {
  public:
    RedshiftDatabase();
    RedshiftDatabase(const Aws::Utils::Json::JsonValue& jsonValue);
    RedshiftDatabase& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline RedshiftDatabase& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline RedshiftDatabase& WithDatabaseName(Aws::String&& value) { SetDatabaseName(value); return *this;}

    
    inline RedshiftDatabase& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

    
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    
    inline RedshiftDatabase& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    
    inline RedshiftDatabase& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    
    inline RedshiftDatabase& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:
    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
