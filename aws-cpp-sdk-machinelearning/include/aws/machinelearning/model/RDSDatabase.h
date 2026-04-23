/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The database details of an Amazon RDS database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSDatabase">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API RDSDatabase
  {
  public:
    RDSDatabase();
    RDSDatabase(Aws::Utils::Json::JsonView jsonValue);
    RDSDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline const Aws::String& GetInstanceIdentifier() const{ return m_instanceIdentifier; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline bool InstanceIdentifierHasBeenSet() const { return m_instanceIdentifierHasBeenSet; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline void SetInstanceIdentifier(const Aws::String& value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier = value; }

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline void SetInstanceIdentifier(Aws::String&& value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier = std::move(value); }

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
    inline RDSDatabase& WithInstanceIdentifier(Aws::String&& value) { SetInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline RDSDatabase& WithInstanceIdentifier(const char* value) { SetInstanceIdentifier(value); return *this;}


    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline RDSDatabase& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline RDSDatabase& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    
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
