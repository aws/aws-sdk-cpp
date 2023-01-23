/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/PathToObjectIdentifiers.h>
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
   * <p>Represents the output of a <a>ListObjectParentPaths</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectParentPathsResponse">AWS
   * API Reference</a></p>
   */
  class BatchListObjectParentPathsResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse();
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline const Aws::Vector<PathToObjectIdentifiers>& GetPathToObjectIdentifiersList() const{ return m_pathToObjectIdentifiersList; }

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline bool PathToObjectIdentifiersListHasBeenSet() const { return m_pathToObjectIdentifiersListHasBeenSet; }

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline void SetPathToObjectIdentifiersList(const Aws::Vector<PathToObjectIdentifiers>& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList = value; }

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline void SetPathToObjectIdentifiersList(Aws::Vector<PathToObjectIdentifiers>&& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList = std::move(value); }

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline BatchListObjectParentPathsResponse& WithPathToObjectIdentifiersList(const Aws::Vector<PathToObjectIdentifiers>& value) { SetPathToObjectIdentifiersList(value); return *this;}

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline BatchListObjectParentPathsResponse& WithPathToObjectIdentifiersList(Aws::Vector<PathToObjectIdentifiers>&& value) { SetPathToObjectIdentifiersList(std::move(value)); return *this;}

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline BatchListObjectParentPathsResponse& AddPathToObjectIdentifiersList(const PathToObjectIdentifiers& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList.push_back(value); return *this; }

    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline BatchListObjectParentPathsResponse& AddPathToObjectIdentifiersList(PathToObjectIdentifiers&& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList.push_back(std::move(value)); return *this; }


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
    inline BatchListObjectParentPathsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectParentPathsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectParentPathsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PathToObjectIdentifiers> m_pathToObjectIdentifiersList;
    bool m_pathToObjectIdentifiersListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
