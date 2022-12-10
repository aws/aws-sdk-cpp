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
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse();
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchLookupPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline const Aws::Vector<PolicyToPath>& GetPolicyToPathList() const{ return m_policyToPathList; }

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline bool PolicyToPathListHasBeenSet() const { return m_policyToPathListHasBeenSet; }

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline void SetPolicyToPathList(const Aws::Vector<PolicyToPath>& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList = value; }

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline void SetPolicyToPathList(Aws::Vector<PolicyToPath>&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList = std::move(value); }

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchLookupPolicyResponse& WithPolicyToPathList(const Aws::Vector<PolicyToPath>& value) { SetPolicyToPathList(value); return *this;}

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchLookupPolicyResponse& WithPolicyToPathList(Aws::Vector<PolicyToPath>&& value) { SetPolicyToPathList(std::move(value)); return *this;}

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchLookupPolicyResponse& AddPolicyToPathList(const PolicyToPath& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList.push_back(value); return *this; }

    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchLookupPolicyResponse& AddPolicyToPathList(PolicyToPath&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList.push_back(std::move(value)); return *this; }


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
    inline BatchLookupPolicyResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchLookupPolicyResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchLookupPolicyResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PolicyToPath> m_policyToPathList;
    bool m_policyToPathListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
