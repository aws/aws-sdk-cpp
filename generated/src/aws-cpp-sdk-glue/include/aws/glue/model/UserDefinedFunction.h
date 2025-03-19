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
    AWS_GLUE_API UserDefinedFunction() = default;
    AWS_GLUE_API UserDefinedFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UserDefinedFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    UserDefinedFunction& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database that contains the function.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    UserDefinedFunction& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline const Aws::String& GetClassName() const { return m_className; }
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
    template<typename ClassNameT = Aws::String>
    void SetClassName(ClassNameT&& value) { m_classNameHasBeenSet = true; m_className = std::forward<ClassNameT>(value); }
    template<typename ClassNameT = Aws::String>
    UserDefinedFunction& WithClassName(ClassNameT&& value) { SetClassName(std::forward<ClassNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the function.</p>
     */
    inline const Aws::String& GetOwnerName() const { return m_ownerName; }
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }
    template<typename OwnerNameT = Aws::String>
    void SetOwnerName(OwnerNameT&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::forward<OwnerNameT>(value); }
    template<typename OwnerNameT = Aws::String>
    UserDefinedFunction& WithOwnerName(OwnerNameT&& value) { SetOwnerName(std::forward<OwnerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner type.</p>
     */
    inline PrincipalType GetOwnerType() const { return m_ownerType; }
    inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
    inline void SetOwnerType(PrincipalType value) { m_ownerTypeHasBeenSet = true; m_ownerType = value; }
    inline UserDefinedFunction& WithOwnerType(PrincipalType value) { SetOwnerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the function was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    UserDefinedFunction& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource URIs for the function.</p>
     */
    inline const Aws::Vector<ResourceUri>& GetResourceUris() const { return m_resourceUris; }
    inline bool ResourceUrisHasBeenSet() const { return m_resourceUrisHasBeenSet; }
    template<typename ResourceUrisT = Aws::Vector<ResourceUri>>
    void SetResourceUris(ResourceUrisT&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris = std::forward<ResourceUrisT>(value); }
    template<typename ResourceUrisT = Aws::Vector<ResourceUri>>
    UserDefinedFunction& WithResourceUris(ResourceUrisT&& value) { SetResourceUris(std::forward<ResourceUrisT>(value)); return *this;}
    template<typename ResourceUrisT = ResourceUri>
    UserDefinedFunction& AddResourceUris(ResourceUrisT&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.emplace_back(std::forward<ResourceUrisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the function resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UserDefinedFunction& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet = false;

    PrincipalType m_ownerType{PrincipalType::NOT_SET};
    bool m_ownerTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<ResourceUri> m_resourceUris;
    bool m_resourceUrisHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
