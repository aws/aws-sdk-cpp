/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/PolicyToPath.h>
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
   * <p>Represents the output of a <a>LookupPolicy</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchLookupPolicyResponse">AWS
   * API Reference</a></p>
   */
  class BatchLookupPolicyResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline const Aws::Vector<PolicyToPath>& GetPolicyToPathList() const { return m_policyToPathList; }
    inline bool PolicyToPathListHasBeenSet() const { return m_policyToPathListHasBeenSet; }
    template<typename PolicyToPathListT = Aws::Vector<PolicyToPath>>
    void SetPolicyToPathList(PolicyToPathListT&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList = std::forward<PolicyToPathListT>(value); }
    template<typename PolicyToPathListT = Aws::Vector<PolicyToPath>>
    BatchLookupPolicyResponse& WithPolicyToPathList(PolicyToPathListT&& value) { SetPolicyToPathList(std::forward<PolicyToPathListT>(value)); return *this;}
    template<typename PolicyToPathListT = PolicyToPath>
    BatchLookupPolicyResponse& AddPolicyToPathList(PolicyToPathListT&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList.emplace_back(std::forward<PolicyToPathListT>(value)); return *this; }
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
    BatchLookupPolicyResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyToPath> m_policyToPathList;
    bool m_policyToPathListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
