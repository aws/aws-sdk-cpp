/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/PartialFailure.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class DeleteInsightRulesResult
  {
  public:
    AWS_CLOUDWATCH_API DeleteInsightRulesResult();
    AWS_CLOUDWATCH_API DeleteInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DeleteInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline const Aws::Vector<PartialFailure>& GetFailures() const{ return m_failures; }

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline void SetFailures(const Aws::Vector<PartialFailure>& value) { m_failures = value; }

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline void SetFailures(Aws::Vector<PartialFailure>&& value) { m_failures = std::move(value); }

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline DeleteInsightRulesResult& WithFailures(const Aws::Vector<PartialFailure>& value) { SetFailures(value); return *this;}

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline DeleteInsightRulesResult& WithFailures(Aws::Vector<PartialFailure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline DeleteInsightRulesResult& AddFailures(const PartialFailure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>An array listing the rules that could not be deleted. You cannot delete
     * built-in rules.</p>
     */
    inline DeleteInsightRulesResult& AddFailures(PartialFailure&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteInsightRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteInsightRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PartialFailure> m_failures;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
