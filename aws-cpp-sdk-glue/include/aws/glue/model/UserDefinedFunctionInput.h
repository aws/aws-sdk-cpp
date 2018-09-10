﻿/*
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
   * <p>A structure used to create or updata a user-defined function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UserDefinedFunctionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API UserDefinedFunctionInput
  {
  public:
    UserDefinedFunctionInput();
    UserDefinedFunctionInput(Aws::Utils::Json::JsonView jsonValue);
    UserDefinedFunctionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

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
    inline UserDefinedFunctionInput& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UserDefinedFunctionInput& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UserDefinedFunctionInput& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline const Aws::String& GetClassName() const{ return m_className; }

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
    inline UserDefinedFunctionInput& WithClassName(const Aws::String& value) { SetClassName(value); return *this;}

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline UserDefinedFunctionInput& WithClassName(Aws::String&& value) { SetClassName(std::move(value)); return *this;}

    /**
     * <p>The Java class that contains the function code.</p>
     */
    inline UserDefinedFunctionInput& WithClassName(const char* value) { SetClassName(value); return *this;}


    /**
     * <p>The owner of the function.</p>
     */
    inline const Aws::String& GetOwnerName() const{ return m_ownerName; }

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
    inline UserDefinedFunctionInput& WithOwnerName(const Aws::String& value) { SetOwnerName(value); return *this;}

    /**
     * <p>The owner of the function.</p>
     */
    inline UserDefinedFunctionInput& WithOwnerName(Aws::String&& value) { SetOwnerName(std::move(value)); return *this;}

    /**
     * <p>The owner of the function.</p>
     */
    inline UserDefinedFunctionInput& WithOwnerName(const char* value) { SetOwnerName(value); return *this;}


    /**
     * <p>The owner type.</p>
     */
    inline const PrincipalType& GetOwnerType() const{ return m_ownerType; }

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
    inline UserDefinedFunctionInput& WithOwnerType(const PrincipalType& value) { SetOwnerType(value); return *this;}

    /**
     * <p>The owner type.</p>
     */
    inline UserDefinedFunctionInput& WithOwnerType(PrincipalType&& value) { SetOwnerType(std::move(value)); return *this;}


    /**
     * <p>The resource URIs for the function.</p>
     */
    inline const Aws::Vector<ResourceUri>& GetResourceUris() const{ return m_resourceUris; }

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
    inline UserDefinedFunctionInput& WithResourceUris(const Aws::Vector<ResourceUri>& value) { SetResourceUris(value); return *this;}

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunctionInput& WithResourceUris(Aws::Vector<ResourceUri>&& value) { SetResourceUris(std::move(value)); return *this;}

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunctionInput& AddResourceUris(const ResourceUri& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(value); return *this; }

    /**
     * <p>The resource URIs for the function.</p>
     */
    inline UserDefinedFunctionInput& AddResourceUris(ResourceUri&& value) { m_resourceUrisHasBeenSet = true; m_resourceUris.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_className;
    bool m_classNameHasBeenSet;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet;

    PrincipalType m_ownerType;
    bool m_ownerTypeHasBeenSet;

    Aws::Vector<ResourceUri> m_resourceUris;
    bool m_resourceUrisHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
