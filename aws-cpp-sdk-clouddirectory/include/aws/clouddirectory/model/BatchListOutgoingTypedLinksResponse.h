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
  class AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinksResponse
  {
  public:
    BatchListOutgoingTypedLinksResponse();
    BatchListOutgoingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchListOutgoingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetTypedLinkSpecifiers() const{ return m_typedLinkSpecifiers; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline bool TypedLinkSpecifiersHasBeenSet() const { return m_typedLinkSpecifiersHasBeenSet; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers = value; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers = std::move(value); }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& WithTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetTypedLinkSpecifiers(value); return *this;}

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& WithTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetTypedLinkSpecifiers(std::move(value)); return *this;}

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& AddTypedLinkSpecifiers(const TypedLinkSpecifier& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers.push_back(value); return *this; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& AddTypedLinkSpecifiers(TypedLinkSpecifier&& value) { m_typedLinkSpecifiersHasBeenSet = true; m_typedLinkSpecifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TypedLinkSpecifier> m_typedLinkSpecifiers;
    bool m_typedLinkSpecifiersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
