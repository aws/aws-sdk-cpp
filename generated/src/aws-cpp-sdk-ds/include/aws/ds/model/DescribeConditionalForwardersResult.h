/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/ConditionalForwarder.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>The result of a DescribeConditionalForwarder request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwardersResult">AWS
   * API Reference</a></p>
   */
  class DescribeConditionalForwardersResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult();
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline const Aws::Vector<ConditionalForwarder>& GetConditionalForwarders() const{ return m_conditionalForwarders; }

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline void SetConditionalForwarders(const Aws::Vector<ConditionalForwarder>& value) { m_conditionalForwarders = value; }

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline void SetConditionalForwarders(Aws::Vector<ConditionalForwarder>&& value) { m_conditionalForwarders = std::move(value); }

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline DescribeConditionalForwardersResult& WithConditionalForwarders(const Aws::Vector<ConditionalForwarder>& value) { SetConditionalForwarders(value); return *this;}

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline DescribeConditionalForwardersResult& WithConditionalForwarders(Aws::Vector<ConditionalForwarder>&& value) { SetConditionalForwarders(std::move(value)); return *this;}

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline DescribeConditionalForwardersResult& AddConditionalForwarders(const ConditionalForwarder& value) { m_conditionalForwarders.push_back(value); return *this; }

    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline DescribeConditionalForwardersResult& AddConditionalForwarders(ConditionalForwarder&& value) { m_conditionalForwarders.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConditionalForwarder> m_conditionalForwarders;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
