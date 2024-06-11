/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that filters items in a list of component types.</p>  <p>Only
   * one object is accepted as a valid input.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListComponentTypesFilter">AWS
   * API Reference</a></p>
   */
  class ListComponentTypesFilter
  {
  public:
    AWS_IOTTWINMAKER_API ListComponentTypesFilter();
    AWS_IOTTWINMAKER_API ListComponentTypesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ListComponentTypesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component type that the component types in the list extend.</p>
     */
    inline const Aws::String& GetExtendsFrom() const{ return m_extendsFrom; }
    inline bool ExtendsFromHasBeenSet() const { return m_extendsFromHasBeenSet; }
    inline void SetExtendsFrom(const Aws::String& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = value; }
    inline void SetExtendsFrom(Aws::String&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = std::move(value); }
    inline void SetExtendsFrom(const char* value) { m_extendsFromHasBeenSet = true; m_extendsFrom.assign(value); }
    inline ListComponentTypesFilter& WithExtendsFrom(const Aws::String& value) { SetExtendsFrom(value); return *this;}
    inline ListComponentTypesFilter& WithExtendsFrom(Aws::String&& value) { SetExtendsFrom(std::move(value)); return *this;}
    inline ListComponentTypesFilter& WithExtendsFrom(const char* value) { SetExtendsFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to which the component types in the list belong.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline ListComponentTypesFilter& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ListComponentTypesFilter& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ListComponentTypesFilter& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the component types in the list are
     * abstract.</p>
     */
    inline bool GetIsAbstract() const{ return m_isAbstract; }
    inline bool IsAbstractHasBeenSet() const { return m_isAbstractHasBeenSet; }
    inline void SetIsAbstract(bool value) { m_isAbstractHasBeenSet = true; m_isAbstract = value; }
    inline ListComponentTypesFilter& WithIsAbstract(bool value) { SetIsAbstract(value); return *this;}
    ///@}
  private:

    Aws::String m_extendsFrom;
    bool m_extendsFromHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    bool m_isAbstract;
    bool m_isAbstractHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
