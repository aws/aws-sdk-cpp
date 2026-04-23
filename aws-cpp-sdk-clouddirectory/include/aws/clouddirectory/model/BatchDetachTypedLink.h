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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Detaches a typed link from a specified source and target object inside a
   * <a>BatchRead</a> operation. For more information, see <a>DetachTypedLink</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachTypedLink">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchDetachTypedLink
  {
  public:
    BatchDetachTypedLink();
    BatchDetachTypedLink(Aws::Utils::Json::JsonView jsonValue);
    BatchDetachTypedLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const{ return m_typedLinkSpecifier; }

    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }

    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline void SetTypedLinkSpecifier(const TypedLinkSpecifier& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = value; }

    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline void SetTypedLinkSpecifier(TypedLinkSpecifier&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::move(value); }

    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline BatchDetachTypedLink& WithTypedLinkSpecifier(const TypedLinkSpecifier& value) { SetTypedLinkSpecifier(value); return *this;}

    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline BatchDetachTypedLink& WithTypedLinkSpecifier(TypedLinkSpecifier&& value) { SetTypedLinkSpecifier(std::move(value)); return *this;}

  private:

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
