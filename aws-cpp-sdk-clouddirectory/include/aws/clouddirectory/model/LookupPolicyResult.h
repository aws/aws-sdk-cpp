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
#include <aws/clouddirectory/model/PolicyToPath.h>

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
  class AWS_CLOUDDIRECTORY_API LookupPolicyResult
  {
  public:
    LookupPolicyResult();
    LookupPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LookupPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline const Aws::Vector<PolicyToPath>& GetPolicyToPathList() const{ return m_policyToPathList; }

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline void SetPolicyToPathList(const Aws::Vector<PolicyToPath>& value) { m_policyToPathList = value; }

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline void SetPolicyToPathList(Aws::Vector<PolicyToPath>&& value) { m_policyToPathList = value; }

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline LookupPolicyResult& WithPolicyToPathList(const Aws::Vector<PolicyToPath>& value) { SetPolicyToPathList(value); return *this;}

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline LookupPolicyResult& WithPolicyToPathList(Aws::Vector<PolicyToPath>&& value) { SetPolicyToPathList(value); return *this;}

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline LookupPolicyResult& AddPolicyToPathList(const PolicyToPath& value) { m_policyToPathList.push_back(value); return *this; }

    /**
     * <p>Provides list of path to policies. Policies contain PolicyId,
     * ObjectIdentifier, and PolicyType.</p>
     */
    inline LookupPolicyResult& AddPolicyToPathList(PolicyToPath&& value) { m_policyToPathList.push_back(value); return *this; }

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
    inline LookupPolicyResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline LookupPolicyResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline LookupPolicyResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<PolicyToPath> m_policyToPathList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
