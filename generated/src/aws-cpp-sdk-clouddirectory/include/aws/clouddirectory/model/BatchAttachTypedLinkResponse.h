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
   * <p>Represents the output of a <a>AttachTypedLink</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachTypedLinkResponse">AWS
   * API Reference</a></p>
   */
  class BatchAttachTypedLinkResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLinkResponse();
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLinkResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLinkResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const{ return m_typedLinkSpecifier; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifier(const TypedLinkSpecifier& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = value; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifier(TypedLinkSpecifier&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::move(value); }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchAttachTypedLinkResponse& WithTypedLinkSpecifier(const TypedLinkSpecifier& value) { SetTypedLinkSpecifier(value); return *this;}

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchAttachTypedLinkResponse& WithTypedLinkSpecifier(TypedLinkSpecifier&& value) { SetTypedLinkSpecifier(std::move(value)); return *this;}

  private:

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
