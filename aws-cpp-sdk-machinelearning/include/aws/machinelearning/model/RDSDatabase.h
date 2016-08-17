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
   * <p>The database details of an Amazon RDS database.</p>
   */
  class AWS_MACHINELEARNING_API RDSDatabase
  {
  public:
    RDSDatabase();
    RDSDatabase(const Aws::Utils::Json::JsonValue& jsonValue);
    RDSDatabase& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline const Aws::String& GetInstanceIdentifier() const{ return m_instanceIdentifier; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline void SetInstanceIdentifier(const Aws::String& value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier = value; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline void SetInstanceIdentifier(Aws::String&& value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier = value; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline void SetInstanceIdentifier(const char* value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier.assign(value); }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline RDSDatabase& WithInstanceIdentifier(const Aws::String& value) { SetInstanceIdentifier(value); return *this;}

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline RDSDatabase& WithInstanceIdentifier(Aws::String&& value) { SetInstanceIdentifier(value); return *this;}

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline RDSDatabase& WithInstanceIdentifier(const char* value) { SetInstanceIdentifier(value); return *this;}

    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline RDSDatabase& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline RDSDatabase& WithDatabaseName(Aws::String&& value) { SetDatabaseName(value); return *this;}

    
    inline RDSDatabase& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:
    Aws::String m_instanceIdentifier;
    bool m_instanceIdentifierHasBeenSet;
    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
