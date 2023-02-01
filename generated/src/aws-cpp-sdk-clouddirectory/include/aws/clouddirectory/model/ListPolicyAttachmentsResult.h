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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{
  class ListPolicyAttachmentsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult();
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const{ return m_objectIdentifiers; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(const Aws::Vector<Aws::String>& value) { m_objectIdentifiers = value; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(Aws::Vector<Aws::String>&& value) { m_objectIdentifiers = std::move(value); }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& WithObjectIdentifiers(const Aws::Vector<Aws::String>& value) { SetObjectIdentifiers(value); return *this;}

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& WithObjectIdentifiers(Aws::Vector<Aws::String>&& value) { SetObjectIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(const Aws::String& value) { m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(Aws::String&& value) { m_objectIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(const char* value) { m_objectIdentifiers.push_back(value); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_objectIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
