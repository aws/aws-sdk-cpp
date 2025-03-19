/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchDetachTypedLink
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDetachTypedLink() = default;
    AWS_CLOUDDIRECTORY_API BatchDetachTypedLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachTypedLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to accept a typed link specifier as input.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const { return m_typedLinkSpecifier; }
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    void SetTypedLinkSpecifier(TypedLinkSpecifierT&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::forward<TypedLinkSpecifierT>(value); }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    BatchDetachTypedLink& WithTypedLinkSpecifier(TypedLinkSpecifierT&& value) { SetTypedLinkSpecifier(std::forward<TypedLinkSpecifierT>(value)); return *this;}
    ///@}
  private:

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
