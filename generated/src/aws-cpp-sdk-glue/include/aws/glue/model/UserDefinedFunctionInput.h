/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/PrincipalType.h>
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
   * <p>A structure used to create or update a user-defined function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UserDefinedFunctionInput">AWS
   * API Reference</a></p>
   */
  class UserDefinedFunctionInput
  {
  public:
    AWS_GLUE_API UserDefinedFunctionInput() = default;
    AWS_GLUE_API UserDefinedFunctionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UserDefinedFunctionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    UserDefinedFunctionInput& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
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
    UserDefinedFunctionInput& WithClassName(ClassNameT&& value) { SetClassName(std::forward<ClassNameT>(value)); return *this;}
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
    UserDefinedFunctionInput& WithOwnerName(OwnerNameT&& value) { SetOwnerName(std::forward<OwnerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner type.</p>
     */
    inline PrincipalType GetOwnerType() const { return m_ownerType; }
    inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
    inline void SetOwnerType(PrincipalType value) { m_ownerTypeHasBeenSet = true; m_ownerType = value; }
    inline UserDefinedFunctionInput& WithOwnerType(PrincipalType value) { SetOwnerType(value); return *this;}
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
    UserDefinedFunctionInput& WithResourceUris(ResourceUrisT&& value) { SetResourceUris(std::forward<ResourceUrisT>(value)); return *this;}
    template<typename ResourceUrisT = ResourceUri>
    UserDefinedFunctionInput& AddResourceUris(ResourceUrisT&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.emplace_back(std::forward<ResourceUrisT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet = false;

    PrincipalType m_ownerType{PrincipalType::NOT_SET};
    bool m_ownerTypeHasBeenSet = false;

    Aws::Vector<ResourceUri> m_resourceUris;
    bool m_resourceUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
