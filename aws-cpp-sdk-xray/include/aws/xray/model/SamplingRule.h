/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>A sampling rule that services use to decide whether to instrument a request.
   * Rule fields can match properties of the service, or properties of a request. The
   * service can ignore rules that don't match its properties.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingRule">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API SamplingRule
  {
  public:
    SamplingRule();
    SamplingRule(Aws::Utils::Json::JsonView jsonValue);
    SamplingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleARN() const{ return m_ruleARN; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline bool RuleARNHasBeenSet() const { return m_ruleARNHasBeenSet; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(const Aws::String& value) { m_ruleARNHasBeenSet = true; m_ruleARN = value; }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(Aws::String&& value) { m_ruleARNHasBeenSet = true; m_ruleARN = std::move(value); }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline void SetRuleARN(const char* value) { m_ruleARNHasBeenSet = true; m_ruleARN.assign(value); }

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleARN(const Aws::String& value) { SetRuleARN(value); return *this;}

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleARN(Aws::String&& value) { SetRuleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline SamplingRule& WithRuleARN(const char* value) { SetRuleARN(value); return *this;}


    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline SamplingRule& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline SamplingRule& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Matches the ARN of the AWS resource on which the service runs.</p>
     */
    inline SamplingRule& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline SamplingRule& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline double GetFixedRate() const{ return m_fixedRate; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline bool FixedRateHasBeenSet() const { return m_fixedRateHasBeenSet; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline void SetFixedRate(double value) { m_fixedRateHasBeenSet = true; m_fixedRate = value; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline SamplingRule& WithFixedRate(double value) { SetFixedRate(value); return *this;}


    /**
     * <p>A fixed number of matching requests to instrument per second, prior to
     * applying the fixed rate. The reservoir is not used directly by services, but
     * applies to all services using the rule collectively.</p>
     */
    inline int GetReservoirSize() const{ return m_reservoirSize; }

    /**
     * <p>A fixed number of matching requests to instrument per second, prior to
     * applying the fixed rate. The reservoir is not used directly by services, but
     * applies to all services using the rule collectively.</p>
     */
    inline bool ReservoirSizeHasBeenSet() const { return m_reservoirSizeHasBeenSet; }

    /**
     * <p>A fixed number of matching requests to instrument per second, prior to
     * applying the fixed rate. The reservoir is not used directly by services, but
     * applies to all services using the rule collectively.</p>
     */
    inline void SetReservoirSize(int value) { m_reservoirSizeHasBeenSet = true; m_reservoirSize = value; }

    /**
     * <p>A fixed number of matching requests to instrument per second, prior to
     * applying the fixed rate. The reservoir is not used directly by services, but
     * applies to all services using the rule collectively.</p>
     */
    inline SamplingRule& WithReservoirSize(int value) { SetReservoirSize(value); return *this;}


    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline SamplingRule& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline SamplingRule& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline SamplingRule& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline const Aws::String& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline void SetServiceType(const Aws::String& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline void SetServiceType(Aws::String&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline void SetServiceType(const char* value) { m_serviceTypeHasBeenSet = true; m_serviceType.assign(value); }

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline SamplingRule& WithServiceType(const Aws::String& value) { SetServiceType(value); return *this;}

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline SamplingRule& WithServiceType(Aws::String&& value) { SetServiceType(std::move(value)); return *this;}

    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline SamplingRule& WithServiceType(const char* value) { SetServiceType(value); return *this;}


    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline SamplingRule& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline SamplingRule& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline SamplingRule& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline const Aws::String& GetHTTPMethod() const{ return m_hTTPMethod; }

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline bool HTTPMethodHasBeenSet() const { return m_hTTPMethodHasBeenSet; }

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline void SetHTTPMethod(const Aws::String& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = value; }

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline void SetHTTPMethod(Aws::String&& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = std::move(value); }

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline void SetHTTPMethod(const char* value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod.assign(value); }

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline SamplingRule& WithHTTPMethod(const Aws::String& value) { SetHTTPMethod(value); return *this;}

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline SamplingRule& WithHTTPMethod(Aws::String&& value) { SetHTTPMethod(std::move(value)); return *this;}

    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline SamplingRule& WithHTTPMethod(const char* value) { SetHTTPMethod(value); return *this;}


    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline const Aws::String& GetURLPath() const{ return m_uRLPath; }

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline bool URLPathHasBeenSet() const { return m_uRLPathHasBeenSet; }

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline void SetURLPath(const Aws::String& value) { m_uRLPathHasBeenSet = true; m_uRLPath = value; }

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline void SetURLPath(Aws::String&& value) { m_uRLPathHasBeenSet = true; m_uRLPath = std::move(value); }

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline void SetURLPath(const char* value) { m_uRLPathHasBeenSet = true; m_uRLPath.assign(value); }

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline SamplingRule& WithURLPath(const Aws::String& value) { SetURLPath(value); return *this;}

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline SamplingRule& WithURLPath(Aws::String&& value) { SetURLPath(std::move(value)); return *this;}

    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline SamplingRule& WithURLPath(const char* value) { SetURLPath(value); return *this;}


    /**
     * <p>The version of the sampling rule format (<code>1</code>).</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version of the sampling rule format (<code>1</code>).</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the sampling rule format (<code>1</code>).</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the sampling rule format (<code>1</code>).</p>
     */
    inline SamplingRule& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline SamplingRule& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_ruleARN;
    bool m_ruleARNHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    double m_fixedRate;
    bool m_fixedRateHasBeenSet;

    int m_reservoirSize;
    bool m_reservoirSizeHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_serviceType;
    bool m_serviceTypeHasBeenSet;

    Aws::String m_host;
    bool m_hostHasBeenSet;

    Aws::String m_hTTPMethod;
    bool m_hTTPMethodHasBeenSet;

    Aws::String m_uRLPath;
    bool m_uRLPathHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
