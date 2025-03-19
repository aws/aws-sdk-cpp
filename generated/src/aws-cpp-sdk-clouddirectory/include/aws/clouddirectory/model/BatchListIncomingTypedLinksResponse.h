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
   * <p>Represents the output of a <a>ListIncomingTypedLinks</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListIncomingTypedLinksResponse">AWS
   * API Reference</a></p>
   */
  class BatchListIncomingTypedLinksResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetLinkSpecifiers() const { return m_linkSpecifiers; }
    inline bool LinkSpecifiersHasBeenSet() const { return m_linkSpecifiersHasBeenSet; }
    template<typename LinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    void SetLinkSpecifiers(LinkSpecifiersT&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = std::forward<LinkSpecifiersT>(value); }
    template<typename LinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    BatchListIncomingTypedLinksResponse& WithLinkSpecifiers(LinkSpecifiersT&& value) { SetLinkSpecifiers(std::forward<LinkSpecifiersT>(value)); return *this;}
    template<typename LinkSpecifiersT = TypedLinkSpecifier>
    BatchListIncomingTypedLinksResponse& AddLinkSpecifiers(LinkSpecifiersT&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.emplace_back(std::forward<LinkSpecifiersT>(value)); return *this; }
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
    BatchListIncomingTypedLinksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TypedLinkSpecifier> m_linkSpecifiers;
    bool m_linkSpecifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
