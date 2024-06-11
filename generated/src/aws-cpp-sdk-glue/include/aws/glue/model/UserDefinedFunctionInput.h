﻿/**
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
    AWS_GLUE_API UserDefinedFunctionInput();
    AWS_GLUE_API UserDefinedFunctionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UserDefinedFunctionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }
    inline UserDefinedFunctionInput& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}
    inline UserDefinedFunctionInput& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}
    inline UserDefinedFunctionInput& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline const Aws::String& GetClassName() const{ return m_className; }
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
    inline void SetClassName(const Aws::String& value) { m_classNameHasBeenSet = true; m_className = value; }
    inline void SetClassName(Aws::String&& value) { m_classNameHasBeenSet = true; m_className = std::move(value); }
    inline void SetClassName(const char* value) { m_classNameHasBeenSet = true; m_className.assign(value); }
    inline UserDefinedFunctionInput& WithClassName(const Aws::String& value) { SetClassName(value); return *this;}
    inline UserDefinedFunctionInput& WithClassName(Aws::String&& value) { SetClassName(std::move(value)); return *this;}
    inline UserDefinedFunctionInput& WithClassName(const char* value) { SetClassName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the function.</p>
     */
    inline const Aws::String& GetOwnerName() const{ return m_ownerName; }
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }
    inline void SetOwnerName(const Aws::String& value) { m_ownerNameHasBeenSet = true; m_ownerName = value; }
    inline void SetOwnerName(Aws::String&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::move(value); }
    inline void SetOwnerName(const char* value) { m_ownerNameHasBeenSet = true; m_ownerName.assign(value); }
    inline UserDefinedFunctionInput& WithOwnerName(const Aws::String& value) { SetOwnerName(value); return *this;}
    inline UserDefinedFunctionInput& WithOwnerName(Aws::String&& value) { SetOwnerName(std::move(value)); return *this;}
    inline UserDefinedFunctionInput& WithOwnerName(const char* value) { SetOwnerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner type.</p>
     */
    inline const PrincipalType& GetOwnerType() const{ return m_ownerType; }
    inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
    inline void SetOwnerType(const PrincipalType& value) { m_ownerTypeHasBeenSet = true; m_ownerType = value; }
    inline void SetOwnerType(PrincipalType&& value) { m_ownerTypeHasBeenSet = true; m_ownerType = std::move(value); }
    inline UserDefinedFunctionInput& WithOwnerType(const PrincipalType& value) { SetOwnerType(value); return *this;}
    inline UserDefinedFunctionInput& WithOwnerType(PrincipalType&& value) { SetOwnerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource URIs for the function.</p>
     */
    inline const Aws::Vector<ResourceUri>& GetResourceUris() const{ return m_resourceUris; }
    inline bool ResourceUrisHasBeenSet() const { return m_resourceUrisHasBeenSet; }
    inline void SetResourceUris(const Aws::Vector<ResourceUri>& value) { m_resourceUrisHasBeenSet = true; m_resourceUris = value; }
    inline void SetResourceUris(Aws::Vector<ResourceUri>&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris = std::move(value); }
    inline UserDefinedFunctionInput& WithResourceUris(const Aws::Vector<ResourceUri>& value) { SetResourceUris(value); return *this;}
    inline UserDefinedFunctionInput& WithResourceUris(Aws::Vector<ResourceUri>&& value) { SetResourceUris(std::move(value)); return *this;}
    inline UserDefinedFunctionInput& AddResourceUris(const ResourceUri& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(value); return *this; }
    inline UserDefinedFunctionInput& AddResourceUris(ResourceUri&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet = false;

    PrincipalType m_ownerType;
    bool m_ownerTypeHasBeenSet = false;

    Aws::Vector<ResourceUri> m_resourceUris;
    bool m_resourceUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
