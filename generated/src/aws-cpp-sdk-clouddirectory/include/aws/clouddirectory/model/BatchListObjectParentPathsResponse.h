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
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectParentPathsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the path to the <code>ObjectIdentifiers</code> that are associated
     * with the directory.</p>
     */
    inline const Aws::Vector<PathToObjectIdentifiers>& GetPathToObjectIdentifiersList() const { return m_pathToObjectIdentifiersList; }
    inline bool PathToObjectIdentifiersListHasBeenSet() const { return m_pathToObjectIdentifiersListHasBeenSet; }
    template<typename PathToObjectIdentifiersListT = Aws::Vector<PathToObjectIdentifiers>>
    void SetPathToObjectIdentifiersList(PathToObjectIdentifiersListT&& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList = std::forward<PathToObjectIdentifiersListT>(value); }
    template<typename PathToObjectIdentifiersListT = Aws::Vector<PathToObjectIdentifiers>>
    BatchListObjectParentPathsResponse& WithPathToObjectIdentifiersList(PathToObjectIdentifiersListT&& value) { SetPathToObjectIdentifiersList(std::forward<PathToObjectIdentifiersListT>(value)); return *this;}
    template<typename PathToObjectIdentifiersListT = PathToObjectIdentifiers>
    BatchListObjectParentPathsResponse& AddPathToObjectIdentifiersList(PathToObjectIdentifiersListT&& value) { m_pathToObjectIdentifiersListHasBeenSet = true; m_pathToObjectIdentifiersList.emplace_back(std::forward<PathToObjectIdentifiersListT>(value)); return *this; }
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
    BatchListObjectParentPathsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PathToObjectIdentifiers> m_pathToObjectIdentifiersList;
    bool m_pathToObjectIdentifiersListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
