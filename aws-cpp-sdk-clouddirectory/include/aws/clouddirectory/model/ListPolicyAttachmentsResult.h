﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult
  {
  public:
    ListPolicyAttachmentsResult();
    ListPolicyAttachmentsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPolicyAttachmentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const{ return m_objectIdentifiers; }

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(const Aws::Vector<Aws::String>& value) { m_objectIdentifiers = value; }

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline void SetObjectIdentifiers(Aws::Vector<Aws::String>&& value) { m_objectIdentifiers = value; }

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& WithObjectIdentifiers(const Aws::Vector<Aws::String>& value) { SetObjectIdentifiers(value); return *this;}

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& WithObjectIdentifiers(Aws::Vector<Aws::String>&& value) { SetObjectIdentifiers(value); return *this;}

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(const Aws::String& value) { m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(Aws::String&& value) { m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>List of ObjectIdentifiers to which the policy is attached.</p>
     */
    inline ListPolicyAttachmentsResult& AddObjectIdentifiers(const char* value) { m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token used for pagination.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline ListPolicyAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_objectIdentifiers;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
