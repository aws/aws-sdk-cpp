﻿/**
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
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse();
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListIncomingTypedLinksResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetLinkSpecifiers() const{ return m_linkSpecifiers; }
    inline bool LinkSpecifiersHasBeenSet() const { return m_linkSpecifiersHasBeenSet; }
    inline void SetLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = value; }
    inline void SetLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = std::move(value); }
    inline BatchListIncomingTypedLinksResponse& WithLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetLinkSpecifiers(value); return *this;}
    inline BatchListIncomingTypedLinksResponse& WithLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetLinkSpecifiers(std::move(value)); return *this;}
    inline BatchListIncomingTypedLinksResponse& AddLinkSpecifiers(const TypedLinkSpecifier& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.push_back(value); return *this; }
    inline BatchListIncomingTypedLinksResponse& AddLinkSpecifiers(TypedLinkSpecifier&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.push_back(std::move(value)); return *this; }
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
    inline BatchListIncomingTypedLinksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchListIncomingTypedLinksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchListIncomingTypedLinksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
