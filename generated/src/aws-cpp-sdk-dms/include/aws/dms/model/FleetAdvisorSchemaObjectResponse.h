/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a schema object in a Fleet Advisor collector
   * inventory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/FleetAdvisorSchemaObjectResponse">AWS
   * API Reference</a></p>
   */
  class FleetAdvisorSchemaObjectResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorSchemaObjectResponse();
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorSchemaObjectResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorSchemaObjectResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a schema object in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const Aws::String& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(Aws::String&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline void SetSchemaId(const char* value) { m_schemaIdHasBeenSet = true; m_schemaId.assign(value); }
    inline FleetAdvisorSchemaObjectResponse& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}
    inline FleetAdvisorSchemaObjectResponse& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}
    inline FleetAdvisorSchemaObjectResponse& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the schema object, as reported by the database engine. Examples
     * include the following:</p> <ul> <li> <p> <code>function</code> </p> </li> <li>
     * <p> <code>trigger</code> </p> </li> <li> <p> <code>SYSTEM_TABLE</code> </p>
     * </li> <li> <p> <code>QUEUE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetObjectType() const{ return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(const Aws::String& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline void SetObjectType(Aws::String&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }
    inline void SetObjectType(const char* value) { m_objectTypeHasBeenSet = true; m_objectType.assign(value); }
    inline FleetAdvisorSchemaObjectResponse& WithObjectType(const Aws::String& value) { SetObjectType(value); return *this;}
    inline FleetAdvisorSchemaObjectResponse& WithObjectType(Aws::String&& value) { SetObjectType(std::move(value)); return *this;}
    inline FleetAdvisorSchemaObjectResponse& WithObjectType(const char* value) { SetObjectType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects in a schema object in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetNumberOfObjects() const{ return m_numberOfObjects; }
    inline bool NumberOfObjectsHasBeenSet() const { return m_numberOfObjectsHasBeenSet; }
    inline void SetNumberOfObjects(long long value) { m_numberOfObjectsHasBeenSet = true; m_numberOfObjects = value; }
    inline FleetAdvisorSchemaObjectResponse& WithNumberOfObjects(long long value) { SetNumberOfObjects(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines of code in a schema object in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeLineCount() const{ return m_codeLineCount; }
    inline bool CodeLineCountHasBeenSet() const { return m_codeLineCountHasBeenSet; }
    inline void SetCodeLineCount(long long value) { m_codeLineCountHasBeenSet = true; m_codeLineCount = value; }
    inline FleetAdvisorSchemaObjectResponse& WithCodeLineCount(long long value) { SetCodeLineCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size level of the code in a schema object in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline FleetAdvisorSchemaObjectResponse& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_objectType;
    bool m_objectTypeHasBeenSet = false;

    long long m_numberOfObjects;
    bool m_numberOfObjectsHasBeenSet = false;

    long long m_codeLineCount;
    bool m_codeLineCountHasBeenSet = false;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
