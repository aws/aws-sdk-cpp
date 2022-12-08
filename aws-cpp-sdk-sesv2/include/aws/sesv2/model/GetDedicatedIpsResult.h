/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DedicatedIp.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the dedicated IP addresses that are associated with your
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpsResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpsResult
  {
  public:
    AWS_SESV2_API GetDedicatedIpsResult();
    AWS_SESV2_API GetDedicatedIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDedicatedIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<DedicatedIp>& GetDedicatedIps() const{ return m_dedicatedIps; }

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline void SetDedicatedIps(const Aws::Vector<DedicatedIp>& value) { m_dedicatedIps = value; }

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline void SetDedicatedIps(Aws::Vector<DedicatedIp>&& value) { m_dedicatedIps = std::move(value); }

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline GetDedicatedIpsResult& WithDedicatedIps(const Aws::Vector<DedicatedIp>& value) { SetDedicatedIps(value); return *this;}

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline GetDedicatedIpsResult& WithDedicatedIps(Aws::Vector<DedicatedIp>&& value) { SetDedicatedIps(std::move(value)); return *this;}

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline GetDedicatedIpsResult& AddDedicatedIps(const DedicatedIp& value) { m_dedicatedIps.push_back(value); return *this; }

    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline GetDedicatedIpsResult& AddDedicatedIps(DedicatedIp&& value) { m_dedicatedIps.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline GetDedicatedIpsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline GetDedicatedIpsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline GetDedicatedIpsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DedicatedIp> m_dedicatedIps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
