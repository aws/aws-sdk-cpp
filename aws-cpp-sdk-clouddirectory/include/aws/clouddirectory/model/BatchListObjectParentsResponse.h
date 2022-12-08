/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
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
   * <p>Represents the output of a <a>ListObjectParents</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectParentsResponse">AWS
   * API Reference</a></p>
   */
  class BatchListObjectParentsResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse();
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const{ return m_parentLinks; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline bool ParentLinksHasBeenSet() const { return m_parentLinksHasBeenSet; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline void SetParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { m_parentLinksHasBeenSet = true; m_parentLinks = value; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline void SetParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { m_parentLinksHasBeenSet = true; m_parentLinks = std::move(value); }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline BatchListObjectParentsResponse& WithParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { SetParentLinks(value); return *this;}

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline BatchListObjectParentsResponse& WithParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { SetParentLinks(std::move(value)); return *this;}

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline BatchListObjectParentsResponse& AddParentLinks(const ObjectIdentifierAndLinkNameTuple& value) { m_parentLinksHasBeenSet = true; m_parentLinks.push_back(value); return *this; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline BatchListObjectParentsResponse& AddParentLinks(ObjectIdentifierAndLinkNameTuple&& value) { m_parentLinksHasBeenSet = true; m_parentLinks.push_back(std::move(value)); return *this; }


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
    inline BatchListObjectParentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectParentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectParentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;
    bool m_parentLinksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
