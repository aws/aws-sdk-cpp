/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PolicyVersion.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListPolicyVersions operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListPolicyVersionsResult
  {
  public:
    AWS_IOT_API ListPolicyVersionsResult();
    AWS_IOT_API ListPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policy versions.</p>
     */
    inline const Aws::Vector<PolicyVersion>& GetPolicyVersions() const{ return m_policyVersions; }

    /**
     * <p>The policy versions.</p>
     */
    inline void SetPolicyVersions(const Aws::Vector<PolicyVersion>& value) { m_policyVersions = value; }

    /**
     * <p>The policy versions.</p>
     */
    inline void SetPolicyVersions(Aws::Vector<PolicyVersion>&& value) { m_policyVersions = std::move(value); }

    /**
     * <p>The policy versions.</p>
     */
    inline ListPolicyVersionsResult& WithPolicyVersions(const Aws::Vector<PolicyVersion>& value) { SetPolicyVersions(value); return *this;}

    /**
     * <p>The policy versions.</p>
     */
    inline ListPolicyVersionsResult& WithPolicyVersions(Aws::Vector<PolicyVersion>&& value) { SetPolicyVersions(std::move(value)); return *this;}

    /**
     * <p>The policy versions.</p>
     */
    inline ListPolicyVersionsResult& AddPolicyVersions(const PolicyVersion& value) { m_policyVersions.push_back(value); return *this; }

    /**
     * <p>The policy versions.</p>
     */
    inline ListPolicyVersionsResult& AddPolicyVersions(PolicyVersion&& value) { m_policyVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PolicyVersion> m_policyVersions;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
