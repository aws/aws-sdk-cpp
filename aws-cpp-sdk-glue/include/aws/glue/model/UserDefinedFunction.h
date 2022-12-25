/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/PrincipalType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ResourceUri.h>
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
   * <p>Represents the equivalent of a Hive user-defined function (<code>UDF</code>)
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UserDefinedFunction">AWS
   * API Reference</a></p>
   */
  class UserDefinedFunction
  {
  public:
    AWS_GLUE_API UserDefinedFunction();
    AWS_GLUE_API UserDefinedFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UserDefinedFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline UserDefinedFunction& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UserDefinedFunction& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UserDefinedFunction& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline UserDefinedFunction& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline UserDefinedFunction& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline UserDefinedFunction& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline const Aws::String& GetClassName() const{ return m_className; }

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline void SetClassName(const Aws::String& value) { m_classNameHasBeenSet = true; m_className = value; }

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline void SetClassName(Aws::String&& value) { m_classNameHasBeenSet = true; m_className = std::move(value); }

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline void SetClassName(const char* value) { m_classNameHasBeenSet = true; m_className.assign(value); }

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline UserDefinedFunction& WithClassName(const Aws::String& value) { SetClassName(value); return *this;}

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline UserDefinedFunction& WithClassName(Aws::String&& value) { SetClassName(std::move(value)); return *this;}

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline UserDefinedFunction& WithClassName(const char* value) { SetClassName(value); return *this;}


    /**
     * <p>The owner of the function.</p>
     */
    inline const Aws::String& GetOwnerName() const{ return m_ownerName; }

    /**
     * <p>The owner of the function.</p>
     */
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }

    /**
     * <p>The owner of the function.</p>
     */
    inline void SetOwnerName(const Aws::String& value) { m_ownerNameHasBeenSet = true; m_ownerName = value; }

    /**
     * <p>The owner of the function.</p>
     */
    inline void SetOwnerName(Aws::String&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::move(value); }

    /**
     * <p>The owner of the function.</p>
     */
    inline void SetOwnerName(const char* value) { m_ownerNameHasBeenSet = true; m_ownerName.assign(value); }

    /**
     * <p>The owner of the function.</p>
     */
    inline UserDefinedFunction& WithOwnerName(const Aws::String& value) { SetOwnerName(value); return *this;}

    /**
     * <p>The owner of the function.</p>
     */
    inline UserDefinedFunction& WithOwnerName(Aws::String&& value) { SetOwnerName(std::move(value)); return *this;}

    /**
     * <p>The owner of the function.</p>
     */
    inline UserDefinedFunction& WithOwnerName(const char* value) { SetOwnerName(value); return *this;}


    /**
     * <p>The owner type.</p>
     */
    inline const PrincipalType& GetOwnerType() const{ return m_ownerType; }

    /**
     * <p>The owner type.</p>
     */
    inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }

    /**
     * <p>The owner type.</p>
     */
    inline void SetOwnerType(const PrincipalType& value) { m_ownerTypeHasBeenSet = true; m_ownerType = value; }

    /**
     * <p>The owner type.</p>
     */
    inline void SetOwnerType(PrincipalType&& value) { m_ownerTypeHasBeenSet = true; m_ownerType = std::move(value); }

    /**
     * <p>The owner type.</p>
     */
    inline UserDefinedFunction& WithOwnerType(const PrincipalType& value) { SetOwnerType(value); return *this;}

    /**
     * <p>The owner type.</p>
     */
    inline UserDefinedFunction& WithOwnerType(PrincipalType&& value) { SetOwnerType(std::move(value)); return *this;}


    /**
     * <p>The time at which the function was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the function was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the function was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the function was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the function was created.</p>
     */
    inline UserDefinedFunction& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the function was created.</p>
     */
    inline UserDefinedFunction& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The resource URIs for the function.</p>
     */
    inline const Aws::Vector<ResourceUri>& GetResourceUris() const{ return m_resourceUris; }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline bool ResourceUrisHasBeenSet() const { return m_resourceUrisHasBeenSet; }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline void SetResourceUris(const Aws::Vector<ResourceUri>& value) { m_resourceUrisHasBeenSet = true; m_resourceUris = value; }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline void SetResourceUris(Aws::Vector<ResourceUri>&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris = std::move(value); }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunction& WithResourceUris(const Aws::Vector<ResourceUri>& value) { SetResourceUris(value); return *this;}

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunction& WithResourceUris(Aws::Vector<ResourceUri>&& value) { SetResourceUris(std::move(value)); return *this;}

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunction& AddResourceUris(const ResourceUri& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(value); return *this; }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunction& AddResourceUris(ResourceUri&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline UserDefinedFunction& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline UserDefinedFunction& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline UserDefinedFunction& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet = false;

    PrincipalType m_ownerType;
    bool m_ownerTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<ResourceUri> m_resourceUris;
    bool m_resourceUrisHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
