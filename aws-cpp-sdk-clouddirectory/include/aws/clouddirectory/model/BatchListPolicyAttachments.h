﻿/*
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
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
   * attached inside a <a>BatchRead</a> operation. For more information, see
   * <a>ListPolicyAttachments</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListPolicyAttachments">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchListPolicyAttachments
  {
  public:
    BatchListPolicyAttachments();
    BatchListPolicyAttachments(Aws::Utils::Json::JsonView jsonValue);
    BatchListPolicyAttachments& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline const ObjectReference& GetPolicyReference() const{ return m_policyReference; }

    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(const ObjectReference& value) { m_policyReferenceHasBeenSet = true; m_policyReference = value; }

    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(ObjectReference&& value) { m_policyReferenceHasBeenSet = true; m_policyReference = std::move(value); }

    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline BatchListPolicyAttachments& WithPolicyReference(const ObjectReference& value) { SetPolicyReference(value); return *this;}

    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline BatchListPolicyAttachments& WithPolicyReference(ObjectReference&& value) { SetPolicyReference(std::move(value)); return *this;}


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

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
    inline BatchListPolicyAttachments& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListPolicyAttachments& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListPolicyAttachments& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline BatchListPolicyAttachments& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ObjectReference m_policyReference;
    bool m_policyReferenceHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
