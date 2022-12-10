/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/ManagedRuleDescription.h>
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
  class ListManagedInsightRulesResult
  {
  public:
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult();
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline const Aws::Vector<ManagedRuleDescription>& GetManagedRules() const{ return m_managedRules; }

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline void SetManagedRules(const Aws::Vector<ManagedRuleDescription>& value) { m_managedRules = value; }

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline void SetManagedRules(Aws::Vector<ManagedRuleDescription>&& value) { m_managedRules = std::move(value); }

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline ListManagedInsightRulesResult& WithManagedRules(const Aws::Vector<ManagedRuleDescription>& value) { SetManagedRules(value); return *this;}

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline ListManagedInsightRulesResult& WithManagedRules(Aws::Vector<ManagedRuleDescription>&& value) { SetManagedRules(std::move(value)); return *this;}

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline ListManagedInsightRulesResult& AddManagedRules(const ManagedRuleDescription& value) { m_managedRules.push_back(value); return *this; }

    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline ListManagedInsightRulesResult& AddManagedRules(ManagedRuleDescription&& value) { m_managedRules.push_back(std::move(value)); return *this; }


    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListManagedInsightRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListManagedInsightRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ManagedRuleDescription> m_managedRules;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
