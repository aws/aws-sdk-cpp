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
   * <p>Represents the output of a <a>ListPolicyAttachments</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListPolicyAttachmentsResponse">AWS
   * API Reference</a></p>
   */
  class BatchListPolicyAttachmentsResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse();
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachmentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const{ return m_objectIdentifiers; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline bool ObjectIdentifiersHasBeenSet() const { return m_objectIdentifiersHasBeenSet; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(const Aws::Vector<Aws::String>& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = value; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(Aws::Vector<Aws::String>&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = std::move(value); }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline BatchListPolicyAttachmentsResponse& WithObjectIdentifiers(const Aws::Vector<Aws::String>& value) { SetObjectIdentifiers(value); return *this;}

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline BatchListPolicyAttachmentsResponse& WithObjectIdentifiers(Aws::Vector<Aws::String>&& value) { SetObjectIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline BatchListPolicyAttachmentsResponse& AddObjectIdentifiers(const Aws::String& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline BatchListPolicyAttachmentsResponse& AddObjectIdentifiers(Aws::String&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline BatchListPolicyAttachmentsResponse& AddObjectIdentifiers(const char* value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(value); return *this; }


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
    inline BatchListPolicyAttachmentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListPolicyAttachmentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListPolicyAttachmentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_objectIdentifiers;
    bool m_objectIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
