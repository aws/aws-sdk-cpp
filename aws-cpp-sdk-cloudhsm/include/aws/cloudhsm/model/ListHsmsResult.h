/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
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
namespace CloudHSM
{
namespace Model
{
  /**
   * <p>Contains the output of the <code>ListHsms</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHsmsResponse">AWS
   * API Reference</a></p>
   */
  class ListHsmsResult
  {
  public:
    AWS_CLOUDHSM_API ListHsmsResult();
    AWS_CLOUDHSM_API ListHsmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API ListHsmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHsmList() const{ return m_hsmList; }

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline void SetHsmList(const Aws::Vector<Aws::String>& value) { m_hsmList = value; }

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline void SetHsmList(Aws::Vector<Aws::String>&& value) { m_hsmList = std::move(value); }

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline ListHsmsResult& WithHsmList(const Aws::Vector<Aws::String>& value) { SetHsmList(value); return *this;}

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline ListHsmsResult& WithHsmList(Aws::Vector<Aws::String>&& value) { SetHsmList(std::move(value)); return *this;}

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline ListHsmsResult& AddHsmList(const Aws::String& value) { m_hsmList.push_back(value); return *this; }

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline ListHsmsResult& AddHsmList(Aws::String&& value) { m_hsmList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of ARNs that identify the HSMs.</p>
     */
    inline ListHsmsResult& AddHsmList(const char* value) { m_hsmList.push_back(value); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline ListHsmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline ListHsmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHsms</code> to retrieve the next set of items.</p>
     */
    inline ListHsmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_hsmList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
