/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/TargetResource.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * A component for DNS/Routing Control Readiness Checks<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DNSTargetResource">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource
  {
  public:
    DNSTargetResource();
    DNSTargetResource(Aws::Utils::Json::JsonView jsonValue);
    DNSTargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline DNSTargetResource& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline DNSTargetResource& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The DNS Name that acts as ingress point to a portion of application
     */
    inline DNSTargetResource& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline const Aws::String& GetHostedZoneArn() const{ return m_hostedZoneArn; }

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline bool HostedZoneArnHasBeenSet() const { return m_hostedZoneArnHasBeenSet; }

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline void SetHostedZoneArn(const Aws::String& value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn = value; }

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline void SetHostedZoneArn(Aws::String&& value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn = std::move(value); }

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline void SetHostedZoneArn(const char* value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn.assign(value); }

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline DNSTargetResource& WithHostedZoneArn(const Aws::String& value) { SetHostedZoneArn(value); return *this;}

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline DNSTargetResource& WithHostedZoneArn(Aws::String&& value) { SetHostedZoneArn(std::move(value)); return *this;}

    /**
     * The Hosted Zone ARN that contains the DNS record with the provided name of
     * target resource.
     */
    inline DNSTargetResource& WithHostedZoneArn(const char* value) { SetHostedZoneArn(value); return *this;}


    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline const Aws::String& GetRecordSetId() const{ return m_recordSetId; }

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline void SetRecordSetId(const Aws::String& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = value; }

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline void SetRecordSetId(Aws::String&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::move(value); }

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline void SetRecordSetId(const char* value) { m_recordSetIdHasBeenSet = true; m_recordSetId.assign(value); }

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline DNSTargetResource& WithRecordSetId(const Aws::String& value) { SetRecordSetId(value); return *this;}

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline DNSTargetResource& WithRecordSetId(Aws::String&& value) { SetRecordSetId(std::move(value)); return *this;}

    /**
     * The R53 Set Id to uniquely identify a record given a Name and a Type
     */
    inline DNSTargetResource& WithRecordSetId(const char* value) { SetRecordSetId(value); return *this;}


    /**
     * The Type of DNS Record of target resource
     */
    inline const Aws::String& GetRecordType() const{ return m_recordType; }

    /**
     * The Type of DNS Record of target resource
     */
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }

    /**
     * The Type of DNS Record of target resource
     */
    inline void SetRecordType(const Aws::String& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * The Type of DNS Record of target resource
     */
    inline void SetRecordType(Aws::String&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::move(value); }

    /**
     * The Type of DNS Record of target resource
     */
    inline void SetRecordType(const char* value) { m_recordTypeHasBeenSet = true; m_recordType.assign(value); }

    /**
     * The Type of DNS Record of target resource
     */
    inline DNSTargetResource& WithRecordType(const Aws::String& value) { SetRecordType(value); return *this;}

    /**
     * The Type of DNS Record of target resource
     */
    inline DNSTargetResource& WithRecordType(Aws::String&& value) { SetRecordType(std::move(value)); return *this;}

    /**
     * The Type of DNS Record of target resource
     */
    inline DNSTargetResource& WithRecordType(const char* value) { SetRecordType(value); return *this;}


    
    inline const TargetResource& GetTargetResource() const{ return m_targetResource; }

    
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    
    inline void SetTargetResource(const TargetResource& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    
    inline void SetTargetResource(TargetResource&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    
    inline DNSTargetResource& WithTargetResource(const TargetResource& value) { SetTargetResource(value); return *this;}

    
    inline DNSTargetResource& WithTargetResource(TargetResource&& value) { SetTargetResource(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_hostedZoneArn;
    bool m_hostedZoneArnHasBeenSet;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet;

    Aws::String m_recordType;
    bool m_recordTypeHasBeenSet;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
