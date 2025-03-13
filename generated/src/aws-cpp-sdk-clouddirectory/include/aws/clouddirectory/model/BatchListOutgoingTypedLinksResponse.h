/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <a>ListOutgoingTypedLinks</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListOutgoingTypedLinksResponse">AWS
   * API Reference</a></p>
   */
  class BatchListOutgoingTypedLinksResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetTypedLinkSpecifiers() const { return m_typedLinkSpecifiers; }
    inline bool TypedLinkSpecifiersHasBeenSet() const { return m_typedLinkSpecifiersHasBeenSet; }
    template<typename TypedLinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    void SetTypedLinkSpecifiers(TypedLinkSpecifiersT&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers = std::forward<TypedLinkSpecifiersT>(value); }
    template<typename TypedLinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    BatchListOutgoingTypedLinksResponse& WithTypedLinkSpecifiers(TypedLinkSpecifiersT&& value) { SetTypedLinkSpecifiers(std::forward<TypedLinkSpecifiersT>(value)); return *this;}
    template<typename TypedLinkSpecifiersT = TypedLinkSpecifier>
    BatchListOutgoingTypedLinksResponse& AddTypedLinkSpecifiers(TypedLinkSpecifiersT&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers.emplace_back(std::forward<TypedLinkSpecifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchListOutgoingTypedLinksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TypedLinkSpecifier> m_typedLinkSpecifiers;
    bool m_typedLinkSpecifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
