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
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse();
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetTypedLinkSpecifiers() const{ return m_typedLinkSpecifiers; }
    inline bool TypedLinkSpecifiersHasBeenSet() const { return m_typedLinkSpecifiersHasBeenSet; }
    inline void SetTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers = value; }
    inline void SetTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers = std::move(value); }
    inline BatchListOutgoingTypedLinksResponse& WithTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetTypedLinkSpecifiers(value); return *this;}
    inline BatchListOutgoingTypedLinksResponse& WithTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetTypedLinkSpecifiers(std::move(value)); return *this;}
    inline BatchListOutgoingTypedLinksResponse& AddTypedLinkSpecifiers(const TypedLinkSpecifier& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers.push_back(value); return *this; }
    inline BatchListOutgoingTypedLinksResponse& AddTypedLinkSpecifiers(TypedLinkSpecifier&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
