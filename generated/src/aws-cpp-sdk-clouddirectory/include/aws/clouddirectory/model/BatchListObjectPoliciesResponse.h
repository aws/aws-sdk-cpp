/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <a>ListObjectPolicies</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class BatchListObjectPoliciesResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse();
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedPolicyIds() const{ return m_attachedPolicyIds; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline bool AttachedPolicyIdsHasBeenSet() const { return m_attachedPolicyIdsHasBeenSet; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline void SetAttachedPolicyIds(const Aws::Vector<Aws::String>& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds = value; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline void SetAttachedPolicyIds(Aws::Vector<Aws::String>&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds = std::move(value); }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline BatchListObjectPoliciesResponse& WithAttachedPolicyIds(const Aws::Vector<Aws::String>& value) { SetAttachedPolicyIds(value); return *this;}

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline BatchListObjectPoliciesResponse& WithAttachedPolicyIds(Aws::Vector<Aws::String>&& value) { SetAttachedPolicyIds(std::move(value)); return *this;}

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline BatchListObjectPoliciesResponse& AddAttachedPolicyIds(const Aws::String& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds.push_back(value); return *this; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline BatchListObjectPoliciesResponse& AddAttachedPolicyIds(Aws::String&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline BatchListObjectPoliciesResponse& AddAttachedPolicyIds(const char* value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds.push_back(value); return *this; }


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
    inline BatchListObjectPoliciesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectPoliciesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectPoliciesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_attachedPolicyIds;
    bool m_attachedPolicyIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
