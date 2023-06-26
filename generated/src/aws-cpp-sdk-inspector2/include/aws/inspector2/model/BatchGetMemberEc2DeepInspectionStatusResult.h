/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/MemberAccountEc2DeepInspectionStatusState.h>
#include <aws/inspector2/model/FailedMemberAccountEc2DeepInspectionStatusState.h>
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
namespace Inspector2
{
namespace Model
{
  class BatchGetMemberEc2DeepInspectionStatusResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult();
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<MemberAccountEc2DeepInspectionStatusState>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline void SetAccountIds(const Aws::Vector<MemberAccountEc2DeepInspectionStatusState>& value) { m_accountIds = value; }

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline void SetAccountIds(Aws::Vector<MemberAccountEc2DeepInspectionStatusState>&& value) { m_accountIds = std::move(value); }

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithAccountIds(const Aws::Vector<MemberAccountEc2DeepInspectionStatusState>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithAccountIds(Aws::Vector<MemberAccountEc2DeepInspectionStatusState>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& AddAccountIds(const MemberAccountEc2DeepInspectionStatusState& value) { m_accountIds.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. <pre><code>
     * &lt;/p&gt; </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& AddAccountIds(MemberAccountEc2DeepInspectionStatusState&& value) { m_accountIds.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline const Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>& GetFailedAccountIds() const{ return m_failedAccountIds; }

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline void SetFailedAccountIds(const Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>& value) { m_failedAccountIds = value; }

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline void SetFailedAccountIds(Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>&& value) { m_failedAccountIds = std::move(value); }

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithFailedAccountIds(const Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>& value) { SetFailedAccountIds(value); return *this;}

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithFailedAccountIds(Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>&& value) { SetFailedAccountIds(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& AddFailedAccountIds(const FailedMemberAccountEc2DeepInspectionStatusState& value) { m_failedAccountIds.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline BatchGetMemberEc2DeepInspectionStatusResult& AddFailedAccountIds(FailedMemberAccountEc2DeepInspectionStatusState&& value) { m_failedAccountIds.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetMemberEc2DeepInspectionStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MemberAccountEc2DeepInspectionStatusState> m_accountIds;

    Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState> m_failedAccountIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
