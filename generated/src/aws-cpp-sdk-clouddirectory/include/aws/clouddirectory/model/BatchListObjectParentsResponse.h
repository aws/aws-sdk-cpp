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
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const { return m_parentLinks; }
    inline bool ParentLinksHasBeenSet() const { return m_parentLinksHasBeenSet; }
    template<typename ParentLinksT = Aws::Vector<ObjectIdentifierAndLinkNameTuple>>
    void SetParentLinks(ParentLinksT&& value) { m_parentLinksHasBeenSet = true; m_parentLinks = std::forward<ParentLinksT>(value); }
    template<typename ParentLinksT = Aws::Vector<ObjectIdentifierAndLinkNameTuple>>
    BatchListObjectParentsResponse& WithParentLinks(ParentLinksT&& value) { SetParentLinks(std::forward<ParentLinksT>(value)); return *this;}
    template<typename ParentLinksT = ObjectIdentifierAndLinkNameTuple>
    BatchListObjectParentsResponse& AddParentLinks(ParentLinksT&& value) { m_parentLinksHasBeenSet = true; m_parentLinks.emplace_back(std::forward<ParentLinksT>(value)); return *this; }
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
    BatchListObjectParentsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;
    bool m_parentLinksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
