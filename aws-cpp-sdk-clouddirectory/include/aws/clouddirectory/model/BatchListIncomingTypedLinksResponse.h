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
   * <p>Represents the output of a <a>ListIncomingTypedLinks</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListIncomingTypedLinksResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse
  {
  public:
    BatchListIncomingTypedLinksResponse();
    BatchListIncomingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchListIncomingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetLinkSpecifiers() const{ return m_linkSpecifiers; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline bool LinkSpecifiersHasBeenSet() const { return m_linkSpecifiersHasBeenSet; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline void SetLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = value; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline void SetLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = std::move(value); }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline BatchListIncomingTypedLinksResponse& WithLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetLinkSpecifiers(value); return *this;}

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline BatchListIncomingTypedLinksResponse& WithLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetLinkSpecifiers(std::move(value)); return *this;}

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline BatchListIncomingTypedLinksResponse& AddLinkSpecifiers(const TypedLinkSpecifier& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.push_back(value); return *this; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline BatchListIncomingTypedLinksResponse& AddLinkSpecifiers(TypedLinkSpecifier&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.push_back(std::move(value)); return *this; }


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
    inline BatchListIncomingTypedLinksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIncomingTypedLinksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIncomingTypedLinksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TypedLinkSpecifier> m_linkSpecifiers;
    bool m_linkSpecifiersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
